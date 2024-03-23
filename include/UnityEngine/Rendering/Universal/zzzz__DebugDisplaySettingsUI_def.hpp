#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsUI)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettings;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsUI____c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
class DebugManager;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsUI;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsUI____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsUI::<>c__DisplayClass3_0*
class CORDL_TYPE __DebugDisplaySettingsUI____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugManager, put = __cordl_internal_set_debugManager))::UnityEngine::Rendering::DebugManager* debugManager;

  /// @brief Field panels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_panels,
                      put = __cordl_internal_set_panels))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* panels;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0* New_ctor();

  /// @brief Method <RegisterDebug>b__0, addr 0x2c6341c, size 0x240, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__0(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* data);

  constexpr ::UnityEngine::Rendering::DebugManager*& __cordl_internal_get_debugManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DebugManager*> const& __cordl_internal_get_debugManager() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*& __cordl_internal_get_panels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*> const&
  __cordl_internal_get_panels() const;

  constexpr void __cordl_internal_set_debugManager(::UnityEngine::Rendering::DebugManager* value);

  constexpr void __cordl_internal_set_panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* value);

  /// @brief Method .ctor, addr 0x2c63390, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsUI____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsUI____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsUI____c__DisplayClass3_0(__DebugDisplaySettingsUI____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsUI____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsUI____c__DisplayClass3_0(__DebugDisplaySettingsUI____c__DisplayClass3_0 const&) = delete;

  /// @brief Field debugManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugManager* ___debugManager;

  /// @brief Field panels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* ___panels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0, ___debugManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0, ___panels) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsUI
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsUI*
class CORDL_TYPE DebugDisplaySettingsUI : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0;

  /// @brief Field m_DisposablePanels, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DisposablePanels,
      put = __cordl_internal_set_m_DisposablePanels))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* m_DisposablePanels;

  /// @brief Field m_Settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::DebugDisplaySettings* m_Settings;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugData"
  constexpr operator ::UnityEngine::Rendering::IDebugData*() noexcept;

  /// @brief Method GetReset, addr 0x2c63398, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Action* GetReset();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* New_ctor();

  /// @brief Method RegisterDebug, addr 0x2c63240, size 0x150, virtual false, abstract: false, final false
  inline void RegisterDebug(::UnityEngine::Rendering::Universal::DebugDisplaySettings* settings);

  /// @brief Method Reset, addr 0x2c62ce0, size 0x90, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UnregisterDebug, addr 0x2c62d70, size 0x4d0, virtual false, abstract: false, final false
  inline void UnregisterDebug();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*& __cordl_internal_get_m_DisposablePanels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*> const&
  __cordl_internal_get_m_DisposablePanels() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr void __cordl_internal_set_m_DisposablePanels(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DebugDisplaySettings* value);

  /// @brief Method .ctor, addr 0x2c63414, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugData"
  constexpr ::UnityEngine::Rendering::IDebugData* i___UnityEngine__Rendering__IDebugData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsUI(DebugDisplaySettingsUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsUI(DebugDisplaySettingsUI const&) = delete;

  /// @brief Field m_DisposablePanels, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* ___m_DisposablePanels;

  /// @brief Field m_Settings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettings* ___m_Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI, ___m_DisposablePanels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI, ___m_Settings) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsUI");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsUI/<>c__DisplayClass3_0");
