#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/zzzz__TransparencySortMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer2DData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
namespace UnityEngine::Rendering::Universal {
class ILight2DCullResult;
}
namespace UnityEngine::Rendering::Universal {
struct Light2DBlendStyle;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
struct __Renderer2DData__Renderer2DDefaultMaterialType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TransparencySortMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __Renderer2DData__Renderer2DDefaultMaterialType;
}
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Renderer2DData);
// Type: ::Renderer2DDefaultMaterialType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Renderer2DData::Renderer2DDefaultMaterialType
struct CORDL_TYPE __Renderer2DData__Renderer2DDefaultMaterialType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Renderer2DData__Renderer2DDefaultMaterialType_Unwrapped
  enum struct ____Renderer2DData__Renderer2DDefaultMaterialType_Unwrapped : int32_t {
    __E_Lit = static_cast<int32_t>(0x0),
    __E_Unlit = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Renderer2DData__Renderer2DDefaultMaterialType_Unwrapped() const noexcept {
    return static_cast<____Renderer2DData__Renderer2DDefaultMaterialType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Renderer2DData__Renderer2DDefaultMaterialType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Renderer2DData__Renderer2DDefaultMaterialType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Custom value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType const Custom;

  /// @brief Field Lit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType const Lit;

  /// @brief Field Unlit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType const Unlit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Renderer2DData
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 432, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Renderer2DData*
class CORDL_TYPE Renderer2DData : public ::UnityEngine::Rendering::Universal::ScriptableRendererData {
public:
  // Declarations
  using Renderer2DDefaultMaterialType = ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType;

  /// @brief Field <geometryUnshadowMaterial>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__geometryUnshadowMaterial_k__BackingField,
                      put = __cordl_internal_set__geometryUnshadowMaterial_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>,
                                                                                                     ::Array<::UnityW<::UnityEngine::Material>>*> _geometryUnshadowMaterial_k__BackingField;

  /// @brief Field <isNormalsRenderTargetValid>k__BackingField, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__isNormalsRenderTargetValid_k__BackingField,
                      put = __cordl_internal_set__isNormalsRenderTargetValid_k__BackingField)) bool _isNormalsRenderTargetValid_k__BackingField;

  /// @brief Field <lightCullResult>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__lightCullResult_k__BackingField,
                      put = __cordl_internal_set__lightCullResult_k__BackingField))::UnityEngine::Rendering::Universal::ILight2DCullResult* _lightCullResult_k__BackingField;

  /// @brief Field <lightMaterials>k__BackingField, offset 0xe0, size 0x8
  __declspec(
      property(get = __cordl_internal_get__lightMaterials_k__BackingField,
               put = __cordl_internal_set__lightMaterials_k__BackingField))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* _lightMaterials_k__BackingField;

  /// @brief Field <normalsRenderTargetScale>k__BackingField, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__normalsRenderTargetScale_k__BackingField,
                      put = __cordl_internal_set__normalsRenderTargetScale_k__BackingField)) float_t _normalsRenderTargetScale_k__BackingField;

  /// @brief Field <projectedShadowMaterial>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__projectedShadowMaterial_k__BackingField,
                      put = __cordl_internal_set__projectedShadowMaterial_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>,
                                                                                                    ::Array<::UnityW<::UnityEngine::Material>>*> _projectedShadowMaterial_k__BackingField;

  /// @brief Field <spriteSelfShadowMaterial>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteSelfShadowMaterial_k__BackingField,
                      put = __cordl_internal_set__spriteSelfShadowMaterial_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>,
                                                                                                     ::Array<::UnityW<::UnityEngine::Material>>*> _spriteSelfShadowMaterial_k__BackingField;

  /// @brief Field <spriteUnshadowMaterial>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteUnshadowMaterial_k__BackingField,
                      put = __cordl_internal_set__spriteUnshadowMaterial_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>,
                                                                                                   ::Array<::UnityW<::UnityEngine::Material>>*> _spriteUnshadowMaterial_k__BackingField;

  /// @brief Field <stencilOnlyShadowMaterial>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__stencilOnlyShadowMaterial_k__BackingField,
                      put = __cordl_internal_set__stencilOnlyShadowMaterial_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>,
                                                                                                      ::Array<::UnityW<::UnityEngine::Material>>*> _stencilOnlyShadowMaterial_k__BackingField;

  __declspec(property(get = get_blitShader))::UnityW<::UnityEngine::Shader> blitShader;

  __declspec(property(get = get_cameraSortingLayerDownsamplingMethod))::UnityEngine::Rendering::Universal::Downsampling cameraSortingLayerDownsamplingMethod;

  /// @brief Field cameraSortingLayerRenderTarget, offset 0x178, size 0x30
  __declspec(property(get = __cordl_internal_get_cameraSortingLayerRenderTarget,
                      put = __cordl_internal_set_cameraSortingLayerRenderTarget))::UnityEngine::Rendering::Universal::RenderTargetHandle cameraSortingLayerRenderTarget;

  __declspec(property(get = get_cameraSortingLayerTextureBound)) int32_t cameraSortingLayerTextureBound;

  __declspec(property(get = get_fallOffLookup))::UnityW<::UnityEngine::Texture2D> fallOffLookup;

  __declspec(property(get = get_geometryUnshadowMaterial,
                      put = set_geometryUnshadowMaterial))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> geometryUnshadowMaterial;

  __declspec(property(get = get_geometryUnshadowShader))::UnityW<::UnityEngine::Shader> geometryUnshadowShader;

  __declspec(property(get = get_hdrEmulationScale)) float_t hdrEmulationScale;

  __declspec(property(get = get_isNormalsRenderTargetValid, put = set_isNormalsRenderTargetValid)) bool isNormalsRenderTargetValid;

  __declspec(property(get = get_lightBlendStyles))::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> lightBlendStyles;

  __declspec(property(get = get_lightCullResult, put = set_lightCullResult))::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult;

  __declspec(property(get = get_lightMaterials))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* lightMaterials;

  __declspec(property(get = get_lightRenderTextureMemoryBudget)) uint32_t lightRenderTextureMemoryBudget;

  __declspec(property(get = get_lightRenderTextureScale)) float_t lightRenderTextureScale;

  /// @brief Field m_BlitShader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitShader, put = __cordl_internal_set_m_BlitShader))::UnityW<::UnityEngine::Shader> m_BlitShader;

  /// @brief Field m_CameraSortingLayerDownsamplingMethod, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraSortingLayerDownsamplingMethod,
                      put = __cordl_internal_set_m_CameraSortingLayerDownsamplingMethod))::UnityEngine::Rendering::Universal::Downsampling m_CameraSortingLayerDownsamplingMethod;

  /// @brief Field m_CameraSortingLayersTextureBound, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraSortingLayersTextureBound, put = __cordl_internal_set_m_CameraSortingLayersTextureBound)) int32_t m_CameraSortingLayersTextureBound;

  /// @brief Field m_FallOffLookup, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallOffLookup, put = __cordl_internal_set_m_FallOffLookup))::UnityW<::UnityEngine::Texture2D> m_FallOffLookup;

  /// @brief Field m_FallbackErrorShader, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackErrorShader, put = __cordl_internal_set_m_FallbackErrorShader))::UnityW<::UnityEngine::Shader> m_FallbackErrorShader;

  /// @brief Field m_GeometryUnshadowShader, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryUnshadowShader, put = __cordl_internal_set_m_GeometryUnshadowShader))::UnityW<::UnityEngine::Shader> m_GeometryUnshadowShader;

  /// @brief Field m_HDREmulationScale, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HDREmulationScale, put = __cordl_internal_set_m_HDREmulationScale)) float_t m_HDREmulationScale;

  /// @brief Field m_LightBlendStyles, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightBlendStyles,
                      put = __cordl_internal_set_m_LightBlendStyles))::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle,
                                                                              ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> m_LightBlendStyles;

  /// @brief Field m_LightRenderTextureScale, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightRenderTextureScale, put = __cordl_internal_set_m_LightRenderTextureScale)) float_t m_LightRenderTextureScale;

  /// @brief Field m_MaxLightRenderTextureCount, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLightRenderTextureCount, put = __cordl_internal_set_m_MaxLightRenderTextureCount)) uint32_t m_MaxLightRenderTextureCount;

  /// @brief Field m_MaxShadowRenderTextureCount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxShadowRenderTextureCount, put = __cordl_internal_set_m_MaxShadowRenderTextureCount)) uint32_t m_MaxShadowRenderTextureCount;

  /// @brief Field m_PointLightShader, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointLightShader, put = __cordl_internal_set_m_PointLightShader))::UnityW<::UnityEngine::Shader> m_PointLightShader;

  /// @brief Field m_PointLightVolumeShader, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointLightVolumeShader, put = __cordl_internal_set_m_PointLightVolumeShader))::UnityW<::UnityEngine::Shader> m_PointLightVolumeShader;

  /// @brief Field m_PostProcessData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostProcessData, put = __cordl_internal_set_m_PostProcessData))::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_PostProcessData;

  /// @brief Field m_ProjectedShadowShader, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProjectedShadowShader, put = __cordl_internal_set_m_ProjectedShadowShader))::UnityW<::UnityEngine::Shader> m_ProjectedShadowShader;

  /// @brief Field m_SamplingShader, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingShader, put = __cordl_internal_set_m_SamplingShader))::UnityW<::UnityEngine::Shader> m_SamplingShader;

  /// @brief Field m_ShapeLightShader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShapeLightShader, put = __cordl_internal_set_m_ShapeLightShader))::UnityW<::UnityEngine::Shader> m_ShapeLightShader;

  /// @brief Field m_ShapeLightVolumeShader, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShapeLightVolumeShader, put = __cordl_internal_set_m_ShapeLightVolumeShader))::UnityW<::UnityEngine::Shader> m_ShapeLightVolumeShader;

  /// @brief Field m_SpriteShadowShader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteShadowShader, put = __cordl_internal_set_m_SpriteShadowShader))::UnityW<::UnityEngine::Shader> m_SpriteShadowShader;

  /// @brief Field m_SpriteUnshadowShader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteUnshadowShader, put = __cordl_internal_set_m_SpriteUnshadowShader))::UnityW<::UnityEngine::Shader> m_SpriteUnshadowShader;

  /// @brief Field m_TransparencySortAxis, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_m_TransparencySortAxis, put = __cordl_internal_set_m_TransparencySortAxis))::UnityEngine::Vector3 m_TransparencySortAxis;

  /// @brief Field m_TransparencySortMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransparencySortMode, put = __cordl_internal_set_m_TransparencySortMode))::UnityEngine::TransparencySortMode m_TransparencySortMode;

  /// @brief Field m_UseCameraSortingLayersTexture, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseCameraSortingLayersTexture, put = __cordl_internal_set_m_UseCameraSortingLayersTexture)) bool m_UseCameraSortingLayersTexture;

  /// @brief Field m_UseDepthStencilBuffer, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseDepthStencilBuffer, put = __cordl_internal_set_m_UseDepthStencilBuffer)) bool m_UseDepthStencilBuffer;

  /// @brief Field normalsRenderTarget, offset 0x118, size 0x30
  __declspec(property(get = __cordl_internal_get_normalsRenderTarget, put = __cordl_internal_set_normalsRenderTarget))::UnityEngine::Rendering::Universal::RenderTargetHandle normalsRenderTarget;

  __declspec(property(get = get_normalsRenderTargetScale, put = set_normalsRenderTargetScale)) float_t normalsRenderTargetScale;

  __declspec(property(get = get_pointLightShader))::UnityW<::UnityEngine::Shader> pointLightShader;

  __declspec(property(get = get_pointLightVolumeShader))::UnityW<::UnityEngine::Shader> pointLightVolumeShader;

  __declspec(property(get = get_postProcessData, put = set_postProcessData))::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> postProcessData;

  __declspec(property(get = get_projectedShadowMaterial,
                      put = set_projectedShadowMaterial))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> projectedShadowMaterial;

  __declspec(property(get = get_projectedShadowShader))::UnityW<::UnityEngine::Shader> projectedShadowShader;

  __declspec(property(get = get_samplingShader))::UnityW<::UnityEngine::Shader> samplingShader;

  __declspec(property(get = get_shadowRenderTextureMemoryBudget)) uint32_t shadowRenderTextureMemoryBudget;

  /// @brief Field shadowsRenderTarget, offset 0x148, size 0x30
  __declspec(property(get = __cordl_internal_get_shadowsRenderTarget, put = __cordl_internal_set_shadowsRenderTarget))::UnityEngine::Rendering::Universal::RenderTargetHandle shadowsRenderTarget;

  __declspec(property(get = get_shapeLightShader))::UnityW<::UnityEngine::Shader> shapeLightShader;

  __declspec(property(get = get_shapeLightVolumeShader))::UnityW<::UnityEngine::Shader> shapeLightVolumeShader;

  __declspec(property(get = get_spriteSelfShadowMaterial,
                      put = set_spriteSelfShadowMaterial))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> spriteSelfShadowMaterial;

  __declspec(property(get = get_spriteShadowShader))::UnityW<::UnityEngine::Shader> spriteShadowShader;

  __declspec(property(get = get_spriteUnshadowMaterial,
                      put = set_spriteUnshadowMaterial))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> spriteUnshadowMaterial;

  __declspec(property(get = get_spriteUnshadowShader))::UnityW<::UnityEngine::Shader> spriteUnshadowShader;

  __declspec(property(get = get_stencilOnlyShadowMaterial,
                      put = set_stencilOnlyShadowMaterial))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> stencilOnlyShadowMaterial;

  __declspec(property(get = get_transparencySortAxis))::UnityEngine::Vector3 transparencySortAxis;

  __declspec(property(get = get_transparencySortMode))::UnityEngine::TransparencySortMode transparencySortMode;

  __declspec(property(get = get_useCameraSortingLayerTexture)) bool useCameraSortingLayerTexture;

  __declspec(property(get = get_useDepthStencilBuffer)) bool useDepthStencilBuffer;

  /// @brief Method Create, addr 0x2f41d24, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  static inline ::UnityEngine::Rendering::Universal::Renderer2DData* New_ctor();

  /// @brief Method OnEnable, addr 0x2f41d84, size 0x13c, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__geometryUnshadowMaterial_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__geometryUnshadowMaterial_k__BackingField();

  constexpr bool const& __cordl_internal_get__isNormalsRenderTargetValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isNormalsRenderTargetValid_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::ILight2DCullResult*& __cordl_internal_get__lightCullResult_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ILight2DCullResult*> const& __cordl_internal_get__lightCullResult_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>*& __cordl_internal_get__lightMaterials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>*> const&
  __cordl_internal_get__lightMaterials_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get__normalsRenderTargetScale_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__normalsRenderTargetScale_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__projectedShadowMaterial_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__projectedShadowMaterial_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__spriteSelfShadowMaterial_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__spriteSelfShadowMaterial_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__spriteUnshadowMaterial_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__spriteUnshadowMaterial_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__stencilOnlyShadowMaterial_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__stencilOnlyShadowMaterial_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_cameraSortingLayerRenderTarget() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_cameraSortingLayerRenderTarget();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_BlitShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_BlitShader();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_CameraSortingLayerDownsamplingMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_CameraSortingLayerDownsamplingMethod();

  constexpr int32_t const& __cordl_internal_get_m_CameraSortingLayersTextureBound() const;

  constexpr int32_t& __cordl_internal_get_m_CameraSortingLayersTextureBound();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_FallOffLookup() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_FallOffLookup();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_FallbackErrorShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_FallbackErrorShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_GeometryUnshadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_GeometryUnshadowShader();

  constexpr float_t const& __cordl_internal_get_m_HDREmulationScale() const;

  constexpr float_t& __cordl_internal_get_m_HDREmulationScale();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> const& __cordl_internal_get_m_LightBlendStyles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*>& __cordl_internal_get_m_LightBlendStyles();

  constexpr float_t const& __cordl_internal_get_m_LightRenderTextureScale() const;

  constexpr float_t& __cordl_internal_get_m_LightRenderTextureScale();

  constexpr uint32_t const& __cordl_internal_get_m_MaxLightRenderTextureCount() const;

  constexpr uint32_t& __cordl_internal_get_m_MaxLightRenderTextureCount();

  constexpr uint32_t const& __cordl_internal_get_m_MaxShadowRenderTextureCount() const;

  constexpr uint32_t& __cordl_internal_get_m_MaxShadowRenderTextureCount();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_PointLightShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_PointLightShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_PointLightVolumeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_PointLightVolumeShader();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_PostProcessData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_PostProcessData();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_ProjectedShadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_ProjectedShadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SamplingShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SamplingShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_ShapeLightShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_ShapeLightShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_ShapeLightVolumeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_ShapeLightVolumeShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SpriteShadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SpriteShadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SpriteUnshadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SpriteUnshadowShader();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TransparencySortAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TransparencySortAxis();

  constexpr ::UnityEngine::TransparencySortMode const& __cordl_internal_get_m_TransparencySortMode() const;

  constexpr ::UnityEngine::TransparencySortMode& __cordl_internal_get_m_TransparencySortMode();

  constexpr bool const& __cordl_internal_get_m_UseCameraSortingLayersTexture() const;

  constexpr bool& __cordl_internal_get_m_UseCameraSortingLayersTexture();

  constexpr bool const& __cordl_internal_get_m_UseDepthStencilBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseDepthStencilBuffer();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_normalsRenderTarget() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_normalsRenderTarget();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_shadowsRenderTarget() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_shadowsRenderTarget();

  constexpr void __cordl_internal_set__geometryUnshadowMaterial_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__isNormalsRenderTargetValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lightCullResult_k__BackingField(::UnityEngine::Rendering::Universal::ILight2DCullResult* value);

  constexpr void __cordl_internal_set__lightMaterials_k__BackingField(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set__normalsRenderTargetScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__projectedShadowMaterial_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__spriteSelfShadowMaterial_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__spriteUnshadowMaterial_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__stencilOnlyShadowMaterial_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_cameraSortingLayerRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_BlitShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_CameraSortingLayerDownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_CameraSortingLayersTextureBound(int32_t value);

  constexpr void __cordl_internal_set_m_FallOffLookup(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_FallbackErrorShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_GeometryUnshadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_HDREmulationScale(float_t value);

  constexpr void __cordl_internal_set_m_LightBlendStyles(::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> value);

  constexpr void __cordl_internal_set_m_LightRenderTextureScale(float_t value);

  constexpr void __cordl_internal_set_m_MaxLightRenderTextureCount(uint32_t value);

  constexpr void __cordl_internal_set_m_MaxShadowRenderTextureCount(uint32_t value);

  constexpr void __cordl_internal_set_m_PointLightShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_PointLightVolumeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_m_ProjectedShadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SamplingShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_ShapeLightShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_ShapeLightVolumeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SpriteShadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SpriteUnshadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TransparencySortAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_TransparencySortMode(::UnityEngine::TransparencySortMode value);

  constexpr void __cordl_internal_set_m_UseCameraSortingLayersTexture(bool value);

  constexpr void __cordl_internal_set_m_UseDepthStencilBuffer(bool value);

  constexpr void __cordl_internal_set_normalsRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_shadowsRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method .ctor, addr 0x2f41f4c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_blitShader, addr 0x2f41ca8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_blitShader();

  /// @brief Method get_cameraSortingLayerDownsamplingMethod, addr 0x2f41d1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Downsampling get_cameraSortingLayerDownsamplingMethod();

  /// @brief Method get_cameraSortingLayerTextureBound, addr 0x2f41d14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cameraSortingLayerTextureBound();

  /// @brief Method get_fallOffLookup, addr 0x2f41c80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_fallOffLookup();

  /// @brief Method get_geometryUnshadowMaterial, addr 0x2f41ee8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_geometryUnshadowMaterial();

  /// @brief Method get_geometryUnshadowShader, addr 0x2f41cd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_geometryUnshadowShader();

  /// @brief Method get_hdrEmulationScale, addr 0x2f41c60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hdrEmulationScale();

  /// @brief Method get_isNormalsRenderTargetValid, addr 0x2f41f18, size 0x8, virtual false, abstract: false, final false
  inline bool get_isNormalsRenderTargetValid();

  /// @brief Method get_lightBlendStyles, addr 0x2f41c70, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> get_lightBlendStyles();

  /// @brief Method get_lightCullResult, addr 0x2f41f3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ILight2DCullResult* get_lightCullResult();

  /// @brief Method get_lightMaterials, addr 0x2f41ec0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* get_lightMaterials();

  /// @brief Method get_lightRenderTextureMemoryBudget, addr 0x2f41cfc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_lightRenderTextureMemoryBudget();

  /// @brief Method get_lightRenderTextureScale, addr 0x2f41c68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lightRenderTextureScale();

  /// @brief Method get_normalsRenderTargetScale, addr 0x2f41f2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalsRenderTargetScale();

  /// @brief Method get_pointLightShader, addr 0x2f41c98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_pointLightShader();

  /// @brief Method get_pointLightVolumeShader, addr 0x2f41ca0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_pointLightVolumeShader();

  /// @brief Method get_postProcessData, addr 0x2f41cb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> get_postProcessData();

  /// @brief Method get_projectedShadowMaterial, addr 0x2f41ef8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_projectedShadowMaterial();

  /// @brief Method get_projectedShadowShader, addr 0x2f41ce0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_projectedShadowShader();

  /// @brief Method get_samplingShader, addr 0x2f41cb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_samplingShader();

  /// @brief Method get_shadowRenderTextureMemoryBudget, addr 0x2f41d04, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_shadowRenderTextureMemoryBudget();

  /// @brief Method get_shapeLightShader, addr 0x2f41c88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shapeLightShader();

  /// @brief Method get_shapeLightVolumeShader, addr 0x2f41c90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shapeLightVolumeShader();

  /// @brief Method get_spriteSelfShadowMaterial, addr 0x2f41ec8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_spriteSelfShadowMaterial();

  /// @brief Method get_spriteShadowShader, addr 0x2f41cc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_spriteShadowShader();

  /// @brief Method get_spriteUnshadowMaterial, addr 0x2f41ed8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_spriteUnshadowMaterial();

  /// @brief Method get_spriteUnshadowShader, addr 0x2f41cd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_spriteUnshadowShader();

  /// @brief Method get_stencilOnlyShadowMaterial, addr 0x2f41f08, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_stencilOnlyShadowMaterial();

  /// @brief Method get_transparencySortAxis, addr 0x2f41cf0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_transparencySortAxis();

  /// @brief Method get_transparencySortMode, addr 0x2f41ce8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TransparencySortMode get_transparencySortMode();

  /// @brief Method get_useCameraSortingLayerTexture, addr 0x2f41d0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCameraSortingLayerTexture();

  /// @brief Method get_useDepthStencilBuffer, addr 0x2f41c78, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDepthStencilBuffer();

  /// @brief Method set_geometryUnshadowMaterial, addr 0x2f41ef0, size 0x8, virtual false, abstract: false, final false
  inline void set_geometryUnshadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_isNormalsRenderTargetValid, addr 0x2f41f20, size 0xc, virtual false, abstract: false, final false
  inline void set_isNormalsRenderTargetValid(bool value);

  /// @brief Method set_lightCullResult, addr 0x2f41f44, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCullResult(::UnityEngine::Rendering::Universal::ILight2DCullResult* value);

  /// @brief Method set_normalsRenderTargetScale, addr 0x2f41f34, size 0x8, virtual false, abstract: false, final false
  inline void set_normalsRenderTargetScale(float_t value);

  /// @brief Method set_postProcessData, addr 0x2f41cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_postProcessData(::UnityEngine::Rendering::Universal::PostProcessData* value);

  /// @brief Method set_projectedShadowMaterial, addr 0x2f41f00, size 0x8, virtual false, abstract: false, final false
  inline void set_projectedShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_spriteSelfShadowMaterial, addr 0x2f41ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteSelfShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_spriteUnshadowMaterial, addr 0x2f41ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteUnshadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_stencilOnlyShadowMaterial, addr 0x2f41f10, size 0x8, virtual false, abstract: false, final false
  inline void set_stencilOnlyShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Renderer2DData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Renderer2DData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Renderer2DData(Renderer2DData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Renderer2DData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Renderer2DData(Renderer2DData const&) = delete;

  /// @brief Field m_TransparencySortMode, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::TransparencySortMode ___m_TransparencySortMode;

  /// @brief Field m_TransparencySortAxis, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TransparencySortAxis;

  /// @brief Field m_HDREmulationScale, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_HDREmulationScale;

  /// @brief Field m_LightRenderTextureScale, offset: 0x50, size: 0x4, def value: None
  float_t ___m_LightRenderTextureScale;

  /// @brief Field m_LightBlendStyles, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> ___m_LightBlendStyles;

  /// @brief Field m_UseDepthStencilBuffer, offset: 0x60, size: 0x1, def value: None
  bool ___m_UseDepthStencilBuffer;

  /// @brief Field m_UseCameraSortingLayersTexture, offset: 0x61, size: 0x1, def value: None
  bool ___m_UseCameraSortingLayersTexture;

  /// @brief Field m_CameraSortingLayersTextureBound, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_CameraSortingLayersTextureBound;

  /// @brief Field m_CameraSortingLayerDownsamplingMethod, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_CameraSortingLayerDownsamplingMethod;

  /// @brief Field m_MaxLightRenderTextureCount, offset: 0x6c, size: 0x4, def value: None
  uint32_t ___m_MaxLightRenderTextureCount;

  /// @brief Field m_MaxShadowRenderTextureCount, offset: 0x70, size: 0x4, def value: None
  uint32_t ___m_MaxShadowRenderTextureCount;

  /// @brief Field m_ShapeLightShader, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_ShapeLightShader;

  /// @brief Field m_ShapeLightVolumeShader, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_ShapeLightVolumeShader;

  /// @brief Field m_PointLightShader, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_PointLightShader;

  /// @brief Field m_PointLightVolumeShader, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_PointLightVolumeShader;

  /// @brief Field m_BlitShader, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_BlitShader;

  /// @brief Field m_SamplingShader, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SamplingShader;

  /// @brief Field m_ProjectedShadowShader, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_ProjectedShadowShader;

  /// @brief Field m_SpriteShadowShader, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SpriteShadowShader;

  /// @brief Field m_SpriteUnshadowShader, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SpriteUnshadowShader;

  /// @brief Field m_GeometryUnshadowShader, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_GeometryUnshadowShader;

  /// @brief Field m_FallbackErrorShader, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_FallbackErrorShader;

  /// @brief Field m_PostProcessData, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_PostProcessData;

  /// @brief Field m_FallOffLookup, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_FallOffLookup;

  /// @brief Field <lightMaterials>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* ____lightMaterials_k__BackingField;

  /// @brief Field <spriteSelfShadowMaterial>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____spriteSelfShadowMaterial_k__BackingField;

  /// @brief Field <spriteUnshadowMaterial>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____spriteUnshadowMaterial_k__BackingField;

  /// @brief Field <geometryUnshadowMaterial>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____geometryUnshadowMaterial_k__BackingField;

  /// @brief Field <projectedShadowMaterial>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____projectedShadowMaterial_k__BackingField;

  /// @brief Field <stencilOnlyShadowMaterial>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____stencilOnlyShadowMaterial_k__BackingField;

  /// @brief Field <isNormalsRenderTargetValid>k__BackingField, offset: 0x110, size: 0x1, def value: None
  bool ____isNormalsRenderTargetValid_k__BackingField;

  /// @brief Field <normalsRenderTargetScale>k__BackingField, offset: 0x114, size: 0x4, def value: None
  float_t ____normalsRenderTargetScale_k__BackingField;

  /// @brief Field normalsRenderTarget, offset: 0x118, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___normalsRenderTarget;

  /// @brief Field shadowsRenderTarget, offset: 0x148, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___shadowsRenderTarget;

  /// @brief Field cameraSortingLayerRenderTarget, offset: 0x178, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___cameraSortingLayerRenderTarget;

  /// @brief Field <lightCullResult>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ILight2DCullResult* ____lightCullResult_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Renderer2DData, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_TransparencySortMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_TransparencySortAxis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_HDREmulationScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_LightRenderTextureScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_LightBlendStyles) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_UseDepthStencilBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_UseCameraSortingLayersTexture) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_CameraSortingLayersTextureBound) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_CameraSortingLayerDownsamplingMethod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_MaxLightRenderTextureCount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_MaxShadowRenderTextureCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_ShapeLightShader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_ShapeLightVolumeShader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_PointLightShader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_PointLightVolumeShader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_BlitShader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_SamplingShader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_ProjectedShadowShader) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_SpriteShadowShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_SpriteUnshadowShader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_GeometryUnshadowShader) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_FallbackErrorShader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_PostProcessData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___m_FallOffLookup) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____lightMaterials_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____spriteSelfShadowMaterial_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____spriteUnshadowMaterial_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____geometryUnshadowMaterial_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____projectedShadowMaterial_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____stencilOnlyShadowMaterial_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____isNormalsRenderTargetValid_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____normalsRenderTargetScale_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___normalsRenderTarget) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___shadowsRenderTarget) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ___cameraSortingLayerRenderTarget) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DData, ____lightCullResult_k__BackingField) == 0x1a8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType, "UnityEngine.Rendering.Universal", "Renderer2DData/Renderer2DDefaultMaterialType");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Renderer2DData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Renderer2DData*, "UnityEngine.Rendering.Universal", "Renderer2DData");
