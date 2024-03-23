#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPProfileId)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPProfileId);
// Type: UnityEngine.Rendering.Universal::URPProfileId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::URPProfileId
struct CORDL_TYPE URPProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __URPProfileId_Unwrapped
  enum struct __URPProfileId_Unwrapped : int32_t {
    __E_UniversalRenderTotal = static_cast<int32_t>(0x0),
    __E_UpdateVolumeFramework = static_cast<int32_t>(0x1),
    __E_RenderCameraStack = static_cast<int32_t>(0x2),
    __E_AdditionalLightsShadow = static_cast<int32_t>(0x3),
    __E_ColorGradingLUT = static_cast<int32_t>(0x4),
    __E_CopyColor = static_cast<int32_t>(0x5),
    __E_CopyDepth = static_cast<int32_t>(0x6),
    __E_DepthNormalPrepass = static_cast<int32_t>(0x7),
    __E_DepthPrepass = static_cast<int32_t>(0x8),
    __E_DrawOpaqueObjects = static_cast<int32_t>(0x9),
    __E_DrawTransparentObjects = static_cast<int32_t>(0xa),
    __E_LightCookies = static_cast<int32_t>(0xb),
    __E_MainLightShadow = static_cast<int32_t>(0xc),
    __E_ResolveShadows = static_cast<int32_t>(0xd),
    __E_SSAO = static_cast<int32_t>(0xe),
    __E_StopNaNs = static_cast<int32_t>(0xf),
    __E_SMAA = static_cast<int32_t>(0x10),
    __E_GaussianDepthOfField = static_cast<int32_t>(0x11),
    __E_BokehDepthOfField = static_cast<int32_t>(0x12),
    __E_MotionBlur = static_cast<int32_t>(0x13),
    __E_PaniniProjection = static_cast<int32_t>(0x14),
    __E_UberPostProcess = static_cast<int32_t>(0x15),
    __E_Bloom = static_cast<int32_t>(0x16),
    __E_LensFlareDataDriven = static_cast<int32_t>(0x17),
    __E_MotionVectors = static_cast<int32_t>(0x18),
    __E_FinalBlit = static_cast<int32_t>(0x19),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __URPProfileId_Unwrapped() const noexcept {
    return static_cast<__URPProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr URPProfileId(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AdditionalLightsShadow value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::URPProfileId const AdditionalLightsShadow;

  /// @brief Field Bloom value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Rendering::Universal::URPProfileId const Bloom;

  /// @brief Field BokehDepthOfField value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Rendering::Universal::URPProfileId const BokehDepthOfField;

  /// @brief Field ColorGradingLUT value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::URPProfileId const ColorGradingLUT;

  /// @brief Field CopyColor value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::URPProfileId const CopyColor;

  /// @brief Field CopyDepth value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::URPProfileId const CopyDepth;

  /// @brief Field DepthNormalPrepass value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DepthNormalPrepass;

  /// @brief Field DepthPrepass value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DepthPrepass;

  /// @brief Field DrawOpaqueObjects value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawOpaqueObjects;

  /// @brief Field DrawTransparentObjects value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawTransparentObjects;

  /// @brief Field FinalBlit value: static_cast<int32_t>(0x19)
  static ::UnityEngine::Rendering::Universal::URPProfileId const FinalBlit;

  /// @brief Field GaussianDepthOfField value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Rendering::Universal::URPProfileId const GaussianDepthOfField;

  /// @brief Field LensFlareDataDriven value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LensFlareDataDriven;

  /// @brief Field LightCookies value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LightCookies;

  /// @brief Field MainLightShadow value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::Universal::URPProfileId const MainLightShadow;

  /// @brief Field MotionBlur value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Rendering::Universal::URPProfileId const MotionBlur;

  /// @brief Field MotionVectors value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Rendering::Universal::URPProfileId const MotionVectors;

  /// @brief Field PaniniProjection value: static_cast<int32_t>(0x14)
  static ::UnityEngine::Rendering::Universal::URPProfileId const PaniniProjection;

  /// @brief Field RenderCameraStack value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RenderCameraStack;

  /// @brief Field ResolveShadows value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::Universal::URPProfileId const ResolveShadows;

  /// @brief Field SMAA value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::Universal::URPProfileId const SMAA;

  /// @brief Field SSAO value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::Universal::URPProfileId const SSAO;

  /// @brief Field StopNaNs value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::Universal::URPProfileId const StopNaNs;

  /// @brief Field UberPostProcess value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UberPostProcess;

  /// @brief Field UniversalRenderTotal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UniversalRenderTotal;

  /// @brief Field UpdateVolumeFramework value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UpdateVolumeFramework;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPProfileId, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPProfileId, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPProfileId, "UnityEngine.Rendering.Universal", "URPProfileId");
