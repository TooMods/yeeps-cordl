#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsLighting)
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Rendering::Universal {
struct DebugLightingFeatureFlags;
}
namespace UnityEngine::Rendering::Universal {
struct DebugLightingMode;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering::Universal {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__WidgetFactory;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsLighting__WidgetFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__WidgetFactory);
// Type: ::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::Strings*
class CORDL_TYPE __DebugDisplaySettingsLighting__Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field LightingDebugMode, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LightingDebugMode, put = setStaticF_LightingDebugMode))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip LightingDebugMode;

  /// @brief Field LightingFeatures, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LightingFeatures, put = setStaticF_LightingFeatures))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip LightingFeatures;

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_LightingDebugMode();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_LightingFeatures();

  static inline void setStaticF_LightingDebugMode(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_LightingFeatures(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__Strings(__DebugDisplaySettingsLighting__Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__Strings(__DebugDisplaySettingsLighting__Strings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::WidgetFactory::<>c__DisplayClass0_0*
class CORDL_TYPE __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateLightingDebugMode>b__0, addr 0x2c5ed80, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateLightingDebugMode_b__0();

  /// @brief Method <CreateLightingDebugMode>b__2, addr 0x2c5ed9c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateLightingDebugMode_b__2();

  /// @brief Method <CreateLightingDebugMode>b__3, addr 0x2c5edb8, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateLightingDebugMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  /// @brief Method .ctor, addr 0x2c5ed70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::WidgetFactory::<>c*
class CORDL_TYPE __DebugDisplaySettingsLighting__WidgetFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c* __9;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Action_1<int32_t>* __9__0_1;

  static inline ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c* New_ctor();

  /// @brief Method <CreateLightingDebugMode>b__0_1, addr 0x2c5ee40, size 0x4, virtual false, abstract: false, final false
  inline void _CreateLightingDebugMode_b__0_1(int32_t value);

  /// @brief Method .ctor, addr 0x2c5ee38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c* getStaticF___9();

  static inline ::System::Action_1<int32_t>* getStaticF___9__0_1();

  static inline void setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c* value);

  static inline void setStaticF___9__0_1(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__WidgetFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__WidgetFactory____c(__DebugDisplaySettingsLighting__WidgetFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__WidgetFactory____c(__DebugDisplaySettingsLighting__WidgetFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::WidgetFactory::<>c__DisplayClass1_0*
class CORDL_TYPE __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateLightingFeatures>b__0, addr 0x2c5ee44, size 0x60, virtual false, abstract: false, final false
  inline ::bs_hook::EnumPtr _CreateLightingFeatures_b__0();

  /// @brief Method <CreateLightingFeatures>b__1, addr 0x2c5eea4, size 0x80, virtual false, abstract: false, final false
  inline void _CreateLightingFeatures_b__1(::bs_hook::EnumPtr value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  /// @brief Method .ctor, addr 0x2c5ed78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WidgetFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::WidgetFactory*
class CORDL_TYPE __DebugDisplaySettingsLighting__WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c;

  using __c__DisplayClass0_0 = ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0;

  /// @brief Method CreateLightingDebugMode, addr 0x2c5d9d0, size 0x2ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateLightingDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

  /// @brief Method CreateLightingFeatures, addr 0x2c5dc7c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateLightingFeatures(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__WidgetFactory(__DebugDisplaySettingsLighting__WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__WidgetFactory(__DebugDisplaySettingsLighting__WidgetFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::SettingsPanel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsLighting::SettingsPanel*
class CORDL_TYPE __DebugDisplaySettingsLighting__SettingsPanel : public ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_PanelName))::StringW PanelName;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

  /// @brief Method .ctor, addr 0x2c5ebac, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* data);

  /// @brief Method get_PanelName, addr 0x2c5ef24, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsLighting__SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsLighting__SettingsPanel(__DebugDisplaySettingsLighting__SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsLighting__SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsLighting__SettingsPanel(__DebugDisplaySettingsLighting__SettingsPanel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsLighting
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsLighting*
class CORDL_TYPE DebugDisplaySettingsLighting : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__Strings;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_DebugLightingFeatureFlagsMask, put = set_DebugLightingFeatureFlagsMask))::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags DebugLightingFeatureFlagsMask;

  __declspec(property(get = get_DebugLightingMode, put = set_DebugLightingMode))::UnityEngine::Rendering::Universal::DebugLightingMode DebugLightingMode;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field <DebugLightingFeatureFlagsMask>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__DebugLightingFeatureFlagsMask_k__BackingField,
                      put = __cordl_internal_set__DebugLightingFeatureFlagsMask_k__BackingField))::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags
      _DebugLightingFeatureFlagsMask_k__BackingField;

  /// @brief Field <DebugLightingMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__DebugLightingMode_k__BackingField,
                      put = __cordl_internal_set__DebugLightingMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugLightingMode _DebugLightingMode_k__BackingField;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x2c5eb4c, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* New_ctor();

  /// @brief Method TryGetScreenClearColor, addr 0x2c5bd44, size 0x8, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags const& __cordl_internal_get__DebugLightingFeatureFlagsMask_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags& __cordl_internal_get__DebugLightingFeatureFlagsMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode const& __cordl_internal_get__DebugLightingMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode& __cordl_internal_get__DebugLightingMode_k__BackingField();

  constexpr void __cordl_internal_set__DebugLightingFeatureFlagsMask_k__BackingField(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);

  constexpr void __cordl_internal_set__DebugLightingMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugLightingMode value);

  /// @brief Method .ctor, addr 0x2c5c778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c5bbf4, size 0x20, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_DebugLightingFeatureFlagsMask, addr 0x2c5eb3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags get_DebugLightingFeatureFlagsMask();

  /// @brief Method get_DebugLightingMode, addr 0x2c5eb2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugLightingMode get_DebugLightingMode();

  /// @brief Method get_IsLightingActive, addr 0x2c5bdf0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c5bf60, size 0x14, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_DebugLightingFeatureFlagsMask, addr 0x2c5eb44, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugLightingFeatureFlagsMask(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);

  /// @brief Method set_DebugLightingMode, addr 0x2c5eb34, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugLightingMode(::UnityEngine::Rendering::Universal::DebugLightingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsLighting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsLighting(DebugDisplaySettingsLighting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsLighting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsLighting(DebugDisplaySettingsLighting const&) = delete;

  /// @brief Field <DebugLightingMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugLightingMode ____DebugLightingMode_k__BackingField;

  /// @brief Field <DebugLightingFeatureFlagsMask>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags ____DebugLightingFeatureFlagsMask_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, ____DebugLightingMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting, ____DebugLightingFeatureFlagsMask_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/WidgetFactory/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsLighting__WidgetFactory____c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsLighting__WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/WidgetFactory");
