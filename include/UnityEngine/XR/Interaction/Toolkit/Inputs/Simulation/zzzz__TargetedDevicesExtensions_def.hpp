#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TargetedDevicesExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct __XRDeviceSimulator__TargetedDevices;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class TargetedDevicesExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::TargetedDevicesExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::TargetedDevicesExtensions*
class CORDL_TYPE TargetedDevicesExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasDevice, addr 0x2a29310, size 0xc, virtual false, abstract: false, final false
  static inline bool HasDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices devices,
                               ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices device);

  /// @brief Method WithDevice, addr 0x2a29300, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
  WithDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices devices,
             ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices device);

  /// @brief Method WithoutDevice, addr 0x2a29308, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices
  WithoutDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices devices,
                ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::__XRDeviceSimulator__TargetedDevices device);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetedDevicesExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TargetedDevicesExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetedDevicesExtensions(TargetedDevicesExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetedDevicesExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetedDevicesExtensions(TargetedDevicesExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "TargetedDevicesExtensions");
