#pragma once
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState.get_formatId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::get_formatId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a29c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(),
                                                 "get_formatId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a29c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(),
                                                 "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a29cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(),
                                                 "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*
UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_leftEyePosition() {
  return this->___leftEyePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_leftEyePosition() const {
  return this->___leftEyePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_leftEyePosition(::UnityEngine::Vector3 value) {
  this->___leftEyePosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_leftEyeRotation() {
  return this->___leftEyeRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_leftEyeRotation() const {
  return this->___leftEyeRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_leftEyeRotation(::UnityEngine::Quaternion value) {
  this->___leftEyeRotation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_rightEyePosition() {
  return this->___rightEyePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_rightEyePosition() const {
  return this->___rightEyePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_rightEyePosition(::UnityEngine::Vector3 value) {
  this->___rightEyePosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_rightEyeRotation() {
  return this->___rightEyeRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_rightEyeRotation() const {
  return this->___rightEyeRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_rightEyeRotation(::UnityEngine::Quaternion value) {
  this->___rightEyeRotation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_centerEyePosition() {
  return this->___centerEyePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_centerEyePosition() const {
  return this->___centerEyePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_centerEyePosition(::UnityEngine::Vector3 value) {
  this->___centerEyePosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_centerEyeRotation() {
  return this->___centerEyeRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_centerEyeRotation() const {
  return this->___centerEyeRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_centerEyeRotation(::UnityEngine::Quaternion value) {
  this->___centerEyeRotation = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_trackingState() {
  return this->___trackingState;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_trackingState() const {
  return this->___trackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_trackingState(int32_t value) {
  this->___trackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_isTracked() {
  return this->___isTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_isTracked() const {
  return this->___isTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_isTracked(bool value) {
  this->___isTracked = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_devicePosition() {
  return this->___devicePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_devicePosition() const {
  return this->___devicePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_devicePosition(::UnityEngine::Vector3 value) {
  this->___devicePosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_deviceRotation() {
  return this->___deviceRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_get_deviceRotation() const {
  return this->___deviceRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::__cordl_internal_set_deviceRotation(::UnityEngine::Quaternion value) {
  this->___deviceRotation = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::get_formatId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(),
                                               "get_formatId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(),
                                               "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "leftEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftEyeRotation", ty: "::UnityEngine::Quaternion",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "rightEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightEyeRotation", ty:
// "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "centerEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "centerEyeRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackingState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "devicePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "deviceRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::XRSimulatedHMDState(::UnityEngine::Vector3 leftEyePosition, ::UnityEngine::Quaternion leftEyeRotation,
                                                                                                                ::UnityEngine::Vector3 rightEyePosition, ::UnityEngine::Quaternion rightEyeRotation,
                                                                                                                ::UnityEngine::Vector3 centerEyePosition, ::UnityEngine::Quaternion centerEyeRotation,
                                                                                                                int32_t trackingState, bool isTracked, ::UnityEngine::Vector3 devicePosition,
                                                                                                                ::UnityEngine::Quaternion deviceRotation) noexcept {
  this->leftEyePosition = leftEyePosition;
  this->leftEyeRotation = leftEyeRotation;
  this->rightEyePosition = rightEyePosition;
  this->rightEyeRotation = rightEyeRotation;
  this->centerEyePosition = centerEyePosition;
  this->centerEyeRotation = centerEyeRotation;
  this->trackingState = trackingState;
  this->isTracked = isTracked;
  this->devicePosition = devicePosition;
  this->deviceRotation = deviceRotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState::XRSimulatedHMDState() {}
