#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettingsData)
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData);
// Type: UnityEngine.Rendering.Universal::IDebugDisplaySettingsData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IDebugDisplaySettingsData*
class CORDL_TYPE IDebugDisplaySettingsData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDebugDisplaySettingsData(IDebugDisplaySettingsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsData(IDebugDisplaySettingsData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*, "UnityEngine.Rendering.Universal", "IDebugDisplaySettingsData");
