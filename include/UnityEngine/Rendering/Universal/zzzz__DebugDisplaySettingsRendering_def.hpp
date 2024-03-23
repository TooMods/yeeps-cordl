#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsRendering)
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Rendering::Universal {
struct DebugFullScreenMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMipInfoMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugPostProcessingMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugSceneOverrideMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugValidationMode;
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
struct PixelValidationChannels;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
struct __DebugDisplaySettingsRendering__WireframeMode;
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
struct __DebugDisplaySettingsRendering__WireframeMode;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__Strings;
}
namespace UnityEngine::Rendering::Universal {
class __DebugDisplaySettingsRendering__WidgetFactory;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory);
// Type: ::WireframeMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::DebugDisplaySettingsRendering::WireframeMode
struct CORDL_TYPE __DebugDisplaySettingsRendering__WireframeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebugDisplaySettingsRendering__WireframeMode_Unwrapped
  enum struct ____DebugDisplaySettingsRendering__WireframeMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Wireframe = static_cast<int32_t>(0x1),
    __E_SolidWireframe = static_cast<int32_t>(0x2),
    __E_ShadedWireframe = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebugDisplaySettingsRendering__WireframeMode_Unwrapped() const noexcept {
    return static_cast<____DebugDisplaySettingsRendering__WireframeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WireframeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebugDisplaySettingsRendering__WireframeMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const None;

  /// @brief Field ShadedWireframe value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const ShadedWireframe;

  /// @brief Field SolidWireframe value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const SolidWireframe;

  /// @brief Field Wireframe value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const Wireframe;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::Strings*
class CORDL_TYPE __DebugDisplaySettingsRendering__Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AdditionalWireframeModes, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AdditionalWireframeModes, put = setStaticF_AdditionalWireframeModes))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip AdditionalWireframeModes;

  /// @brief Field Channels, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Channels, put = setStaticF_Channels))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip Channels;

  /// @brief Field HDR, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_HDR, put = setStaticF_HDR))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip HDR;

  /// @brief Field MSAA, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MSAA, put = setStaticF_MSAA))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MSAA;

  /// @brief Field MapOverlays, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MapOverlays, put = setStaticF_MapOverlays))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MapOverlays;

  /// @brief Field MapSize, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MapSize, put = setStaticF_MapSize))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip MapSize;

  /// @brief Field Overdraw, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Overdraw, put = setStaticF_Overdraw))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip Overdraw;

  /// @brief Field PixelValidationMode, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_PixelValidationMode, put = setStaticF_PixelValidationMode))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip PixelValidationMode;

  /// @brief Field PostProcessing, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_PostProcessing, put = setStaticF_PostProcessing))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip PostProcessing;

  /// @brief Field ValueRangeMax, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ValueRangeMax, put = setStaticF_ValueRangeMax))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip ValueRangeMax;

  /// @brief Field ValueRangeMin, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ValueRangeMin, put = setStaticF_ValueRangeMin))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip ValueRangeMin;

  /// @brief Field WireframeNotSupportedWarning, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_WireframeNotSupportedWarning,
                             put = setStaticF_WireframeNotSupportedWarning))::GlobalNamespace::__DebugUI__Widget__NameAndTooltip WireframeNotSupportedWarning;

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_AdditionalWireframeModes();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_Channels();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_HDR();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MSAA();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MapOverlays();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_MapSize();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_Overdraw();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_PixelValidationMode();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_PostProcessing();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_ValueRangeMax();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_ValueRangeMin();

  static inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip getStaticF_WireframeNotSupportedWarning();

  static inline void setStaticF_AdditionalWireframeModes(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_Channels(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_HDR(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MSAA(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MapOverlays(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_MapSize(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_Overdraw(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_PixelValidationMode(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_PostProcessing(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_ValueRangeMax(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_ValueRangeMin(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

  static inline void setStaticF_WireframeNotSupportedWarning(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__Strings(__DebugDisplaySettingsRendering__Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__Strings(__DebugDisplaySettingsRendering__Strings const&) = delete;

  /// @brief Field RangeValidationSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString RangeValidationSettingsContainerName{ u"Pixel Range Settings" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass0_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateMapOverlays>b__0, addr 0x2c62788, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlays_b__0();

  /// @brief Method <CreateMapOverlays>b__2, addr 0x2c627a4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlays_b__2();

  /// @brief Method <CreateMapOverlays>b__3, addr 0x2c627c0, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMapOverlays_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* __9;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Action_1<int32_t>* __9__0_1;

  /// @brief Field <>9__1_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_2, put = setStaticF___9__1_2))::System::Func_1<int32_t>* __9__1_2;

  /// @brief Field <>9__1_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_3, put = setStaticF___9__1_3))::System::Func_1<int32_t>* __9__1_3;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1))::System::Action_1<int32_t>* __9__2_1;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4))::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* __9__2_4;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1))::System::Action_1<int32_t>* __9__8_1;

  /// @brief Field <>9__8_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_4, put = setStaticF___9__8_4))::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* __9__8_4;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1))::System::Action_1<int32_t>* __9__9_1;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* New_ctor();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__2_1, addr 0x2c6285c, size 0x4, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__2_1(int32_t value);

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__2_4, addr 0x2c62860, size 0x60, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__2_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _);

  /// @brief Method <CreateMapOverlaySize>b__1_2, addr 0x2c6284c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__1_2();

  /// @brief Method <CreateMapOverlaySize>b__1_3, addr 0x2c62854, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__1_3();

  /// @brief Method <CreateMapOverlays>b__0_1, addr 0x2c62848, size 0x4, virtual false, abstract: false, final false
  inline void _CreateMapOverlays_b__0_1(int32_t value);

  /// @brief Method <CreatePixelValidationChannels>b__9_1, addr 0x2c62924, size 0x4, virtual false, abstract: false, final false
  inline void _CreatePixelValidationChannels_b__9_1(int32_t value);

  /// @brief Method <CreatePixelValidationMode>b__8_1, addr 0x2c628c0, size 0x4, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__8_1(int32_t value);

  /// @brief Method <CreatePixelValidationMode>b__8_4, addr 0x2c628c4, size 0x60, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__8_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _);

  /// @brief Method .ctor, addr 0x2c62840, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* getStaticF___9();

  static inline ::System::Action_1<int32_t>* getStaticF___9__0_1();

  static inline ::System::Func_1<int32_t>* getStaticF___9__1_2();

  static inline ::System::Func_1<int32_t>* getStaticF___9__1_3();

  static inline ::System::Action_1<int32_t>* getStaticF___9__2_1();

  static inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* getStaticF___9__2_4();

  static inline ::System::Action_1<int32_t>* getStaticF___9__8_1();

  static inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* getStaticF___9__8_4();

  static inline ::System::Action_1<int32_t>* getStaticF___9__9_1();

  static inline void setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* value);

  static inline void setStaticF___9__0_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__1_2(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__1_3(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__2_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__2_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__8_1(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__8_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__9_1(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c(__DebugDisplaySettingsRendering__WidgetFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c(__DebugDisplaySettingsRendering__WidgetFactory____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass1_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateMapOverlaySize>b__0, addr 0x2c62928, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__0();

  /// @brief Method <CreateMapOverlaySize>b__1, addr 0x2c62944, size 0x1c, virtual false, abstract: false, final false
  inline void _CreateMapOverlaySize_b__1(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass2_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0* New_ctor();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__0, addr 0x2c62960, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateAdditionalWireframeShaderViews_b__0();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__2, addr 0x2c6297c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreateAdditionalWireframeShaderViews_b__2();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__3, addr 0x2c62998, size 0x38, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass3_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreateWireframeNotSupportedWarning>b__0, addr 0x2c629d0, size 0x54, virtual false, abstract: false, final false
  inline bool _CreateWireframeNotSupportedWarning_b__0();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass4_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0* New_ctor();

  /// @brief Method <CreateOverdraw>b__0, addr 0x2c62a24, size 0x1c, virtual false, abstract: false, final false
  inline bool _CreateOverdraw_b__0();

  /// @brief Method <CreateOverdraw>b__1, addr 0x2c62a40, size 0x34, virtual false, abstract: false, final false
  inline void _CreateOverdraw_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass5_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0* New_ctor();

  /// @brief Method <CreatePostProcessing>b__0, addr 0x2c62a74, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePostProcessing_b__0();

  /// @brief Method <CreatePostProcessing>b__1, addr 0x2c62a90, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePostProcessing_b__1(int32_t value);

  /// @brief Method <CreatePostProcessing>b__2, addr 0x2c62aac, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePostProcessing_b__2();

  /// @brief Method <CreatePostProcessing>b__3, addr 0x2c62ac8, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePostProcessing_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass6_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0* New_ctor();

  /// @brief Method <CreateMSAA>b__0, addr 0x2c62ae4, size 0x1c, virtual false, abstract: false, final false
  inline bool _CreateMSAA_b__0();

  /// @brief Method <CreateMSAA>b__1, addr 0x2c62b00, size 0x20, virtual false, abstract: false, final false
  inline void _CreateMSAA_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass7_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0* New_ctor();

  /// @brief Method <CreateHDR>b__0, addr 0x2c62b20, size 0x1c, virtual false, abstract: false, final false
  inline bool _CreateHDR_b__0();

  /// @brief Method <CreateHDR>b__1, addr 0x2c62b3c, size 0x20, virtual false, abstract: false, final false
  inline void _CreateHDR_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c61e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass8_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreatePixelValidationMode>b__0, addr 0x2c62b5c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationMode_b__0();

  /// @brief Method <CreatePixelValidationMode>b__2, addr 0x2c62b78, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationMode_b__2();

  /// @brief Method <CreatePixelValidationMode>b__3, addr 0x2c62b94, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c6219c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass9_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0* New_ctor();

  /// @brief Method <CreatePixelValidationChannels>b__0, addr 0x2c62bb0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationChannels_b__0();

  /// @brief Method <CreatePixelValidationChannels>b__2, addr 0x2c62bcc, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationChannels_b__2();

  /// @brief Method <CreatePixelValidationChannels>b__3, addr 0x2c62be8, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePixelValidationChannels_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c62450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass10_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0* New_ctor();

  /// @brief Method <CreatePixelValueRangeMin>b__0, addr 0x2c62c04, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreatePixelValueRangeMin_b__0();

  /// @brief Method <CreatePixelValueRangeMin>b__1, addr 0x2c62c20, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePixelValueRangeMin_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c625e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory::<>c__DisplayClass11_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0* New_ctor();

  /// @brief Method <CreatePixelValueRangeMax>b__0, addr 0x2c62c3c, size 0x1c, virtual false, abstract: false, final false
  inline float_t _CreatePixelValueRangeMax_b__0();

  /// @brief Method <CreatePixelValueRangeMax>b__1, addr 0x2c62c58, size 0x1c, virtual false, abstract: false, final false
  inline void _CreatePixelValueRangeMax_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x2c62780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0(__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WidgetFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::WidgetFactory*
class CORDL_TYPE __DebugDisplaySettingsRendering__WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c;

  using __c__DisplayClass0_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0;

  /// @brief Method CreateAdditionalWireframeShaderViews, addr 0x2c5e3ac, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateAdditionalWireframeShaderViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateHDR, addr 0x2c5de58, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateMSAA, addr 0x2c5dfdc, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateMapOverlaySize, addr 0x2c61b34, size 0x2f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateMapOverlays, addr 0x2c61880, size 0x2ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateOverdraw, addr 0x2c5e810, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateOverdraw(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreatePixelValidationChannels, addr 0x2c621a4, size 0x2ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreatePixelValidationMode, addr 0x2c61e60, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreatePixelValueRangeMax, addr 0x2c625f0, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreatePixelValueRangeMin, addr 0x2c62458, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreatePostProcessing, addr 0x2c5e160, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method CreateWireframeNotSupportedWarning, addr 0x2c5e6e8, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__DebugUI__Widget* CreateWireframeNotSupportedWarning(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__WidgetFactory(__DebugDisplaySettingsRendering__WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__WidgetFactory(__DebugDisplaySettingsRendering__WidgetFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::SettingsPanel::<>c__DisplayClass2_0*
class CORDL_TYPE __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method <.ctor>b__0, addr 0x2c62cbc, size 0x24, virtual false, abstract: false, final false
  inline bool __ctor_b__0();

  /// @brief Method .ctor, addr 0x2c62cb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0(__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0(__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0 const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsPanel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::DebugDisplaySettingsRendering::SettingsPanel*
class CORDL_TYPE __DebugDisplaySettingsRendering__SettingsPanel : public ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0;

  __declspec(property(get = get_PanelName))::StringW PanelName;

  static inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method .ctor, addr 0x2c61190, size 0x374, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method get_PanelName, addr 0x2c62c74, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugDisplaySettingsRendering__SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugDisplaySettingsRendering__SettingsPanel(__DebugDisplaySettingsRendering__SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugDisplaySettingsRendering__SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugDisplaySettingsRendering__SettingsPanel(__DebugDisplaySettingsRendering__SettingsPanel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DebugDisplaySettingsRendering
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugDisplaySettingsRendering*
class CORDL_TYPE DebugDisplaySettingsRendering : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory;

  using WireframeMode = ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  __declspec(property(get = get_ValidationRangeMax, put = set_ValidationRangeMax)) float_t ValidationRangeMax;

  __declspec(property(get = get_ValidationRangeMin, put = set_ValidationRangeMin)) float_t ValidationRangeMin;

  /// @brief Field <ValidationRangeMax>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__ValidationRangeMax_k__BackingField, put = __cordl_internal_set__ValidationRangeMax_k__BackingField)) float_t _ValidationRangeMax_k__BackingField;

  /// @brief Field <ValidationRangeMin>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__ValidationRangeMin_k__BackingField, put = __cordl_internal_set__ValidationRangeMin_k__BackingField)) float_t _ValidationRangeMin_k__BackingField;

  /// @brief Field <debugFullScreenModeOutputSizeScreenPercent>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__debugFullScreenModeOutputSizeScreenPercent_k__BackingField,
                      put = __cordl_internal_set__debugFullScreenModeOutputSizeScreenPercent_k__BackingField)) int32_t _debugFullScreenModeOutputSizeScreenPercent_k__BackingField;

  /// @brief Field <debugFullScreenMode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__debugFullScreenMode_k__BackingField,
                      put = __cordl_internal_set__debugFullScreenMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugFullScreenMode _debugFullScreenMode_k__BackingField;

  /// @brief Field <debugMipInfoMode>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__debugMipInfoMode_k__BackingField,
                      put = __cordl_internal_set__debugMipInfoMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugMipInfoMode _debugMipInfoMode_k__BackingField;

  /// @brief Field <debugPostProcessingMode>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__debugPostProcessingMode_k__BackingField,
                      put = __cordl_internal_set__debugPostProcessingMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugPostProcessingMode _debugPostProcessingMode_k__BackingField;

  /// @brief Field <debugSceneOverrideMode>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__debugSceneOverrideMode_k__BackingField,
                      put = __cordl_internal_set__debugSceneOverrideMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugSceneOverrideMode _debugSceneOverrideMode_k__BackingField;

  /// @brief Field <enableHDR>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__enableHDR_k__BackingField, put = __cordl_internal_set__enableHDR_k__BackingField)) bool _enableHDR_k__BackingField;

  /// @brief Field <enableMsaa>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__enableMsaa_k__BackingField, put = __cordl_internal_set__enableMsaa_k__BackingField)) bool _enableMsaa_k__BackingField;

  /// @brief Field <validationChannels>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__validationChannels_k__BackingField,
                      put = __cordl_internal_set__validationChannels_k__BackingField))::UnityEngine::Rendering::Universal::PixelValidationChannels _validationChannels_k__BackingField;

  /// @brief Field <validationMode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__validationMode_k__BackingField,
                      put = __cordl_internal_set__validationMode_k__BackingField))::UnityEngine::Rendering::Universal::DebugValidationMode _validationMode_k__BackingField;

  __declspec(property(get = get_debugFullScreenMode, put = set_debugFullScreenMode))::UnityEngine::Rendering::Universal::DebugFullScreenMode debugFullScreenMode;

  __declspec(property(get = get_debugFullScreenModeOutputSizeScreenPercent, put = set_debugFullScreenModeOutputSizeScreenPercent)) int32_t debugFullScreenModeOutputSizeScreenPercent;

  __declspec(property(get = get_debugMipInfoMode, put = set_debugMipInfoMode))::UnityEngine::Rendering::Universal::DebugMipInfoMode debugMipInfoMode;

  __declspec(property(get = get_debugPostProcessingMode, put = set_debugPostProcessingMode))::UnityEngine::Rendering::Universal::DebugPostProcessingMode debugPostProcessingMode;

  __declspec(property(get = get_debugSceneOverrideMode, put = set_debugSceneOverrideMode))::UnityEngine::Rendering::Universal::DebugSceneOverrideMode debugSceneOverrideMode;

  __declspec(property(get = get_enableHDR, put = set_enableHDR)) bool enableHDR;

  __declspec(property(get = get_enableMsaa, put = set_enableMsaa)) bool enableMsaa;

  /// @brief Field m_Overdraw, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Overdraw, put = __cordl_internal_set_m_Overdraw)) bool m_Overdraw;

  /// @brief Field m_WireframeMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WireframeMode,
                      put = __cordl_internal_set_m_WireframeMode))::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode m_WireframeMode;

  __declspec(property(get = get_overdraw, put = set_overdraw)) bool overdraw;

  __declspec(property(get = get_validationChannels, put = set_validationChannels))::UnityEngine::Rendering::Universal::PixelValidationChannels validationChannels;

  __declspec(property(get = get_validationMode, put = set_validationMode))::UnityEngine::Rendering::Universal::DebugValidationMode validationMode;

  __declspec(property(get = get_wireframeMode, put = set_wireframeMode))::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode wireframeMode;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x2c61130, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* New_ctor();

  /// @brief Method TryGetScreenClearColor, addr 0x2c5bca8, size 0x9c, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> color);

  /// @brief Method UpdateDebugSceneOverrideMode, addr 0x2c6102c, size 0x24, virtual false, abstract: false, final false
  inline void UpdateDebugSceneOverrideMode();

  constexpr float_t const& __cordl_internal_get__ValidationRangeMax_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__ValidationRangeMax_k__BackingField();

  constexpr float_t const& __cordl_internal_get__ValidationRangeMin_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__ValidationRangeMin_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__debugFullScreenModeOutputSizeScreenPercent_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__debugFullScreenModeOutputSizeScreenPercent_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode const& __cordl_internal_get__debugFullScreenMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode& __cordl_internal_get__debugFullScreenMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode const& __cordl_internal_get__debugMipInfoMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode& __cordl_internal_get__debugMipInfoMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode const& __cordl_internal_get__debugPostProcessingMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode& __cordl_internal_get__debugPostProcessingMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode const& __cordl_internal_get__debugSceneOverrideMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode& __cordl_internal_get__debugSceneOverrideMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableHDR_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableHDR_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableMsaa_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableMsaa_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels const& __cordl_internal_get__validationChannels_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels& __cordl_internal_get__validationChannels_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode const& __cordl_internal_get__validationMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode& __cordl_internal_get__validationMode_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_Overdraw() const;

  constexpr bool& __cordl_internal_get_m_Overdraw();

  constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const& __cordl_internal_get_m_WireframeMode() const;

  constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode& __cordl_internal_get_m_WireframeMode();

  constexpr void __cordl_internal_set__ValidationRangeMax_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__ValidationRangeMin_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__debugFullScreenModeOutputSizeScreenPercent_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__debugFullScreenMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugFullScreenMode value);

  constexpr void __cordl_internal_set__debugMipInfoMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipInfoMode value);

  constexpr void __cordl_internal_set__debugPostProcessingMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);

  constexpr void __cordl_internal_set__debugSceneOverrideMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value);

  constexpr void __cordl_internal_set__enableHDR_k__BackingField(bool value);

  constexpr void __cordl_internal_set__enableMsaa_k__BackingField(bool value);

  constexpr void __cordl_internal_set__validationChannels_k__BackingField(::UnityEngine::Rendering::Universal::PixelValidationChannels value);

  constexpr void __cordl_internal_set__validationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugValidationMode value);

  constexpr void __cordl_internal_set_m_Overdraw(bool value);

  constexpr void __cordl_internal_set_m_WireframeMode(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode value);

  /// @brief Method .ctor, addr 0x2c5c780, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x2c5bc14, size 0x4c, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x2c5bdd0, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x2c5bf38, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_ValidationRangeMax, addr 0x2c61120, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ValidationRangeMax();

  /// @brief Method get_ValidationRangeMin, addr 0x2c61110, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ValidationRangeMin();

  /// @brief Method get_debugFullScreenMode, addr 0x2c61078, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugFullScreenMode get_debugFullScreenMode();

  /// @brief Method get_debugFullScreenModeOutputSizeScreenPercent, addr 0x2c61088, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_debugFullScreenModeOutputSizeScreenPercent();

  /// @brief Method get_debugMipInfoMode, addr 0x2c610a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMipInfoMode get_debugMipInfoMode();

  /// @brief Method get_debugPostProcessingMode, addr 0x2c610b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugPostProcessingMode get_debugPostProcessingMode();

  /// @brief Method get_debugSceneOverrideMode, addr 0x2c61098, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode get_debugSceneOverrideMode();

  /// @brief Method get_enableHDR, addr 0x2c610dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableHDR();

  /// @brief Method get_enableMsaa, addr 0x2c610c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableMsaa();

  /// @brief Method get_overdraw, addr 0x2c61050, size 0x8, virtual false, abstract: false, final false
  inline bool get_overdraw();

  /// @brief Method get_validationChannels, addr 0x2c61100, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PixelValidationChannels get_validationChannels();

  /// @brief Method get_validationMode, addr 0x2c610f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugValidationMode get_validationMode();

  /// @brief Method get_wireframeMode, addr 0x2c61000, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode get_wireframeMode();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_ValidationRangeMax, addr 0x2c61128, size 0x8, virtual false, abstract: false, final false
  inline void set_ValidationRangeMax(float_t value);

  /// @brief Method set_ValidationRangeMin, addr 0x2c61118, size 0x8, virtual false, abstract: false, final false
  inline void set_ValidationRangeMin(float_t value);

  /// @brief Method set_debugFullScreenMode, addr 0x2c61080, size 0x8, virtual false, abstract: false, final false
  inline void set_debugFullScreenMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode value);

  /// @brief Method set_debugFullScreenModeOutputSizeScreenPercent, addr 0x2c61090, size 0x8, virtual false, abstract: false, final false
  inline void set_debugFullScreenModeOutputSizeScreenPercent(int32_t value);

  /// @brief Method set_debugMipInfoMode, addr 0x2c610b0, size 0x8, virtual false, abstract: false, final false
  inline void set_debugMipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode value);

  /// @brief Method set_debugPostProcessingMode, addr 0x2c610c0, size 0x8, virtual false, abstract: false, final false
  inline void set_debugPostProcessingMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);

  /// @brief Method set_debugSceneOverrideMode, addr 0x2c610a0, size 0x8, virtual false, abstract: false, final false
  inline void set_debugSceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value);

  /// @brief Method set_enableHDR, addr 0x2c610e4, size 0xc, virtual false, abstract: false, final false
  inline void set_enableHDR(bool value);

  /// @brief Method set_enableMsaa, addr 0x2c610d0, size 0xc, virtual false, abstract: false, final false
  inline void set_enableMsaa(bool value);

  /// @brief Method set_overdraw, addr 0x2c61058, size 0x20, virtual false, abstract: false, final false
  inline void set_overdraw(bool value);

  /// @brief Method set_validationChannels, addr 0x2c61108, size 0x8, virtual false, abstract: false, final false
  inline void set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels value);

  /// @brief Method set_validationMode, addr 0x2c610f8, size 0x8, virtual false, abstract: false, final false
  inline void set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode value);

  /// @brief Method set_wireframeMode, addr 0x2c61008, size 0x24, virtual false, abstract: false, final false
  inline void set_wireframeMode(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRendering(DebugDisplaySettingsRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRendering(DebugDisplaySettingsRendering const&) = delete;

  /// @brief Field m_WireframeMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode ___m_WireframeMode;

  /// @brief Field m_Overdraw, offset: 0x14, size: 0x1, def value: None
  bool ___m_Overdraw;

  /// @brief Field <debugFullScreenMode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugFullScreenMode ____debugFullScreenMode_k__BackingField;

  /// @brief Field <debugFullScreenModeOutputSizeScreenPercent>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____debugFullScreenModeOutputSizeScreenPercent_k__BackingField;

  /// @brief Field <debugSceneOverrideMode>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode ____debugSceneOverrideMode_k__BackingField;

  /// @brief Field <debugMipInfoMode>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMipInfoMode ____debugMipInfoMode_k__BackingField;

  /// @brief Field <debugPostProcessingMode>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugPostProcessingMode ____debugPostProcessingMode_k__BackingField;

  /// @brief Field <enableMsaa>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____enableMsaa_k__BackingField;

  /// @brief Field <enableHDR>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool ____enableHDR_k__BackingField;

  /// @brief Field <validationMode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugValidationMode ____validationMode_k__BackingField;

  /// @brief Field <validationChannels>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PixelValidationChannels ____validationChannels_k__BackingField;

  /// @brief Field <ValidationRangeMin>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____ValidationRangeMin_k__BackingField;

  /// @brief Field <ValidationRangeMax>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____ValidationRangeMax_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ___m_WireframeMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ___m_Overdraw) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____debugFullScreenMode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____debugFullScreenModeOutputSizeScreenPercent_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____debugSceneOverrideMode_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____debugMipInfoMode_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____debugPostProcessingMode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____enableMsaa_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____enableHDR_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationChannels_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____ValidationRangeMin_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____ValidationRangeMax_k__BackingField) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WireframeMode");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/SettingsPanel/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WidgetFactory/<>c");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass11_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass9_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WidgetFactory");
