#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalDynamicResolutionSettings)
namespace UnityEngine::Rendering {
struct DynamicResUpscaleFilter;
}
namespace UnityEngine::Rendering {
struct DynamicResolutionType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GlobalDynamicResolutionSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GlobalDynamicResolutionSettings);
// Type: UnityEngine.Rendering::GlobalDynamicResolutionSettings
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::GlobalDynamicResolutionSettings
struct CORDL_TYPE GlobalDynamicResolutionSettings {
public:
  // Declarations
  /// @brief Method NewDefault, addr 0x1bd158c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GlobalDynamicResolutionSettings NewDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalDynamicResolutionSettings();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useMipBias", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "enableDLSS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DLSSPerfQualitySetting", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "DLSSUseOptimalSettings",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DLSSSharpness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxPercentage", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "minPercentage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dynResType", ty: "::UnityEngine::Rendering::DynamicResolutionType",
  // modifiers: "", def_value: None }, CppParam { name: "upsampleFilter", ty: "::UnityEngine::Rendering::DynamicResUpscaleFilter", modifiers: "", def_value: None }, CppParam { name: "forceResolution",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forcedPercentage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lowResTransparencyMinimumThreshold", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "rayTracingHalfResThreshold", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GlobalDynamicResolutionSettings(bool enabled, bool useMipBias, bool enableDLSS, uint32_t DLSSPerfQualitySetting, bool DLSSUseOptimalSettings, float_t DLSSSharpness, float_t maxPercentage,
                                            float_t minPercentage, ::UnityEngine::Rendering::DynamicResolutionType dynResType, ::UnityEngine::Rendering::DynamicResUpscaleFilter upsampleFilter,
                                            bool forceResolution, float_t forcedPercentage, float_t lowResTransparencyMinimumThreshold, float_t rayTracingHalfResThreshold) noexcept;

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field useMipBias, offset: 0x1, size: 0x1, def value: None
  bool useMipBias;

  /// @brief Field enableDLSS, offset: 0x2, size: 0x1, def value: None
  bool enableDLSS;

  /// @brief Field DLSSPerfQualitySetting, offset: 0x4, size: 0x4, def value: None
  uint32_t DLSSPerfQualitySetting;

  /// @brief Field DLSSUseOptimalSettings, offset: 0x8, size: 0x1, def value: None
  bool DLSSUseOptimalSettings;

  /// @brief Field DLSSSharpness, offset: 0xc, size: 0x4, def value: None
  float_t DLSSSharpness;

  /// @brief Field maxPercentage, offset: 0x10, size: 0x4, def value: None
  float_t maxPercentage;

  /// @brief Field minPercentage, offset: 0x14, size: 0x4, def value: None
  float_t minPercentage;

  /// @brief Field dynResType, offset: 0x18, size: 0x1, def value: None
  ::UnityEngine::Rendering::DynamicResolutionType dynResType;

  /// @brief Field upsampleFilter, offset: 0x19, size: 0x1, def value: None
  ::UnityEngine::Rendering::DynamicResUpscaleFilter upsampleFilter;

  /// @brief Field forceResolution, offset: 0x1a, size: 0x1, def value: None
  bool forceResolution;

  /// @brief Field forcedPercentage, offset: 0x1c, size: 0x4, def value: None
  float_t forcedPercentage;

  /// @brief Field lowResTransparencyMinimumThreshold, offset: 0x20, size: 0x4, def value: None
  float_t lowResTransparencyMinimumThreshold;

  /// @brief Field rayTracingHalfResThreshold, offset: 0x24, size: 0x4, def value: None
  float_t rayTracingHalfResThreshold;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GlobalDynamicResolutionSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, useMipBias) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, enableDLSS) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, DLSSPerfQualitySetting) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, DLSSUseOptimalSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, DLSSSharpness) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, maxPercentage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, minPercentage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, dynResType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, upsampleFilter) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, forceResolution) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, forcedPercentage) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, lowResTransparencyMinimumThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, rayTracingHalfResThreshold) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GlobalDynamicResolutionSettings, "UnityEngine.Rendering", "GlobalDynamicResolutionSettings");
