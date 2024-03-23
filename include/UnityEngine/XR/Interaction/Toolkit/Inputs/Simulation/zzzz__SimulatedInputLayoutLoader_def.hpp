#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimulatedInputLayoutLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedInputLayoutLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::SimulatedInputLayoutLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::SimulatedInputLayoutLoader*
class CORDL_TYPE SimulatedInputLayoutLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x2ff5cf0, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method RegisterInputLayouts, addr 0x2ff5bb8, size 0x138, virtual false, abstract: false, final false
  static inline void RegisterInputLayouts();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimulatedInputLayoutLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimulatedInputLayoutLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimulatedInputLayoutLoader(SimulatedInputLayoutLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimulatedInputLayoutLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimulatedInputLayoutLoader(SimulatedInputLayoutLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedInputLayoutLoader");
