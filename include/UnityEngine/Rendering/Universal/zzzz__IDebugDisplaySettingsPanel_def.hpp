#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDebugDisplaySettingsPanel)
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel);
// Type: UnityEngine.Rendering.Universal::IDebugDisplaySettingsPanel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IDebugDisplaySettingsPanel*
class CORDL_TYPE IDebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_PanelName))::StringW PanelName;

  __declspec(property(get = get_Widgets))::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> Widgets;

  /// @brief Method get_PanelName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PanelName();

  /// @brief Method get_Widgets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> get_Widgets();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDebugDisplaySettingsPanel(IDebugDisplaySettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsPanel(IDebugDisplaySettingsPanel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*, "UnityEngine.Rendering.Universal", "IDebugDisplaySettingsPanel");
