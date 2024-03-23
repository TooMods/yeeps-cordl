#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ScriptableSettings_1_def.hpp"
CORDL_MODULE_EXPORT(XRDeviceSimulatorSettings)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulatorSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulatorSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRDeviceSimulatorSettings*
class CORDL_TYPE XRDeviceSimulatorSettings
    : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettings_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings>> {
public:
  // Declarations
  __declspec(property(get = get_automaticallyInstantiateSimulatorPrefab, put = set_automaticallyInstantiateSimulatorPrefab)) bool automaticallyInstantiateSimulatorPrefab;

  /// @brief Field m_AutomaticallyInstantiateSimulatorPrefab, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab,
                      put = __cordl_internal_set_m_AutomaticallyInstantiateSimulatorPrefab)) bool m_AutomaticallyInstantiateSimulatorPrefab;

  /// @brief Field m_SimulatorPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SimulatorPrefab, put = __cordl_internal_set_m_SimulatorPrefab))::UnityW<::UnityEngine::GameObject> m_SimulatorPrefab;

  __declspec(property(get = get_simulatorPrefab, put = set_simulatorPrefab))::UnityW<::UnityEngine::GameObject> simulatorPrefab;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab() const;

  constexpr bool& __cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SimulatorPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SimulatorPrefab();

  constexpr void __cordl_internal_set_m_AutomaticallyInstantiateSimulatorPrefab(bool value);

  constexpr void __cordl_internal_set_m_SimulatorPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2a29598, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticallyInstantiateSimulatorPrefab, addr 0x2a29574, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticallyInstantiateSimulatorPrefab();

  /// @brief Method get_simulatorPrefab, addr 0x2a29588, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_simulatorPrefab();

  /// @brief Method set_automaticallyInstantiateSimulatorPrefab, addr 0x2a2957c, size 0xc, virtual false, abstract: false, final false
  inline void set_automaticallyInstantiateSimulatorPrefab(bool value);

  /// @brief Method set_simulatorPrefab, addr 0x2a29590, size 0x8, virtual false, abstract: false, final false
  inline void set_simulatorPrefab(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDeviceSimulatorSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDeviceSimulatorSettings(XRDeviceSimulatorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDeviceSimulatorSettings(XRDeviceSimulatorSettings const&) = delete;

  /// @brief Field m_AutomaticallyInstantiateSimulatorPrefab, offset: 0x18, size: 0x1, def value: None
  bool ___m_AutomaticallyInstantiateSimulatorPrefab;

  /// @brief Field m_SimulatorPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_SimulatorPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_AutomaticallyInstantiateSimulatorPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_SimulatorPrefab) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulatorSettings");
