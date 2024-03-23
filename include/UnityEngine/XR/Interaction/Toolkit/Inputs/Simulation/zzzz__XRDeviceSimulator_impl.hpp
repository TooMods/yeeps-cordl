#pragma once
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/zzzz__CursorLockMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMD_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space::__XRDeviceSimulator__Space(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space::__XRDeviceSimulator__Space() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space::Local{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space::Parent{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space::Screen{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode::__XRDeviceSimulator__TransformationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode::__XRDeviceSimulator__TransformationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode::Translate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode::Rotate{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::__XRDeviceSimulator__TargetedDevices(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::__XRDeviceSimulator__TargetedDevices() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::FPS{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::LeftController{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::RightController{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices::HMD{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::__XRDeviceSimulator__Axis2DTargets(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::__XRDeviceSimulator__Axis2DTargets() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::Primary2DAxis{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
    UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets::Secondary2DAxis{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_deviceSimulatorActionAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_deviceSimulatorActionAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_deviceSimulatorActionAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_deviceSimulatorActionAsset",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_controllerActionAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_controllerActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_controllerActionAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_controllerActionAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_controllerActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_controllerActionAsset",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardXTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardXTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff5d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_keyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardYTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff5f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardYTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff5f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_keyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardZTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardZTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff611c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_keyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateLeftAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateLeftAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff631c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_manipulateLeftAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateRightAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateRightAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_manipulateRightAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff671c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateRightAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff68ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateRightAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff68b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateBodyAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateBodyAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff6a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateHeadAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateHeadAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateHeadAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateHeadAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff6be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_manipulateHeadAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_cycleDevicesAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cycleDevicesAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_cycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_cycleDevicesAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cycleDevicesAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff6de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_cycleDevicesAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_stopManipulationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_stopManipulationAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff6f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_stopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_stopManipulationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_stopManipulationAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff6f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_stopManipulationAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseDeltaAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseDeltaAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff710c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseDeltaAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseDeltaAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_mouseDeltaAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff730c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_mouseScrollAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rotateModeOverrideAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rotateModeOverrideAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_rotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rotateModeOverrideAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rotateModeOverrideAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_rotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleMouseTransformationModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleMouseTransformationModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_negateModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateModeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff78a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_negateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_negateModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateModeAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff78ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_negateModeAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_xConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_xConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff7aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_xConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_xConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_xConstraintAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_xConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_yConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_yConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff7ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_yConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_yConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_yConstraintAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_yConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_zConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_zConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff7ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_zConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_zConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_zConstraintAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff7eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_zConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_resetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_resetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff80a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_resetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_resetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_resetAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff80ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_resetAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleCursorLockAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleCursorLockAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff82a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleCursorLockAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleCursorLockAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff82ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleCursorLockAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleDevicePositionTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff843c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleDevicePositionTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff8444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_togglePrimary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_togglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff85d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_togglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_togglePrimary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_togglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff85dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_togglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleSecondary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff876c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_toggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleSecondary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff8774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_toggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_axis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff8904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_axis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_axis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_axis2DAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_restingHandAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_restingHandAxis2DAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff8b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_restingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_restingHandAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_restingHandAxis2DAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff8b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_restingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_gripAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff8d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_gripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_gripAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff8d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_gripAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_triggerAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff8f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_triggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_triggerAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff8f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_triggerAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryButtonAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_primaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryButtonAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff910c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_primaryButtonAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryButtonAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_secondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryButtonAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_secondaryButtonAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_menuAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_menuAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_menuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_menuAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_menuAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff950c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_menuAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_primary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff970c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_primary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_secondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff990c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_secondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_primary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff9b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_primary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_secondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff9d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_secondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff9f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_primaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryTouchAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ff9f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_primaryTouchAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_secondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryTouchAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ffa10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "set_secondaryTouchAction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_cameraTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_cameraTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_cameraTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_cameraTransform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardTranslateSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardTranslateSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardTranslateSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space)>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardTranslateSpace",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseTranslateSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseTranslateSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseTranslateSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space)>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseTranslateSpace",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardXTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardXTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardXTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardXTranslateSpeed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardYTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardYTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardYTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardYTranslateSpeed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardZTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardZTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardZTranslateSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardZTranslateSpeed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardBodyTranslateMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardBodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_keyboardBodyTranslateMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardBodyTranslateMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardBodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardBodyTranslateMultiplier",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseXTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseXTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseXTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseXTranslateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseYTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYTranslateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseScrollTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollTranslateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseScrollTranslateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseXRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseXRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseXRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseXRotateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseYRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYRotateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseScrollRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollRotateSensitivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseScrollRotateSensitivity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYRotateInvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateInvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseYRotateInvert", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYRotateInvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateInvert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYRotateInvert",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_desiredCursorLockMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CursorLockMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_desiredCursorLockMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_desiredCursorLockMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_desiredCursorLockMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::CursorLockMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_desiredCursorLockMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_desiredCursorLockMode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CursorLockMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_removeOtherHMDDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_removeOtherHMDDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_removeOtherHMDDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_removeOtherHMDDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_removeOtherHMDDevices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_removeOtherHMDDevices",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_deviceSimulatorUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_deviceSimulatorUI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_deviceSimulatorUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_deviceSimulatorUI",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_gripAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_gripAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_gripAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_gripAmount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_triggerAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_triggerAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_triggerAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_triggerAmount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_hmdIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_hmdIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_hmdIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdIsTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_hmdIsTracked",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_hmdTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputTrackingState (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_hmdTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_hmdTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_hmdTrackingState",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_leftControllerIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_leftControllerIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_leftControllerIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_leftControllerIsTracked",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_leftControllerTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_leftControllerTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_leftControllerTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_leftControllerTrackingState",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rightControllerIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_rightControllerIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rightControllerIsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_rightControllerIsTracked",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rightControllerTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_rightControllerTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rightControllerTrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_rightControllerTrackingState",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseTransformationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTransformationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_mouseTransformationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseTransformationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTransformationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseTransformationMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_negateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_negateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_negateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateMode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffa4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_negateMode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_axis2DTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_axis2DTargets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_axis2DTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_axis2DTargets",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingLeftController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ffa4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulatingLeftController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingRightController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ffa4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulatingRightController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingFPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingFPS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ffa4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_manipulatingFPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ffa50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ffa564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_instance",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_targetedDeviceInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "get_targetedDeviceInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_targetedDeviceInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffa5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_targetedDeviceInput",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Awake)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x2ffa5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnEnable)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2ffac04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDisable)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2ffb1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2ffb434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.FindCameraTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::FindCameraTransform)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2ffafbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "FindCameraTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessPoseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessPoseInput)> {
  constexpr static std::size_t size = 0x1558;
  constexpr static std::size_t addrs = 0x2ffb56c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessControlInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessControlInput)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ffd10c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessAxis2DControlInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAxis2DControlInput)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2ffd184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessButtonControlInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessButtonControlInput)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2ffd480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessAnalogButtonControlInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAnalogButtonControlInput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ffd5fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.AddDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::AddDevices)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x2ffd650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.RemoveDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::RemoveDevices)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ffdc94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnInputDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnInputDeviceChange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2ffdd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "OnInputDeviceChange", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetResetScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetResetScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ffd074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "GetResetScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetAxes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, ::UnityEngine::Transform*, ByRef<::UnityEngine::Vector3>,
                         ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetAxes)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2ffcac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetAxes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetDeltaRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>,
    ByRef<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetDeltaRotation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ffce9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetDeltaRotation",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetDeltaRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>,
    ByRef<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetDeltaRotation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ffcf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetDeltaRotation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*,
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Subscribe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ffde74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Subscribe",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Unsubscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*,
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Unsubscribe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ffdf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Unsubscribe",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Negate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode (*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ffe040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Negate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Negate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CursorLockMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::CursorLockMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ffe058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Negate",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CursorLockMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardXTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardXTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff5e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeKeyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardXTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardXTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff5d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeKeyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardYTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardYTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff602c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeKeyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardYTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardYTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff5f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeKeyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardZTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardZTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff622c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeKeyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardZTranslateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardZTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff6144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeKeyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateLeftAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateLeftAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff6344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateRightAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff662c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateRightAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff6544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff67f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateLeftAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateRightAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateRightAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateRightAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff68dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateBodyAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateBodyAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateHeadAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateHeadAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff6cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeManipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateHeadAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateHeadAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff6c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeManipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeCycleDevicesAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeCycleDevicesAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeCycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeCycleDevicesAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeCycleDevicesAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeCycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeStopManipulationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeStopManipulationAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff7058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeStopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeStopManipulationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeStopManipulationAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff6fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeStopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMouseDeltaAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseDeltaAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeMouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMouseDeltaAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseDeltaAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff713c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeMouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMouseScrollAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseScrollAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeMouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMouseScrollAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseScrollAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff733c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeMouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeRotateModeOverrideAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRotateModeOverrideAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeRotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeRotateModeOverrideAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRotateModeOverrideAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeRotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleMouseTransformationModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff77f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleMouseTransformationModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeNegateModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeNegateModeAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff79bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeNegateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeNegateModeAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeNegateModeAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff78d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeNegateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeXConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeXConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeXConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeXConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeXConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeXConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeYConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeYConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeYConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeYConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeYConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeYConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeZConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeZConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeZConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeZConstraintAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeZConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff7ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeZConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeResetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeResetAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff81bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeResetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeResetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeResetAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff80d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeResetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleCursorLockAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleCursorLockAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff8388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleCursorLockAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleCursorLockAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff82d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleDevicePositionTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff8520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleDevicePositionTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff846c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeTogglePrimary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTogglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff86b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeTogglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeTogglePrimary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTogglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff8604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeTogglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleSecondary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff8850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeToggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleSecondary2DAxisTargetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ff879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeToggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeRestingHandAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRestingHandAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeRestingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeRestingHandAxis2DAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRestingHandAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeRestingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeGripAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeGripAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeGripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeGripAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeGripAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeGripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeTriggerAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTriggerAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff901c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeTriggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeTriggerAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTriggerAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff8f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeTriggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff921c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribePrimaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribePrimaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeSecondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondaryButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeSecondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMenuAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMenuAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff961c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeMenuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMenuAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMenuAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeMenuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff981c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribePrimary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribePrimary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeSecondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondary2DAxisClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeSecondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribePrimary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribePrimary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeSecondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondary2DAxisTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeSecondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ffa01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribePrimaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ff9f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribePrimaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ffa21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "SubscribeSecondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondaryTouchAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ffa134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 "UnsubscribeSecondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardXTranslatePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ffe06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardXTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardXTranslateCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardXTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardYTranslatePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ffe0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardYTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardYTranslateCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardYTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardZTranslatePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ffe134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardZTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardZTranslateCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnKeyboardZTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateLeftPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateLeftPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateLeftCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateLeftCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateRightPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateRightPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateRightCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateRightCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateLeftPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateLeftPerformed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ffe228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleManipulateLeftPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateRightPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateRightPerformed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ffe274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleManipulateRightPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateBodyPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateBodyPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleManipulateBodyPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateHeadPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateHeadPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateHeadCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnManipulateHeadCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnCycleDevicePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnCycleDevicePerformed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ffe314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnCycleDevicePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnStopManipulationPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnStopManipulationPerformed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnStopManipulationPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseDeltaPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ffe384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnMouseDeltaPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseDeltaCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ffe3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnMouseDeltaCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseScrollPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ffe438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnMouseScrollPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseScrollCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ffe498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnMouseScrollCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRotateModeOverridePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverridePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnRotateModeOverridePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRotateModeOverrideCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverrideCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnRotateModeOverrideCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleMouseTransformationModePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleMouseTransformationModePerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ffe500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleMouseTransformationModePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnNegateModePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnNegateModePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnNegateModeCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModeCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnNegateModeCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnXConstraintPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnXConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnXConstraintCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnXConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnYConstraintPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnYConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnYConstraintCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnYConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnZConstraintPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnZConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnZConstraintCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnZConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnResetPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnResetPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnResetCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnResetCanceled",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleCursorLockPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleCursorLockPerformed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ffe5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleCursorLockPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleDevicePositionTargetPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleDevicePositionTargetPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleDevicePositionTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTogglePrimary2DAxisTargetPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTogglePrimary2DAxisTargetPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnTogglePrimary2DAxisTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleSecondary2DAxisTargetPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleSecondary2DAxisTargetPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ffe638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnToggleSecondary2DAxisTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnAxis2DPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DPerformed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2ffe65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnAxis2DPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnAxis2DCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ffe730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnAxis2DCanceled",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRestingHandAxis2DPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DPerformed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2ffe784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnRestingHandAxis2DPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRestingHandAxis2DCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ffe858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnRestingHandAxis2DCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnGripPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnGripPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnGripCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnGripCanceled",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTriggerPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnTriggerPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTriggerCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnTriggerCanceled",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryButtonPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimaryButtonPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryButtonCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimaryButtonCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryButtonPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondaryButtonPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryButtonCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondaryButtonCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMenuPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnMenuPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMenuCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnMenuCanceled",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimary2DAxisClickPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisClickCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimary2DAxisClickCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondary2DAxisClickPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisClickCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondary2DAxisClickCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisTouchPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimary2DAxisTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisTouchCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimary2DAxisTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisTouchPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondary2DAxisTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisTouchCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondary2DAxisTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryTouchPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimaryTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryTouchCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnPrimaryTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryTouchPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ffe974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondaryTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryTouchCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ffe980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                    "OnSecondaryTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetInputAction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ffdf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetInputAction",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.TryExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>, ByRef<int64_t>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TryExecuteCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ffe988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "TryExecuteCommand",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ffe9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorActionAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceSimulatorActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorActionAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceSimulatorActionAsset;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DeviceSimulatorActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeviceSimulatorActionAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ControllerActionAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControllerActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ControllerActionAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControllerActionAsset;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ControllerActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ControllerActionAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyboardXTranslateAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyboardYTranslateAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyboardZTranslateAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateLeftAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateLeftAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateLeftAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateLeftAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ManipulateLeftAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateRightAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateRightAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateRightAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateRightAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ManipulateRightAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateLeftAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateLeftAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateLeftAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateLeftAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleManipulateLeftAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateRightAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateRightAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateRightAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateRightAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleManipulateRightAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateBodyAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateBodyAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateBodyAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleManipulateBodyAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateBodyAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleManipulateBodyAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateHeadAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateHeadAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateHeadAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulateHeadAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateHeadAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ManipulateHeadAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CycleDevicesAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CycleDevicesAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CycleDevicesAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CycleDevicesAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CycleDevicesAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CycleDevicesAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_StopManipulationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopManipulationAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_StopManipulationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopManipulationAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_StopManipulationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StopManipulationAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDeltaAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDeltaAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseDeltaAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MouseDeltaAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MouseScrollAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateModeOverrideAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateModeOverrideAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RotateModeOverrideAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RotateModeOverrideAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleMouseTransformationModeAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleMouseTransformationModeAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleMouseTransformationModeAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleMouseTransformationModeAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleMouseTransformationModeAction(
    ::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleMouseTransformationModeAction)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_NegateModeAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NegateModeAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_NegateModeAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NegateModeAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_NegateModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NegateModeAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XConstraintAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_XConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XConstraintAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YConstraintAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_YConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_YConstraintAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZConstraintAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ZConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ZConstraintAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ResetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResetAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleCursorLockAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleCursorLockAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleCursorLockAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleCursorLockAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleCursorLockAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleCursorLockAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleDevicePositionTargetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleDevicePositionTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleDevicePositionTargetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleDevicePositionTargetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleDevicePositionTargetAction(
    ::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleDevicePositionTargetAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TogglePrimary2DAxisTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TogglePrimary2DAxisTargetAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TogglePrimary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TogglePrimary2DAxisTargetAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSecondary2DAxisTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSecondary2DAxisTargetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleSecondary2DAxisTargetAction(
    ::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToggleSecondary2DAxisTargetAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Axis2DAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Axis2DAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Axis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Axis2DAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestingHandAxis2DAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestingHandAxis2DAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RestingHandAxis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RestingHandAxis2DAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GripAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TriggerAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryButtonAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryButtonAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrimaryButtonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryButtonAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryButtonAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SecondaryButtonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MenuAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MenuAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisClickAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Primary2DAxisClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisClickAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Secondary2DAxisClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisTouchAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Primary2DAxisTouchAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisTouchAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Secondary2DAxisTouchAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryTouchAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrimaryTouchAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryTouchAction;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SecondaryTouchAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CameraTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CameraTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardTranslateSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardTranslateSpace;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardTranslateSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardTranslateSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardTranslateSpace(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardTranslateSpace = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseTranslateSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseTranslateSpace;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseTranslateSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseTranslateSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseTranslateSpace(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseTranslateSpace = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardXTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardYTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardZTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardBodyTranslateMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardBodyTranslateMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardBodyTranslateMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardBodyTranslateMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardBodyTranslateMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardBodyTranslateMultiplier = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXTranslateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseXTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXTranslateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseXTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseXTranslateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseXTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYTranslateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYTranslateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYTranslateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseYTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollTranslateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollTranslateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollTranslateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseScrollTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXRotateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseXRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXRotateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseXRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseXRotateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseXRotateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYRotateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseYRotateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollRotateSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseScrollRotateSensitivity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateInvert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYRotateInvert;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateInvert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseYRotateInvert;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYRotateInvert(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseYRotateInvert = value;
}
constexpr ::UnityEngine::CursorLockMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DesiredCursorLockMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredCursorLockMode;
}
constexpr ::UnityEngine::CursorLockMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DesiredCursorLockMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredCursorLockMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DesiredCursorLockMode(::UnityEngine::CursorLockMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DesiredCursorLockMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RemoveOtherHMDDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveOtherHMDDevices;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RemoveOtherHMDDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveOtherHMDDevices;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RemoveOtherHMDDevices(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RemoveOtherHMDDevices = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceSimulatorUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceSimulatorUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DeviceSimulatorUI(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeviceSimulatorUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GripAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TriggerAmount = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDIsTracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDIsTracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDIsTracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HMDIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HMDTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerIsTracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerIsTracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerIsTracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftControllerTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerIsTracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerIsTracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerIsTracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightControllerTrackingState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__mouseTransformationMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseTransformationMode_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__mouseTransformationMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseTransformationMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__mouseTransformationMode_k__BackingField(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouseTransformationMode_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__negateMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negateMode_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__negateMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negateMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__negateMode_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____negateMode_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__axis2DTargets_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis2DTargets_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__axis2DTargets_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis2DTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__axis2DTargets_k__BackingField(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axis2DTargets_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TargetedDeviceInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetedDeviceInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TargetedDeviceInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetedDeviceInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TargetedDeviceInput(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetedDeviceInput = value;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>>&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CachedCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedCamera;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CachedCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CachedCamera(
    ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::Camera>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedCamera = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardXTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateInput(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardXTranslateInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardYTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateInput(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardYTranslateInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardZTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateInput(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardZTranslateInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDeltaInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseDeltaInput(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseDeltaInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseScrollInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollInput(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseScrollInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateModeOverrideInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotateModeOverrideInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RotateModeOverrideInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotateModeOverrideInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_XConstraintInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_YConstraintInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_YConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ZConstraintInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ResetInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Axis2DInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Axis2DInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Axis2DInput(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Axis2DInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestingHandAxis2DInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestingHandAxis2DInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RestingHandAxis2DInput(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RestingHandAxis2DInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GripInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GripInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TriggerInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryButtonInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryButtonInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimaryButtonInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryButtonInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryButtonInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SecondaryButtonInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MenuInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MenuInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisClickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisClickInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Primary2DAxisClickInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisClickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisClickInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Secondary2DAxisClickInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Primary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisTouchInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Primary2DAxisTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Secondary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisTouchInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Secondary2DAxisTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryTouchInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimaryTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SecondaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryTouchInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SecondaryTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulatedRestingHandAxis2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulatedRestingHandAxis2D;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulatedRestingHandAxis2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManipulatedRestingHandAxis2D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulatedRestingHandAxis2D(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManipulatedRestingHandAxis2D = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerEuler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerEuler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerEuler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerEuler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CenterEyeEuler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterEyeEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CenterEyeEuler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterEyeEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterEyeEuler = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDState;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HMDState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerState(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerState(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDDevice;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HMDDevice;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HMDDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerDevice;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftControllerDevice;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerDevice(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeftControllerDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerDevice;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*> const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightControllerDevice;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerDevice(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightControllerDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_OnInputDeviceChangeSubscribed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnInputDeviceChangeSubscribed;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_OnInputDeviceChangeSubscribed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnInputDeviceChangeSubscribed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_OnInputDeviceChangeSubscribed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnInputDeviceChangeSubscribed = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::setStaticF_s_LeftControllerDefaultInitialPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_LeftControllerDefaultInitialPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::getStaticF_s_LeftControllerDefaultInitialPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_LeftControllerDefaultInitialPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::setStaticF_s_RightControllerDefaultInitialPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_RightControllerDefaultInitialPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::getStaticF_s_RightControllerDefaultInitialPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_RightControllerDefaultInitialPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::setStaticF__instance_k__BackingField(
    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>, "<instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>(
      std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>, "<instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get>();
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorActionAsset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_deviceSimulatorActionAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorActionAsset(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_deviceSimulatorActionAsset",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_controllerActionAsset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_controllerActionAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_controllerActionAsset(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_controllerActionAsset",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_keyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_keyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_keyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateLeftAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_manipulateLeftAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateRightAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_manipulateRightAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateLeftAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateRightAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateBodyAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateBodyAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateHeadAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateHeadAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_manipulateHeadAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cycleDevicesAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_cycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cycleDevicesAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_cycleDevicesAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_stopManipulationAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_stopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_stopManipulationAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_stopManipulationAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseDeltaAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseDeltaAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_mouseDeltaAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_mouseScrollAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rotateModeOverrideAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_rotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rotateModeOverrideAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_rotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleMouseTransformationModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleMouseTransformationModeAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_negateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateModeAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_negateModeAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_xConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_xConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_xConstraintAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_xConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_yConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_yConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_yConstraintAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_yConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_zConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_zConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_zConstraintAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_zConstraintAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_resetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_resetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_resetAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_resetAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleCursorLockAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleCursorLockAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleCursorLockAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleDevicePositionTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleDevicePositionTargetAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_togglePrimary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_togglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_togglePrimary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_togglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleSecondary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_toggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleSecondary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_toggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_axis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_axis2DAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_restingHandAxis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_restingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_restingHandAxis2DAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_restingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_gripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_gripAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_triggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_triggerAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_primaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryButtonAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_primaryButtonAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_secondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryButtonAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_secondaryButtonAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_menuAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_menuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_menuAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_menuAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_primary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_primary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_secondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_secondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_primary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_primary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_secondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_secondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_primaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryTouchAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_primaryTouchAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_secondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryTouchAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "set_secondaryTouchAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cameraTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_cameraTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cameraTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_cameraTransform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardTranslateSpace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardTranslateSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardTranslateSpace(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardTranslateSpace",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTranslateSpace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseTranslateSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseTranslateSpace",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardXTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardXTranslateSpeed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardYTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardYTranslateSpeed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardZTranslateSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardZTranslateSpeed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardBodyTranslateMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_keyboardBodyTranslateMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardBodyTranslateMultiplier(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_keyboardBodyTranslateMultiplier",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXTranslateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseXTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXTranslateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseXTranslateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYTranslateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseYTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYTranslateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYTranslateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollTranslateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseScrollTranslateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollTranslateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseScrollTranslateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXRotateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseXRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXRotateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseXRotateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseYRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYRotateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollRotateSensitivity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseScrollRotateSensitivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollRotateSensitivity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseScrollRotateSensitivity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateInvert() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseYRotateInvert", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateInvert(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseYRotateInvert",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::CursorLockMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_desiredCursorLockMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_desiredCursorLockMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CursorLockMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_desiredCursorLockMode(::UnityEngine::CursorLockMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_desiredCursorLockMode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CursorLockMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_removeOtherHMDDevices() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_removeOtherHMDDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_removeOtherHMDDevices(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_removeOtherHMDDevices",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorUI() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_deviceSimulatorUI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorUI(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_deviceSimulatorUI",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAmount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_gripAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAmount(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_gripAmount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAmount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_triggerAmount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAmount(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_triggerAmount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdIsTracked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_hmdIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdIsTracked(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_hmdIsTracked",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdTrackingState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_hmdTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdTrackingState(::UnityEngine::XR::InputTrackingState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_hmdTrackingState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerIsTracked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_leftControllerIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerIsTracked(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_leftControllerIsTracked",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerTrackingState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_leftControllerTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_leftControllerTrackingState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerIsTracked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_rightControllerIsTracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerIsTracked(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_rightControllerIsTracked",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerTrackingState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_rightControllerTrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_rightControllerTrackingState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTransformationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_mouseTransformationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTransformationMode(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_mouseTransformationMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_negateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateMode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_negateMode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DTargets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_axis2DTargets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DTargets(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_axis2DTargets",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Axis2DTargets>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulatingLeftController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulatingRightController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingFPS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_manipulatingFPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_instance",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_targetedDeviceInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "get_targetedDeviceInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_targetedDeviceInput(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "set_targetedDeviceInput",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Awake() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Update() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::FindCameraTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "FindCameraTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessPoseInput() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessControlInput() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAxis2DControlInput() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessButtonControlInput(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> controllerState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAnalogButtonControlInput(
    ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> controllerState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::AddDevices() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::RemoveDevices() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnInputDeviceChange(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                              ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "OnInputDeviceChange", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, change);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetResetScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "GetResetScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetAxes(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace,
                                                                                      ::UnityEngine::Transform* cameraTransform, ByRef<::UnityEngine::Vector3> right, ByRef<::UnityEngine::Vector3> up,
                                                                                      ByRef<::UnityEngine::Vector3> forward) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetAxes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, translateSpace, cameraTransform, right, up, forward);
}
inline ::UnityEngine::Quaternion
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace,
                                                                                               ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState> state,
                                                                                               ByRef<::UnityEngine::Quaternion> inverseCameraParentRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetDeltaRotation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, translateSpace, state, inverseCameraParentRotation);
}
inline ::UnityEngine::Quaternion
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space translateSpace,
                                                                                               ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState> state,
                                                                                               ByRef<::UnityEngine::Quaternion> inverseCameraParentRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "GetDeltaRotation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__Space>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, translateSpace, state, inverseCameraParentRotation);
}
/// @param performed: ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* (default: nullptr)
/// @param canceled: ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* (default: nullptr)
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Subscribe(::UnityEngine::InputSystem::InputActionReference* reference,
                                                                                                    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* performed,
                                                                                                    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* canceled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Subscribe",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, reference, performed, canceled);
}
/// @param performed: ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* (default: nullptr)
/// @param canceled: ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* (default: nullptr)
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Unsubscribe(::UnityEngine::InputSystem::InputActionReference* reference,
                                                                                                      ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* performed,
                                                                                                      ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* canceled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Unsubscribe",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, reference, performed, canceled);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Negate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TransformationMode, false>(nullptr, ___internal_method, mode);
}
inline ::UnityEngine::CursorLockMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate(::UnityEngine::CursorLockMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "Negate",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CursorLockMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CursorLockMode, false>(this, ___internal_method, mode);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardXTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeKeyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardXTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeKeyboardXTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardYTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeKeyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardYTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeKeyboardYTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardZTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeKeyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardZTranslateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeKeyboardZTranslateAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateLeftAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleManipulateLeftAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateRightAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleManipulateRightAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateBodyAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateBodyAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleManipulateBodyAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateHeadAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeManipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateHeadAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeManipulateHeadAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeCycleDevicesAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeCycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeCycleDevicesAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeCycleDevicesAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeStopManipulationAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeStopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeStopManipulationAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeStopManipulationAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseDeltaAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeMouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseDeltaAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeMouseDeltaAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseScrollAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeMouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseScrollAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeMouseScrollAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRotateModeOverrideAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeRotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRotateModeOverrideAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeRotateModeOverrideAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleMouseTransformationModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleMouseTransformationModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleMouseTransformationModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeNegateModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeNegateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeNegateModeAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeNegateModeAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeXConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeXConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeXConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeXConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeYConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeYConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeYConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeYConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeZConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeZConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeZConstraintAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeZConstraintAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeResetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeResetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeResetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeResetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleCursorLockAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleCursorLockAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleCursorLockAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleDevicePositionTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleDevicePositionTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleDevicePositionTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTogglePrimary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeTogglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTogglePrimary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeTogglePrimary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleSecondary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeToggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleSecondary2DAxisTargetAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeToggleSecondary2DAxisTargetAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeAxis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeAxis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRestingHandAxis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeRestingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRestingHandAxis2DAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeRestingHandAxis2DAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeGripAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeGripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeGripAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeGripAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTriggerAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeTriggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTriggerAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeTriggerAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribePrimaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribePrimaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeSecondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryButtonAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeSecondaryButtonAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMenuAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeMenuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMenuAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeMenuAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribePrimary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribePrimary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeSecondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeSecondary2DAxisClickAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribePrimary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribePrimary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeSecondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeSecondary2DAxisTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribePrimaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribePrimaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "SubscribeSecondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryTouchAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "UnsubscribeSecondaryTouchAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardXTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardXTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardYTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardYTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslatePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardZTranslatePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslateCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnKeyboardZTranslateCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateLeftPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateLeftCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateRightPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateRightCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateLeftPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleManipulateLeftPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateRightPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleManipulateRightPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateBodyPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleManipulateBodyPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateHeadPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnManipulateHeadCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnCycleDevicePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnCycleDevicePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnStopManipulationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnStopManipulationPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnMouseDeltaPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnMouseDeltaCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnMouseScrollPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnMouseScrollCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverridePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnRotateModeOverridePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverrideCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnRotateModeOverrideCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleMouseTransformationModePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleMouseTransformationModePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnNegateModePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModeCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnNegateModeCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnXConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnXConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnYConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnYConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnZConstraintPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnZConstraintCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnResetPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnResetCanceled",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleCursorLockPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleCursorLockPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleDevicePositionTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleDevicePositionTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTogglePrimary2DAxisTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnTogglePrimary2DAxisTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleSecondary2DAxisTargetPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnToggleSecondary2DAxisTargetPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnAxis2DPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnAxis2DCanceled",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnRestingHandAxis2DPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnRestingHandAxis2DCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnGripPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnGripCanceled",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnTriggerPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnTriggerCanceled",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimaryButtonPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimaryButtonCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondaryButtonPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondaryButtonCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnMenuPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "OnMenuCanceled",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimary2DAxisClickPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimary2DAxisClickCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondary2DAxisClickPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondary2DAxisClickCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimary2DAxisTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimary2DAxisTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondary2DAxisTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondary2DAxisTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimaryTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnPrimaryTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondaryTouchPerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                  "OnSecondaryTouchCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::InputAction*
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetInputAction(::UnityEngine::InputSystem::InputActionReference* actionReference) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(),
                                               "GetInputAction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(nullptr, ___internal_method, actionReference);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TryExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr,
                                                                                                            ByRef<int64_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), "TryExecuteCommand",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, commandPtr, result);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::XRDeviceSimulator() {}
