#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRDeviceSimulatorLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulatorLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulatorLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulatorLoader*
class CORDL_TYPE XRDeviceSimulatorLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x2a2931c, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDeviceSimulatorLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDeviceSimulatorLoader(XRDeviceSimulatorLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDeviceSimulatorLoader(XRDeviceSimulatorLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulatorLoader");
