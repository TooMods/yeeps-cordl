#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableSelectMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRInteractionStrengthFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DistanceInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXROverridesGazeAutoSelect_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableSelectMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractableEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType::__XRBaseInteractable__MovementType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType::__XRBaseInteractable__MovementType() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType::VelocityTracking{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType::Kinematic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType::Instantaneous{ static_cast<int32_t>(
    0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode::__XRBaseInteractable__DistanceCalculationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode::__XRBaseInteractable__DistanceCalculationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode
    UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode::TransformPosition{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode::ColliderPosition{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode::ColliderVolume{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a05bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c._Awake_b__153_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::*)(::UnityEngine::Collider*)>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::_Awake_b__153_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25a05c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get(), "<Awake>b__153_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::setStaticF___9__153_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__153_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::getStaticF___9__153_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__153_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::_Awake_b__153_0(::UnityEngine::Collider* col) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*>::get(), "<Awake>b__153_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, col);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c::__XRBaseInteractable____c() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.add_registered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::add_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x259c46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "add_registered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.remove_registered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::remove_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x259c51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "remove_registered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.add_unregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::add_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x259c5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "add_unregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.remove_unregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::remove_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x259c67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "remove_unregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_getDistanceOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* (
        ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_getDistanceOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_getDistanceOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_getDistanceOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_getDistanceOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_getDistanceOverride",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactionManager",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_interactionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionManager)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x259c744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_colliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_colliders",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactionLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactionLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_interactionLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionLayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_distanceCalculationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_distanceCalculationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_distanceCalculationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_distanceCalculationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_distanceCalculationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_distanceCalculationMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_selectMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_selectMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_customReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_customReticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_customReticle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_customReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_customReticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_customReticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_allowGazeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_allowGazeInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_allowGazeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeInteraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259c89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeInteraction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_allowGazeSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_allowGazeSelect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_allowGazeSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259c8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeSelect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_overrideGazeTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_overrideGazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_overrideGazeTimeToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_overrideGazeTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_overrideGazeTimeToSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259c8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_overrideGazeTimeToSelect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_gazeTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_gazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_gazeTimeToSelect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_gazeTimeToSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_gazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_gazeTimeToSelect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_overrideTimeToAutoDeselectGaze
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_overrideTimeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_overrideTimeToAutoDeselectGaze", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_overrideTimeToAutoDeselectGaze
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_overrideTimeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259c8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_overrideTimeToAutoDeselectGaze",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_timeToAutoDeselectGaze
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_timeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_timeToAutoDeselectGaze", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_timeToAutoDeselectGaze
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_timeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_timeToAutoDeselectGaze",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_allowGazeAssistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeAssistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_allowGazeAssistance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_allowGazeAssistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeAssistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259c90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeAssistance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_firstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_firstHoverEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_firstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstHoverEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_lastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_lastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_lastHoverExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_lastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_lastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_lastHoverExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_hoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_hoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_hoverEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_hoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_hoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_hoverExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_firstSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_firstSelectEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_firstSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstSelectEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_lastSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_lastSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_lastSelectExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_lastSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_lastSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_lastSelectExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_selectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_selectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_selectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_selectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_activated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_activated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_activated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_activated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_activated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_activated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_deactivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_deactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_deactivated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_deactivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_deactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_deactivated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactorsHovering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactorsHovering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x259c9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactorsHovering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_isHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_isHovered)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x259ca48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_isHovered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactorsSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactorsSelecting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x259caa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_interactorsSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_firstInteractorSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstInteractorSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_firstInteractorSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_firstInteractorSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstInteractorSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstInteractorSelecting",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_isSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_isSelected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x259cb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_isSelected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_startingHoverFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_startingHoverFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_startingHoverFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingHoverFilters",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_hoverFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverFilters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_startingSelectFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_startingSelectFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_startingSelectFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingSelectFilters",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_selectFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectFilters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_startingInteractionStrengthFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_startingInteractionStrengthFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_startingInteractionStrengthFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingInteractionStrengthFilters",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactionStrengthFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* (
        ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionStrengthFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_interactionStrengthFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_largestInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_largestInteractionStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259cbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_largestInteractionStrength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259cbf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::Awake)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x259cbf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x259d1a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259d1bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259d24c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.FindCreateInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x259ceec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "FindCreateInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.RegisterWithInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x259c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "RegisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnregisterWithInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x259d1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "UnregisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetAttachTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259d250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetAttachPoseOnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x259d258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetAttachPoseOnSelect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetLocalAttachPoseOnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetLocalAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x259d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetLocalAttachPoseOnSelect",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetDistanceSqrToInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistanceSqrToInteractor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x259d3f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistance)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x259d520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetInteractionStrength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x259d654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetInteractionStrength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsHoverableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHoverableBy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x259d6d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsSelectableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x259d754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHovered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x259d7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsHovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x259d838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsSelected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHovered)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x259d890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsHovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x259d904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsSelected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetCustomReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetCustomReticle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x259d978;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.AttachCustomReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::AttachCustomReticle)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x259d9f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.RemoveCustomReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RemoveCustomReticle)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x259dc94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.CaptureAttachPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::CaptureAttachPose)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x259dea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "CaptureAttachPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.ProcessInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259e0e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRInteractionStrengthInteractable_ProcessInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractionStrengthInteractable_ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable.ProcessInteractionStrength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnRegistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnRegistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnUnregistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnUnregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnActivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnActivated", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnDeactivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnDeactivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnDeactivated", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_IsHoverableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_IsHoverableBy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x259e134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.IsHoverableBy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntering", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntered", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExiting", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExited", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_IsSelectableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_IsSelectableBy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x259e244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.IsSelectableBy", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExiting", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExited", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnRegistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x259e354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnUnregistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x259e48c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntering)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x259e5c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntered)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x259e820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExiting)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x259e8e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExited)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x259eb34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 72));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x259ebf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x259ed4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 74));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x259ee0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x259ef68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnActivated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x259f09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnDeactivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDeactivated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x259f11c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.ProcessInteractionStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x259f19c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 79));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.ProcessHoverFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessHoverFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessHoverFilters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.ProcessSelectFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessSelectFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259e304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessSelectFilters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.ProcessInteractionStrengthFilters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259f778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessInteractionStrengthFilters",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_interactionLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                 "get_interactionLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_interactionLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionLayerMask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onFirstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onFirstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onFirstHoverEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onFirstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onFirstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onFirstHoverEntered",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onLastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onLastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onLastHoverExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onLastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onLastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onLastHoverExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onHoverEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onHoverExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectEntered",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectEntered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectExited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectExited", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectCanceled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectCanceled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onActivate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onActivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onDeactivate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_onDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onDeactivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onFirstHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onFirstHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onFirstHoverEnter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverEnter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverExit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onLastHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onLastHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onLastHoverExit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectEnter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectExit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_onSelectCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectCancel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259f860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntered)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x259f864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 81));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259f8fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExited)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x259f900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259f994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x259f998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 85));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259f9f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 86));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x259f9fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectCanceling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectCanceling)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259fa5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 88));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectCanceled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x259fa60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 89));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnActivate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x259fac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 90));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.OnDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDeactivate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x259fb20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 91));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.GetDistanceSqrToInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistanceSqrToInteractor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259fb80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.AttachCustomReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::AttachCustomReticle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259fb90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.RemoveCustomReticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RemoveCustomReticle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259fba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 94));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_hoveringInteractors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoveringInteractors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259fbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoveringInteractors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.get_selectingInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectingInteractor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x259fbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectingInteractor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.set_selectingInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectingInteractor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x259fc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectingInteractor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsHoverableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHoverableBy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259fd54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.IsSelectableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259fd64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 96));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::_ctor)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x259fd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_IXRInteractable_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a0550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.get_transform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRActivateInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRHoverInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRSelectInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractionStrengthInteractable() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXROverridesGazeAutoSelect() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_registered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_registered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registered;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_unregistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_unregistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unregistered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__getDistanceOverride_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getDistanceOverride_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__getDistanceOverride_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getDistanceOverride_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set__getDistanceOverride_k__BackingField(
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getDistanceOverride_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionLayerMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractionLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InteractionLayerMask = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionLayers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionLayers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InteractionLayers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_DistanceCalculationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceCalculationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_DistanceCalculationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceCalculationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_DistanceCalculationMode(
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistanceCalculationMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_SelectMode(::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectMode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_CustomReticle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomReticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_CustomReticle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomReticle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CustomReticle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_AllowGazeInteraction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowGazeInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_AllowGazeSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowGazeSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OverrideGazeTimeToSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideGazeTimeToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OverrideGazeTimeToSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideGazeTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OverrideGazeTimeToSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverrideGazeTimeToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_GazeTimeToSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeTimeToSelect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_GazeTimeToSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_GazeTimeToSelect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GazeTimeToSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideTimeToAutoDeselectGaze;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideTimeToAutoDeselectGaze;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OverrideTimeToAutoDeselectGaze(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverrideTimeToAutoDeselectGaze = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_TimeToAutoDeselectGaze() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeToAutoDeselectGaze;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_TimeToAutoDeselectGaze() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeToAutoDeselectGaze;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_TimeToAutoDeselectGaze(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeToAutoDeselectGaze = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeAssistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeAssistance;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AllowGazeAssistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowGazeAssistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_AllowGazeAssistance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowGazeAssistance = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_FirstHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstHoverEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_FirstHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_FirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstHoverEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LastHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastHoverExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LastHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_LastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastHoverExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoverEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoverExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_FirstSelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstSelectEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_FirstSelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_FirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstSelectEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LastSelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSelectExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LastSelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_LastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastSelectExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Activated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Activated;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Activated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Activated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_Activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Activated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Deactivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Deactivated;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_Deactivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Deactivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_Deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Deactivated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractorsHovering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorsHovering;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractorsHovering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorsHovering;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractorsHovering(
    ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractorsHovering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractorsSelecting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorsSelecting;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractorsSelecting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractorsSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractorsSelecting(
    ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractorsSelecting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__firstInteractorSelecting_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstInteractorSelecting_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__firstInteractorSelecting_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstInteractorSelecting_k__BackingField;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set__firstInteractorSelecting_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstInteractorSelecting_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingHoverFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingHoverFilters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingHoverFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingHoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingHoverFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverFilters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_HoverFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_HoverFilters(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoverFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingSelectFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingSelectFilters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingSelectFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingSelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingSelectFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectFilters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_SelectFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_SelectFilters(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingInteractionStrengthFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingInteractionStrengthFilters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_StartingInteractionStrengthFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingInteractionStrengthFilters;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_StartingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingInteractionStrengthFilters)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengthFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengthFilters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengthFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengthFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractionStrengthFilters(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractionStrengthFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LargestInteractionStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LargestInteractionStrength;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LargestInteractionStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LargestInteractionStrength;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LargestInteractionStrength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AttachPoseOnSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachPoseOnSelect;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_AttachPoseOnSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_AttachPoseOnSelect(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttachPoseOnSelect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LocalAttachPoseOnSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalAttachPoseOnSelect;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_LocalAttachPoseOnSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalAttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_LocalAttachPoseOnSelect(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalAttachPoseOnSelect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_ReticleCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReticleCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_ReticleCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReticleCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_ReticleCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReticleCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_VariableSelectInteractors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariableSelectInteractors;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_VariableSelectInteractors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariableSelectInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_VariableSelectInteractors(
    ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VariableSelectInteractors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengths;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengths;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_InteractionStrengths(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractionStrengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_RegisteredInteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_RegisteredInteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractionManager;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegisteredInteractionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnFirstHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFirstHoverEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnFirstHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFirstHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnFirstHoverEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnLastHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLastHoverExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnLastHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLastHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnLastHoverExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHoverEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnHoverEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHoverExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnHoverExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectEntered;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnSelectEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectExited;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnSelectExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectCanceled;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnSelectCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnSelectCanceled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnActivate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActivate;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnActivate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnActivate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnDeactivate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeactivate;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get_m_OnDeactivate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeactivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set_m_OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDeactivate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__hoveringInteractors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoveringInteractors_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_get__hoveringInteractors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoveringInteractors_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::__cordl_internal_set__hoveringInteractors_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveringInteractors_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, "s_InteractionManagerCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get>(
      std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::getStaticF_s_InteractionManagerCache() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, "s_InteractionManagerCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::getStaticF_s_ProcessInteractionStrengthMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "add_registered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "remove_registered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "add_unregistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "remove_unregistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_getDistanceOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_getDistanceOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_getDistanceOverride(
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_getDistanceOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactionManager",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_colliders() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_colliders",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactionLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionLayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_distanceCalculationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_distanceCalculationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_distanceCalculationMode(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_distanceCalculationMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectMode(::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_customReticle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_customReticle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_customReticle(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_customReticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeInteraction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_allowGazeInteraction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeInteraction(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeInteraction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeSelect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_allowGazeSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeSelect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_overrideGazeTimeToSelect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_overrideGazeTimeToSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_overrideGazeTimeToSelect(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_overrideGazeTimeToSelect",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_gazeTimeToSelect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_gazeTimeToSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_gazeTimeToSelect(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_gazeTimeToSelect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_overrideTimeToAutoDeselectGaze() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_overrideTimeToAutoDeselectGaze", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_overrideTimeToAutoDeselectGaze(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_overrideTimeToAutoDeselectGaze",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_timeToAutoDeselectGaze() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_timeToAutoDeselectGaze", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_timeToAutoDeselectGaze(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_timeToAutoDeselectGaze",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_allowGazeAssistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_allowGazeAssistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_allowGazeAssistance(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_allowGazeAssistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_firstHoverEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstHoverEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_lastHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_lastHoverExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_lastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_lastHoverExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_hoverEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_hoverExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstSelectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_firstSelectEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstSelectEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_lastSelectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_lastSelectExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_lastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_lastSelectExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_activated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_activated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_activated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_deactivated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_deactivated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_deactivated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactorsHovering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactorsHovering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>*, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_isHovered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_isHovered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactorsSelecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactorsSelecting",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_firstInteractorSelecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_firstInteractorSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_firstInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_firstInteractorSelecting",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_isSelected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_isSelected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingHoverFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_startingHoverFilters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingHoverFilters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoverFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoverFilters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingSelectFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_startingSelectFilters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingSelectFilters",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectFilters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*, false>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_startingInteractionStrengthFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_startingInteractionStrengthFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_startingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_startingInteractionStrengthFilters",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionStrengthFilters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_interactionStrengthFilters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*, false>(
      this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_largestInteractionStrength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "get_largestInteractionStrength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::FindCreateInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "FindCreateInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RegisterWithInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "RegisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnregisterWithInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                               "UnregisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, interactor);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetAttachPoseOnSelect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, interactor);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetLocalAttachPoseOnSelect",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistance(::UnityEngine::Vector3 position) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, false>(this, ___internal_method, position);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "GetInteractionStrength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHovered(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsHovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelected(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsSelected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHovered(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsHovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelected(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "IsSelected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "CaptureAttachPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractionStrengthInteractable_ProcessInteractionStrength(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable.ProcessInteractionStrength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnRegistered(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnRegistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnUnregistered(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnUnregistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnActivated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnDeactivated(
    ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnDeactivated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_IsHoverableBy(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.IsHoverableBy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntered", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExiting", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExited", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_IsSelectableBy(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.IsSelectableBy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntering(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntered(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntered", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExiting(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExiting", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExited", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 79)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessHoverFilters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessSelectFilters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::ProcessInteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                            float_t interactionStrength) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "ProcessInteractionStrengthFilters",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor, interactionStrength);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_interactionLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_interactionLayerMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_interactionLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_interactionLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onFirstHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onFirstHoverEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onFirstHoverEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onLastHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onLastHoverExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onLastHoverExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onHoverEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onHoverExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectEntered",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectEntered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectExited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectCanceled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onSelectCanceled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onActivate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onActivate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onActivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onDeactivate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onDeactivate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_onDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_onDeactivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onFirstHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onFirstHoverEnter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverEnter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onHoverExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onHoverExit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onLastHoverExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onLastHoverExit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectEnter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectExit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_onSelectCancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_onSelectCancel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 81)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 85)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 86)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectCanceling(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 88)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnActivate(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 90)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 91)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 94)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*
UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_hoveringInteractors() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_hoveringInteractors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::get_selectingInteractor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "get_selectingInteractor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::set_selectingInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), "set_selectingInteractor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_IXRInteractable_get_transform() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRInteractable.get_transform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable::XRBaseInteractable() {}
