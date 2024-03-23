#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedHMD)
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedHMD;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedHMD
// SizeInfo { instance_size: 448, native_size: -1, calculated_instance_size: 448, calculated_native_size: 448, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedHMD*
class CORDL_TYPE XRSimulatedHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Method ExecuteCommand, addr 0x2a29bc8, size 0x8c, virtual true, abstract: false, final false
  inline int64_t ExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* New_ctor();

  /// @brief Method .ctor, addr 0x2a29c54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSimulatedHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSimulatedHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSimulatedHMD(XRSimulatedHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSimulatedHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSimulatedHMD(XRSimulatedHMD const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedHMD");
