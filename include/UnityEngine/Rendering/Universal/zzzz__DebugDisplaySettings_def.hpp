#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettings)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettings____c;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettings____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettings::<>c*
class CORDL_TYPE __DebugDisplaySettings____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c* __9;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c* New_ctor();

  /// @brief Method <.cctor>b__31_0, addr 0x2c5ca74, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettings* __cctor_b__31_0();

  /// @brief Method .ctor, addr 0x2c5ca6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettings____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettings____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettings____c(__DebugDisplaySettings____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettings____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettings____c(__DebugDisplaySettings____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettings*
class CORDL_TYPE DebugDisplaySettings : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_CommonSettings, put = set_CommonSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* CommonSettings;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  __declspec(property(get = get_LightingSettings, put = set_LightingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* LightingSettings;

  __declspec(property(get = get_MaterialSettings, put = set_MaterialSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* MaterialSettings;

  __declspec(property(get = get_RenderingSettings, put = set_RenderingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* RenderingSettings;

  /// @brief Field <CommonSettings>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CommonSettings_k__BackingField,
                      put = __cordl_internal_set__CommonSettings_k__BackingField))::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* _CommonSettings_k__BackingField;

  /// @brief Field <LightingSettings>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__LightingSettings_k__BackingField,
                      put = __cordl_internal_set__LightingSettings_k__BackingField))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* _LightingSettings_k__BackingField;

  /// @brief Field <MaterialSettings>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__MaterialSettings_k__BackingField,
                      put = __cordl_internal_set__MaterialSettings_k__BackingField))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* _MaterialSettings_k__BackingField;

  /// @brief Field <RenderingSettings>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RenderingSettings_k__BackingField,
                      put = __cordl_internal_set__RenderingSettings_k__BackingField))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* _RenderingSettings_k__BackingField;

  /// @brief Field m_Settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings,
                      put = __cordl_internal_set_m_Settings))::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>* m_Settings;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::System::Lazy_1<::UnityEngine::Rendering::Universal::DebugDisplaySettings*>* s_Instance;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> inline TData Add(TData newData);

  /// @brief Method ForEach, addr 0x2c5c7a8, size 0x158, virtual false, abstract: false, final false
  inline void ForEach(::System::Action_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>* onExecute);

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettings* New_ctor();

  /// @brief Method Reset, addr 0x2c5bff8, size 0x1c8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method TryGetScreenClearColor, addr 0x2c5bc60, size 0x40, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*& __cordl_internal_get__CommonSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*> const& __cordl_internal_get__CommonSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& __cordl_internal_get__LightingSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*> const& __cordl_internal_get__LightingSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get__MaterialSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get__MaterialSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get__RenderingSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get__RenderingSettings_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>*> const&
  __cordl_internal_get_m_Settings() const;

  constexpr void __cordl_internal_set__CommonSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value);

  constexpr void __cordl_internal_set__LightingSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  constexpr void __cordl_internal_set__MaterialSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  constexpr void __cordl_internal_set__RenderingSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  constexpr void __cordl_internal_set_m_Settings(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>* value);

  /// @brief Method .ctor, addr 0x2c5bf74, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Lazy_1<::UnityEngine::Rendering::Universal::DebugDisplaySettings*>* getStaticF_s_Instance();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c5bb70, size 0x5c, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_CommonSettings, addr 0x2c5bb30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* get_CommonSettings();

  /// @brief Method get_Instance, addr 0x2c5bab8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettings* get_Instance();

  /// @brief Method get_IsLightingActive, addr 0x2c5bd4c, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c5bdf8, size 0x118, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_LightingSettings, addr 0x2c5bb60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings();

  /// @brief Method get_MaterialSettings, addr 0x2c5bb40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings();

  /// @brief Method get_RenderingSettings, addr 0x2c5bb50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::Universal::DebugDisplaySettings*>* value);

  /// @brief Method set_CommonSettings, addr 0x2c5bb38, size 0x8, virtual false, abstract: false, final false
  inline void set_CommonSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value);

  /// @brief Method set_LightingSettings, addr 0x2c5bb68, size 0x8, virtual false, abstract: false, final false
  inline void set_LightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  /// @brief Method set_MaterialSettings, addr 0x2c5bb48, size 0x8, virtual false, abstract: false, final false
  inline void set_MaterialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method set_RenderingSettings, addr 0x2c5bb58, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettings(DebugDisplaySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettings(DebugDisplaySettings const&) = delete;

  /// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>* ___m_Settings;

  /// @brief Field <CommonSettings>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* ____CommonSettings_k__BackingField;

  /// @brief Field <MaterialSettings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ____MaterialSettings_k__BackingField;

  /// @brief Field <RenderingSettings>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ____RenderingSettings_k__BackingField;

  /// @brief Field <LightingSettings>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* ____LightingSettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettings, ___m_Settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettings, ____CommonSettings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettings, ____MaterialSettings_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettings, ____RenderingSettings_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettings, ____LightingSettings_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettings____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettings/<>c");
