#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsPanel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanel;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel);
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsPanel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsPanel*
class CORDL_TYPE DebugDisplaySettingsPanel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PanelName))::StringW PanelName;

  __declspec(property(get = get_Widgets))::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> Widgets;

  /// @brief Field m_Widgets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Widgets, put = __cordl_internal_set_m_Widgets))::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>* m_Widgets;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*() noexcept;

  /// @brief Method AddWidget, addr 0x2c5d67c, size 0xa8, virtual false, abstract: false, final false
  inline void AddWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method Dispose, addr 0x2c60f90, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& __cordl_internal_get_m_Widgets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const& __cordl_internal_get_m_Widgets() const;

  constexpr void __cordl_internal_set_m_Widgets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value);

  /// @brief Method .ctor, addr 0x2c5d600, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PanelName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PanelName();

  /// @brief Method get_Widgets, addr 0x2c60f40, size 0x50, virtual true, abstract: false, final true
  inline ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> get_Widgets();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanel() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanelDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsPanel(DebugDisplaySettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsPanel(DebugDisplaySettingsPanel const&) = delete;

  /// @brief Field m_Widgets, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>* ___m_Widgets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel, ___m_Widgets) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsPanel");
