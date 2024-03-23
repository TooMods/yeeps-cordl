#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMD_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD.ExecuteCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::ExecuteCommand)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a29bc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::ExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, commandPtr);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::XRSimulatedHMD() {}
