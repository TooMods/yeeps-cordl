#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugVertexAttributeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsMaterial)
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMaterialMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugVertexAttributeMode;
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
struct __DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData;
}
namespace UnityEngine::Rendering::Universal {
struct __DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__WidgetFactory;
}
namespace UnityEngine::Rendering {
template <typename T> class __DebugUI__Field_1;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsMaterial__WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
struct __DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__WidgetFactory);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData);
// Type: ::AlbedoDebugValidationPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::DebugDisplaySettingsMaterial::AlbedoDebugValidationPreset
struct CORDL_TYPE __DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset_Unwrapped
  enum struct ____DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset_Unwrapped : int32_t {
    __E_DefaultLuminance = static_cast<int32_t>(0x0),
    __E_BlackAcrylicPaint = static_cast<int32_t>(0x1),
    __E_DarkSoil = static_cast<int32_t>(0x2),
    __E_WornAsphalt = static_cast<int32_t>(0x3),
    __E_DryClaySoil = static_cast<int32_t>(0x4),
    __E_GreenGrass = static_cast<int32_t>(0x5),
    __E_OldConcrete = static_cast<int32_t>(0x6),
    __E_RedClayTile = static_cast<int32_t>(0x7),
    __E_DrySand = static_cast<int32_t>(0x8),
    __E_NewConcrete = static_cast<int32_t>(0x9),
    __E_WhiteAcrylicPaint = static_cast<int32_t>(0xa),
    __E_FreshSnow = static_cast<int32_t>(0xb),
    __E_BlueSky = static_cast<int32_t>(0xc),
    __E_Foliage = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset_Unwrapped() const noexcept {
    return static_cast<____DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BlackAcrylicPaint value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const BlackAcrylicPaint;

  /// @brief Field BlueSky value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const BlueSky;

  /// @brief Field DarkSoil value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const DarkSoil;

  /// @brief Field DefaultLuminance value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const DefaultLuminance;

  /// @brief Field DryClaySoil value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const DryClaySoil;

  /// @brief Field DrySand value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const DrySand;

  /// @brief Field Foliage value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const Foliage;

  /// @brief Field FreshSnow value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const FreshSnow;

  /// @brief Field GreenGrass value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const GreenGrass;

  /// @brief Field NewConcrete value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const NewConcrete;

  /// @brief Field OldConcrete value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const OldConcrete;

  /// @brief Field RedClayTile value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const RedClayTile;

  /// @brief Field WhiteAcrylicPaint value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const WhiteAcrylicPaint;

  /// @brief Field WornAsphalt value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const WornAsphalt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::AlbedoDebugValidationPresetData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::DebugDisplaySettingsMaterial::AlbedoDebugValidationPresetData
struct CORDL_TYPE __DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "minLuminance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLuminance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData(::StringW name, ::UnityEngine::Color color, float_t minLuminance, float_t maxLuminance) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field minLuminance, offset: 0x18, size: 0x4, def value: None
  float_t minLuminance;

  /// @brief Field maxLuminance, offset: 0x1c, size: 0x4, def value: None
  float_t maxLuminance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, minLuminance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, maxLuminance) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::Strings*
class CORDL_TYPE __DebugDisplaySettingsMaterial__Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AlbedoHueTolerance, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AlbedoHueTolerance, put = setStaticF_AlbedoHueTolerance))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip AlbedoHueTolerance;

  /// @brief Field AlbedoMaxLuminance, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AlbedoMaxLuminance, put = setStaticF_AlbedoMaxLuminance))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip AlbedoMaxLuminance;

  /// @brief Field AlbedoMinLuminance, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AlbedoMinLuminance, put = setStaticF_AlbedoMinLuminance))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip AlbedoMinLuminance;

  /// @brief Field AlbedoSaturationTolerance, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AlbedoSaturationTolerance, put = setStaticF_AlbedoSaturationTolerance))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip AlbedoSaturationTolerance;

  /// @brief Field MaterialOverride, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MaterialOverride, put = setStaticF_MaterialOverride))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MaterialOverride;

  /// @brief Field MaterialValidationMode, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MaterialValidationMode, put = setStaticF_MaterialValidationMode))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MaterialValidationMode;

  /// @brief Field MetallicMaxValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MetallicMaxValue, put = setStaticF_MetallicMaxValue))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MetallicMaxValue;

  /// @brief Field MetallicMinValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MetallicMinValue, put = setStaticF_MetallicMinValue))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MetallicMinValue;

  /// @brief Field ValidationPreset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ValidationPreset, put = setStaticF_ValidationPreset))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip ValidationPreset;

  /// @brief Field VertexAttribute, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_VertexAttribute, put = setStaticF_VertexAttribute))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip VertexAttribute;

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_AlbedoHueTolerance();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_AlbedoMaxLuminance();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_AlbedoMinLuminance();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_AlbedoSaturationTolerance();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MaterialOverride();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MaterialValidationMode();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MetallicMaxValue();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MetallicMinValue();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_ValidationPreset();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_VertexAttribute();

  static inline void setStaticF_AlbedoHueTolerance(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_AlbedoMaxLuminance(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_AlbedoMinLuminance(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_AlbedoSaturationTolerance(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MaterialOverride(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MaterialValidationMode(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MetallicMaxValue(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MetallicMinValue(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_ValidationPreset(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_VertexAttribute(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__Strings(__DebugDisplaySettingsMaterial__Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__Strings(__DebugDisplaySettingsMaterial__Strings const&) = delete;

  /// @brief Field AlbedoSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString AlbedoSettingsContainerName{ u"Albedo Settings" };

  /// @brief Field MetallicSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString MetallicSettingsContainerName{ u"Metallic Settings" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass0_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateMaterialOverride>b__0, addr 0x2c60a70, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialOverride_b__0();

  /// @brief Method <CreateMaterialOverride>b__2, addr 0x2c60a8c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialOverride_b__2();

  /// @brief Method <CreateMaterialOverride>b__3, addr 0x2c60aa8, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMaterialOverride_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c5f704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c* __9;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Action_1<int32_t>* __9__0_1;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_1, put = setStaticF___9__1_1))::System::Action_1<int32_t>* __9__1_1;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1))::System::Action_1<int32_t>* __9__2_1;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4))::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* __9__2_4;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1))::System::Action_1<int32_t>* __9__3_1;

  /// @brief Field <>9__3_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_4, put = setStaticF___9__3_4))::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* __9__3_4;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c* New_ctor();

  /// @brief Method <CreateAlbedoPreset>b__3_1, addr 0x2c60b9c, size 0x4, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__3_1(int32_t value);

  /// @brief Method <CreateAlbedoPreset>b__3_4, addr 0x2c60ba0, size 0x60, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__3_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _);

  /// @brief Method <CreateMaterialOverride>b__0_1, addr 0x2c60b30, size 0x4, virtual false, abstract: false, final false
  inline void _CreateMaterialOverride_b__0_1(int32_t value);

  /// @brief Method <CreateMaterialValidationMode>b__2_1, addr 0x2c60b38, size 0x4, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__2_1(int32_t value);

  /// @brief Method <CreateMaterialValidationMode>b__2_4, addr 0x2c60b3c, size 0x60, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__2_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _);

  /// @brief Method <CreateVertexAttribute>b__1_1, addr 0x2c60b34, size 0x4, virtual false, abstract: false, final false
  inline void _CreateVertexAttribute_b__1_1(int32_t value);

  /// @brief Method .ctor, addr 0x2c60b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c* getStaticF___9();

  static inline ::System::Action_1<int32_t>* getStaticF___9__0_1();

  static inline ::System::Action_1<int32_t>* getStaticF___9__1_1();

  static inline ::System::Action_1<int32_t>* getStaticF___9__2_1();

  static inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* getStaticF___9__2_4();

  static inline ::System::Action_1<int32_t>* getStaticF___9__3_1();

  static inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* getStaticF___9__3_4();

  static inline void setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c* value);

  static inline void setStaticF___9__0_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__1_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__2_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__2_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__3_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__3_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c(__DebugDisplaySettingsMaterial__WidgetFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c(__DebugDisplaySettingsMaterial__WidgetFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass1_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateVertexAttribute>b__0, addr 0x2c60c00, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateVertexAttribute_b__0();

  /// @brief Method <CreateVertexAttribute>b__2, addr 0x2c60c1c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateVertexAttribute_b__2();

  /// @brief Method <CreateVertexAttribute>b__3, addr 0x2c60c38, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateVertexAttribute_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c5f9b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass2_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0* New_ctor();

  /// @brief Method <CreateMaterialValidationMode>b__0, addr 0x2c60c54, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialValidationMode_b__0();

  /// @brief Method <CreateMaterialValidationMode>b__2, addr 0x2c60c70, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialValidationMode_b__2();

  /// @brief Method <CreateMaterialValidationMode>b__3, addr 0x2c60c8c, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c5fcfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass3_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreateAlbedoPreset>b__0, addr 0x2c60ca8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateAlbedoPreset_b__0();

  /// @brief Method <CreateAlbedoPreset>b__2, addr 0x2c60cc4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateAlbedoPreset_b__2();

  /// @brief Method <CreateAlbedoPreset>b__3, addr 0x2c60ce0, size 0x18, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c60040, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass4_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0* New_ctor();

  /// @brief Method <CreateAlbedoMinLuminance>b__0, addr 0x2c60cf8, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoMinLuminance_b__0();

  /// @brief Method <CreateAlbedoMinLuminance>b__1, addr 0x2c60d14, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateAlbedoMinLuminance_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c601d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass5_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0* New_ctor();

  /// @brief Method <CreateAlbedoMaxLuminance>b__0, addr 0x2c60d30, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoMaxLuminance_b__0();

  /// @brief Method <CreateAlbedoMaxLuminance>b__1, addr 0x2c60d4c, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateAlbedoMaxLuminance_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c60370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass6_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0* New_ctor();

  /// @brief Method <CreateAlbedoHueTolerance>b__0, addr 0x2c60d68, size 0x2c, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoHueTolerance_b__0();

  /// @brief Method <CreateAlbedoHueTolerance>b__1, addr 0x2c60d94, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateAlbedoHueTolerance_b__1(float_t value);

  /// @brief Method <CreateAlbedoHueTolerance>b__2, addr 0x2c60db0, size 0x24, virtual false, abstract: false, final false
  inline bool _CreateAlbedoHueTolerance_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c60554, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass7_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0* New_ctor();

  /// @brief Method <CreateAlbedoSaturationTolerance>b__0, addr 0x2c60dd4, size 0x2c, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoSaturationTolerance_b__0();

  /// @brief Method <CreateAlbedoSaturationTolerance>b__1, addr 0x2c60e00, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateAlbedoSaturationTolerance_b__1(float_t value);

  /// @brief Method <CreateAlbedoSaturationTolerance>b__2, addr 0x2c60e1c, size 0x24, virtual false, abstract: false, final false
  inline bool _CreateAlbedoSaturationTolerance_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c60738, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass8_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreateMetallicMinValue>b__0, addr 0x2c60e40, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreateMetallicMinValue_b__0();

  /// @brief Method <CreateMetallicMinValue>b__1, addr 0x2c60e5c, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMetallicMinValue_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c608d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory::<>c__DisplayClass9_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0* New_ctor();

  /// @brief Method <CreateMetallicMaxValue>b__0, addr 0x2c60e78, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreateMetallicMaxValue_b__0();

  /// @brief Method <CreateMetallicMaxValue>b__1, addr 0x2c60e94, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMetallicMaxValue_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method .ctor, addr 0x2c60a68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0(__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WidgetFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::WidgetFactory*
class CORDL_TYPE __DebugDisplaySettingsMaterial__WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c;

  using __c__DisplayClass0_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0;

  /// @brief Method CreateAlbedoHueTolerance, addr 0x2c60378, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAlbedoHueTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateAlbedoMaxLuminance, addr 0x2c601e0, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAlbedoMaxLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateAlbedoMinLuminance, addr 0x2c60048, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAlbedoMinLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateAlbedoPreset, addr 0x2c5fd04, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAlbedoPreset(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateAlbedoSaturationTolerance, addr 0x2c6055c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAlbedoSaturationTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateMaterialOverride, addr 0x2c5d724, size 0x2ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMaterialOverride(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateMaterialValidationMode, addr 0x2c5f9c0, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMaterialValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateMetallicMaxValue, addr 0x2c608d8, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMetallicMaxValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateMetallicMinValue, addr 0x2c60740, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMetallicMinValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method CreateVertexAttribute, addr 0x2c5f70c, size 0x2ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateVertexAttribute(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__WidgetFactory(__DebugDisplaySettingsMaterial__WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__WidgetFactory(__DebugDisplaySettingsMaterial__WidgetFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::SettingsPanel::<>c__DisplayClass2_0*
class CORDL_TYPE __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method <.ctor>b__0, addr 0x2c60ef8, size 0x24, virtual false, abstract: false, final false
  inline bool __ctor_b__0();

  /// @brief Method <.ctor>b__1, addr 0x2c60f1c, size 0x24, virtual false, abstract: false, final false
  inline bool __ctor_b__1();

  /// @brief Method .ctor, addr 0x2c60ef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0(__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0(__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsPanel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsMaterial::SettingsPanel*
class CORDL_TYPE __DebugDisplaySettingsMaterial__SettingsPanel : public ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0;

  __declspec(property(get = get_PanelName))::StringW PanelName;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method .ctor, addr 0x2c5f0a0, size 0x3b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method get_PanelName, addr 0x2c60eb0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsMaterial__SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsMaterial__SettingsPanel(__DebugDisplaySettingsMaterial__SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsMaterial__SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsMaterial__SettingsPanel(__DebugDisplaySettingsMaterial__SettingsPanel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsMaterial
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsMaterial*
class CORDL_TYPE DebugDisplaySettingsMaterial : public ::System::Object {
public:
  // Declarations
  using AlbedoDebugValidationPreset = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset;

  using AlbedoDebugValidationPresetData = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData;

  using SettingsPanel = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__Strings;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__WidgetFactory;

  /// @brief Field AlbedoCompareColor, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_AlbedoCompareColor, put = __cordl_internal_set_AlbedoCompareColor))::UnityEngine::Color AlbedoCompareColor;

  __declspec(property(get = get_AlbedoHueTolerance, put = set_AlbedoHueTolerance)) float_t AlbedoHueTolerance;

  /// @brief Field AlbedoMaxLuminance, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_AlbedoMaxLuminance, put = __cordl_internal_set_AlbedoMaxLuminance)) float_t AlbedoMaxLuminance;

  /// @brief Field AlbedoMinLuminance, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_AlbedoMinLuminance, put = __cordl_internal_set_AlbedoMinLuminance)) float_t AlbedoMinLuminance;

  __declspec(property(get = get_AlbedoSaturationTolerance, put = set_AlbedoSaturationTolerance)) float_t AlbedoSaturationTolerance;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_DebugMaterialModeData, put = set_DebugMaterialModeData))::UnityEngine::Rendering::Universal::DebugMaterialMode DebugMaterialModeData;

  __declspec(property(get = get_DebugVertexAttributeIndexData, put = set_DebugVertexAttributeIndexData))::UnityEngine::Rendering::Universal::DebugVertexAttributeMode DebugVertexAttributeIndexData;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field MaterialValidationMode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_MaterialValidationMode,
                      put = __cordl_internal_set_MaterialValidationMode))::UnityEngine::Rendering::Universal::DebugMaterialValidationMode MaterialValidationMode;

  /// @brief Field MetallicMaxValue, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_MetallicMaxValue, put = __cordl_internal_set_MetallicMaxValue)) float_t MetallicMaxValue;

  /// @brief Field MetallicMinValue, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_MetallicMinValue, put = __cordl_internal_set_MetallicMinValue)) float_t MetallicMinValue;

  /// @brief Field <DebugMaterialModeData>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__DebugMaterialModeData_k__BackingField,
                      put = __cordl_internal_set__DebugMaterialModeData_k__BackingField))::UnityEngine::Rendering::Universal::DebugMaterialMode _DebugMaterialModeData_k__BackingField;

  /// @brief Field <DebugVertexAttributeIndexData>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__DebugVertexAttributeIndexData_k__BackingField,
                      put = __cordl_internal_set__DebugVertexAttributeIndexData_k__BackingField))::UnityEngine::Rendering::Universal::DebugVertexAttributeMode
      _DebugVertexAttributeIndexData_k__BackingField;

  __declspec(property(get = get_albedoDebugValidationPreset,
                      put = set_albedoDebugValidationPreset))::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset albedoDebugValidationPreset;

  /// @brief Field m_AlbedoDebugValidationPreset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoDebugValidationPreset,
                      put = __cordl_internal_set_m_AlbedoDebugValidationPreset))::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset
      m_AlbedoDebugValidationPreset;

  /// @brief Field m_AlbedoDebugValidationPresetData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlbedoDebugValidationPresetData, put = __cordl_internal_set_m_AlbedoDebugValidationPresetData))::ArrayW<
      ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData,
      ::Array<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData>*> m_AlbedoDebugValidationPresetData;

  /// @brief Field m_AlbedoHueTolerance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoHueTolerance, put = __cordl_internal_set_m_AlbedoHueTolerance)) float_t m_AlbedoHueTolerance;

  /// @brief Field m_AlbedoSaturationTolerance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoSaturationTolerance, put = __cordl_internal_set_m_AlbedoSaturationTolerance)) float_t m_AlbedoSaturationTolerance;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x2c5f040, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* New_ctor();

  /// @brief Method TryGetScreenClearColor, addr 0x2c5bca0, size 0x8, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_AlbedoCompareColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_AlbedoCompareColor();

  constexpr float_t const& __cordl_internal_get_AlbedoMaxLuminance() const;

  constexpr float_t& __cordl_internal_get_AlbedoMaxLuminance();

  constexpr float_t const& __cordl_internal_get_AlbedoMinLuminance() const;

  constexpr float_t& __cordl_internal_get_AlbedoMinLuminance();

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode const& __cordl_internal_get_MaterialValidationMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode& __cordl_internal_get_MaterialValidationMode();

  constexpr float_t const& __cordl_internal_get_MetallicMaxValue() const;

  constexpr float_t& __cordl_internal_get_MetallicMaxValue();

  constexpr float_t const& __cordl_internal_get_MetallicMinValue() const;

  constexpr float_t& __cordl_internal_get_MetallicMinValue();

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode const& __cordl_internal_get__DebugMaterialModeData_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode& __cordl_internal_get__DebugMaterialModeData_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const& __cordl_internal_get__DebugVertexAttributeIndexData_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode& __cordl_internal_get__DebugVertexAttributeIndexData_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset const& __cordl_internal_get_m_AlbedoDebugValidationPreset() const;

  constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset& __cordl_internal_get_m_AlbedoDebugValidationPreset();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData,
                     ::Array<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData>*> const&
  __cordl_internal_get_m_AlbedoDebugValidationPresetData() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData,
                     ::Array<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData>*>&
  __cordl_internal_get_m_AlbedoDebugValidationPresetData();

  constexpr float_t const& __cordl_internal_get_m_AlbedoHueTolerance() const;

  constexpr float_t& __cordl_internal_get_m_AlbedoHueTolerance();

  constexpr float_t const& __cordl_internal_get_m_AlbedoSaturationTolerance() const;

  constexpr float_t& __cordl_internal_get_m_AlbedoSaturationTolerance();

  constexpr void __cordl_internal_set_AlbedoCompareColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_AlbedoMaxLuminance(float_t value);

  constexpr void __cordl_internal_set_AlbedoMinLuminance(float_t value);

  constexpr void __cordl_internal_set_MaterialValidationMode(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);

  constexpr void __cordl_internal_set_MetallicMaxValue(float_t value);

  constexpr void __cordl_internal_set_MetallicMinValue(float_t value);

  constexpr void __cordl_internal_set__DebugMaterialModeData_k__BackingField(::UnityEngine::Rendering::Universal::DebugMaterialMode value);

  constexpr void __cordl_internal_set__DebugVertexAttributeIndexData_k__BackingField(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode value);

  constexpr void __cordl_internal_set_m_AlbedoDebugValidationPreset(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset value);

  constexpr void __cordl_internal_set_m_AlbedoDebugValidationPresetData(::ArrayW<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData,
                                                                                 ::Array<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData>*>
                                                                            value);

  constexpr void __cordl_internal_set_m_AlbedoHueTolerance(float_t value);

  constexpr void __cordl_internal_set_m_AlbedoSaturationTolerance(float_t value);

  /// @brief Method .ctor, addr 0x2c5c1c8, size 0x5b0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlbedoHueTolerance, addr 0x2c5efe0, size 0x18, virtual false, abstract: false, final false
  inline float_t get_AlbedoHueTolerance();

  /// @brief Method get_AlbedoSaturationTolerance, addr 0x2c5f000, size 0x18, virtual false, abstract: false, final false
  inline float_t get_AlbedoSaturationTolerance();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c5bbcc, size 0x28, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_DebugMaterialModeData, addr 0x2c5f020, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMaterialMode get_DebugMaterialModeData();

  /// @brief Method get_DebugVertexAttributeIndexData, addr 0x2c5f030, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode get_DebugVertexAttributeIndexData();

  /// @brief Method get_IsLightingActive, addr 0x2c5bda8, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c5bf10, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_albedoDebugValidationPreset, addr 0x2c5ef64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset get_albedoDebugValidationPreset();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_AlbedoHueTolerance, addr 0x2c5eff8, size 0x8, virtual false, abstract: false, final false
  inline void set_AlbedoHueTolerance(float_t value);

  /// @brief Method set_AlbedoSaturationTolerance, addr 0x2c5f018, size 0x8, virtual false, abstract: false, final false
  inline void set_AlbedoSaturationTolerance(float_t value);

  /// @brief Method set_DebugMaterialModeData, addr 0x2c5f028, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugMaterialModeData(::UnityEngine::Rendering::Universal::DebugMaterialMode value);

  /// @brief Method set_DebugVertexAttributeIndexData, addr 0x2c5f038, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugVertexAttributeIndexData(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode value);

  /// @brief Method set_albedoDebugValidationPreset, addr 0x2c5ef6c, size 0x74, virtual false, abstract: false, final false
  inline void set_albedoDebugValidationPreset(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsMaterial(DebugDisplaySettingsMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsMaterial(DebugDisplaySettingsMaterial const&) = delete;

  /// @brief Field m_AlbedoDebugValidationPresetData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData,
           ::Array<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData>*>
      ___m_AlbedoDebugValidationPresetData;

  /// @brief Field m_AlbedoDebugValidationPreset, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset ___m_AlbedoDebugValidationPreset;

  /// @brief Field AlbedoMinLuminance, offset: 0x1c, size: 0x4, def value: None
  float_t ___AlbedoMinLuminance;

  /// @brief Field AlbedoMaxLuminance, offset: 0x20, size: 0x4, def value: None
  float_t ___AlbedoMaxLuminance;

  /// @brief Field m_AlbedoHueTolerance, offset: 0x24, size: 0x4, def value: None
  float_t ___m_AlbedoHueTolerance;

  /// @brief Field m_AlbedoSaturationTolerance, offset: 0x28, size: 0x4, def value: None
  float_t ___m_AlbedoSaturationTolerance;

  /// @brief Field AlbedoCompareColor, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___AlbedoCompareColor;

  /// @brief Field MetallicMinValue, offset: 0x3c, size: 0x4, def value: None
  float_t ___MetallicMinValue;

  /// @brief Field MetallicMaxValue, offset: 0x40, size: 0x4, def value: None
  float_t ___MetallicMaxValue;

  /// @brief Field MaterialValidationMode, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode ___MaterialValidationMode;

  /// @brief Field <DebugMaterialModeData>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMaterialMode ____DebugMaterialModeData_k__BackingField;

  /// @brief Field <DebugVertexAttributeIndexData>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode ____DebugVertexAttributeIndexData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoDebugValidationPresetData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoDebugValidationPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___AlbedoMinLuminance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___AlbedoMaxLuminance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoHueTolerance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoSaturationTolerance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___AlbedoCompareColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___MetallicMinValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___MetallicMaxValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___MaterialValidationMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____DebugMaterialModeData_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____DebugVertexAttributeIndexData_k__BackingField) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPreset, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/AlbedoDebugValidationPreset");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__SettingsPanel____c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/SettingsPanel/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/WidgetFactory/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass3_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass4_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass5_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass6_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass7_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass8_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsMaterial__WidgetFactory____c__DisplayClass9_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass9_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/WidgetFactory");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsMaterial__AlbedoDebugValidationPresetData, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData");
