#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettingsPanelDisposable)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanel;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable);
// Type: UnityEngine.Rendering.Universal::IDebugDisplaySettingsPanelDisposable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IDebugDisplaySettingsPanelDisposable*
class CORDL_TYPE IDebugDisplaySettingsPanelDisposable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanel() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanelDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDebugDisplaySettingsPanelDisposable(IDebugDisplaySettingsPanelDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanelDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsPanelDisposable(IDebugDisplaySettingsPanelDisposable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*, "UnityEngine.Rendering.Universal", "IDebugDisplaySettingsPanelDisposable");
