#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowRendering)
namespace UnityEngine::Rendering::Universal {
class IRenderPass2D;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ShadowCaster2D;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowRendering;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowRendering);
// Type: UnityEngine.Rendering.Universal::ShadowRendering
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowRendering*
class CORDL_TYPE ShadowRendering : public ::System::Object {
public:
  // Declarations
  /// @brief Field <maxTextureCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__maxTextureCount_k__BackingField, put = setStaticF__maxTextureCount_k__BackingField)) uint32_t _maxTextureCount_k__BackingField;

  /// @brief Field k_ColorLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ColorLookup, put = setStaticF_k_ColorLookup))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> k_ColorLookup;

  /// @brief Field k_LightPosID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightPosID, put = setStaticF_k_LightPosID)) int32_t k_LightPosID;

  /// @brief Field k_SelfShadowingID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_SelfShadowingID, put = setStaticF_k_SelfShadowingID)) int32_t k_SelfShadowingID;

  /// @brief Field k_ShadowColorMaskID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowColorMaskID, put = setStaticF_k_ShadowColorMaskID)) int32_t k_ShadowColorMaskID;

  /// @brief Field k_ShadowIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowIntensityID, put = setStaticF_k_ShadowIntensityID)) int32_t k_ShadowIntensityID;

  /// @brief Field k_ShadowModelInvMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowModelInvMatrixID, put = setStaticF_k_ShadowModelInvMatrixID)) int32_t k_ShadowModelInvMatrixID;

  /// @brief Field k_ShadowModelMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowModelMatrixID, put = setStaticF_k_ShadowModelMatrixID)) int32_t k_ShadowModelMatrixID;

  /// @brief Field k_ShadowModelScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowModelScaleID, put = setStaticF_k_ShadowModelScaleID)) int32_t k_ShadowModelScaleID;

  /// @brief Field k_ShadowRadiusID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowRadiusID, put = setStaticF_k_ShadowRadiusID)) int32_t k_ShadowRadiusID;

  /// @brief Field k_ShadowStencilGroupID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowStencilGroupID, put = setStaticF_k_ShadowStencilGroupID)) int32_t k_ShadowStencilGroupID;

  /// @brief Field k_ShadowVolumeIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShadowVolumeIntensityID, put = setStaticF_k_ShadowVolumeIntensityID)) int32_t k_ShadowVolumeIntensityID;

  /// @brief Field m_LightInputTextures, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_m_LightInputTextures,
               put = setStaticF_m_LightInputTextures))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_LightInputTextures;

  /// @brief Field m_ProfilingSamplerShadowColorsLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadowColorsLookup,
                             put = setStaticF_m_ProfilingSamplerShadowColorsLookup))::ArrayW<::UnityEngine::Rendering::ProfilingSampler*,
                                                                                             ::Array<::UnityEngine::Rendering::ProfilingSampler*>*> m_ProfilingSamplerShadowColorsLookup;

  /// @brief Field m_ProfilingSamplerShadows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadows, put = setStaticF_m_ProfilingSamplerShadows))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadows;

  /// @brief Field m_ProfilingSamplerShadowsA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadowsA, put = setStaticF_m_ProfilingSamplerShadowsA))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsA;

  /// @brief Field m_ProfilingSamplerShadowsB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadowsB, put = setStaticF_m_ProfilingSamplerShadowsB))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsB;

  /// @brief Field m_ProfilingSamplerShadowsG, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadowsG, put = setStaticF_m_ProfilingSamplerShadowsG))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsG;

  /// @brief Field m_ProfilingSamplerShadowsR, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerShadowsR, put = setStaticF_m_ProfilingSamplerShadowsR))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerShadowsR;

  /// @brief Field m_RenderTargets, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_m_RenderTargets,
               put = setStaticF_m_RenderTargets))::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> m_RenderTargets;

  /// @brief Method CreateMaterials, addr 0x2c56410, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> CreateMaterials(::UnityEngine::Shader* shader, int32_t pass);

  /// @brief Method CreateShadowRenderTexture, addr 0x2c56a84, size 0xd8, virtual false, abstract: false, final false
  static inline void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                               ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t shadowIndex);

  /// @brief Method CreateShadowRenderTexture, addr 0x2c56b5c, size 0x1cc, virtual false, abstract: false, final false
  static inline void CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderTargetHandle rtHandle,
                                               ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer);

  /// @brief Method DisableGlobalShadowTexture, addr 0x2c57e10, size 0x98, virtual false, abstract: false, final false
  static inline void DisableGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer);

  /// @brief Method GetGeometryUnshadowMaterial, addr 0x2c56980, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetGeometryUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int32_t colorIndex);

  /// @brief Method GetProjectedShadowMaterial, addr 0x2c56570, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetProjectedShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int32_t colorIndex);

  /// @brief Method GetSpriteSelfShadowMaterial, addr 0x2c56778, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetSpriteSelfShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int32_t colorIndex);

  /// @brief Method GetSpriteUnshadowMaterial, addr 0x2c5687c, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetSpriteUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int32_t colorIndex);

  /// @brief Method GetStencilOnlyShadowMaterial, addr 0x2c56674, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetStencilOnlyShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, int32_t colorIndex);

  /// @brief Method InitializeBudget, addr 0x2c561a4, size 0x26c, virtual false, abstract: false, final false
  static inline void InitializeBudget(uint32_t maxTextureCount);

  /// @brief Method PrerenderShadows, addr 0x2c56d28, size 0x2b4, virtual false, abstract: false, final false
  static inline bool PrerenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                      ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, int32_t shadowIndex,
                                      float_t shadowIntensity);

  /// @brief Method ReleaseShadowRenderTexture, addr 0x2c57ea8, size 0xb4, virtual false, abstract: false, final false
  static inline void ReleaseShadowRenderTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t shadowIndex);

  /// @brief Method RenderShadows, addr 0x2c56fdc, size 0xcb0, virtual false, abstract: false, final false
  static inline bool RenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                   ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, float_t shadowIntensity,
                                   ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, int32_t colorBit);

  /// @brief Method SetGlobalShadowTexture, addr 0x2c57c8c, size 0x184, virtual false, abstract: false, final false
  static inline void SetGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::Universal::Light2D* light, int32_t shadowIndex);

  /// @brief Method SetShadowProjectionGlobals, addr 0x2c57f5c, size 0xfc, virtual false, abstract: false, final false
  static inline void SetShadowProjectionGlobals(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster);

  static inline uint32_t getStaticF__maxTextureCount_k__BackingField();

  static inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> getStaticF_k_ColorLookup();

  static inline int32_t getStaticF_k_LightPosID();

  static inline int32_t getStaticF_k_SelfShadowingID();

  static inline int32_t getStaticF_k_ShadowColorMaskID();

  static inline int32_t getStaticF_k_ShadowIntensityID();

  static inline int32_t getStaticF_k_ShadowModelInvMatrixID();

  static inline int32_t getStaticF_k_ShadowModelMatrixID();

  static inline int32_t getStaticF_k_ShadowModelScaleID();

  static inline int32_t getStaticF_k_ShadowRadiusID();

  static inline int32_t getStaticF_k_ShadowStencilGroupID();

  static inline int32_t getStaticF_k_ShadowVolumeIntensityID();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> getStaticF_m_LightInputTextures();

  static inline ::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*> getStaticF_m_ProfilingSamplerShadowColorsLookup();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerShadows();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerShadowsA();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerShadowsB();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerShadowsG();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerShadowsR();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> getStaticF_m_RenderTargets();

  /// @brief Method get_maxTextureCount, addr 0x2c560f0, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t get_maxTextureCount();

  static inline void setStaticF__maxTextureCount_k__BackingField(uint32_t value);

  static inline void setStaticF_k_ColorLookup(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  static inline void setStaticF_k_LightPosID(int32_t value);

  static inline void setStaticF_k_SelfShadowingID(int32_t value);

  static inline void setStaticF_k_ShadowColorMaskID(int32_t value);

  static inline void setStaticF_k_ShadowIntensityID(int32_t value);

  static inline void setStaticF_k_ShadowModelInvMatrixID(int32_t value);

  static inline void setStaticF_k_ShadowModelMatrixID(int32_t value);

  static inline void setStaticF_k_ShadowModelScaleID(int32_t value);

  static inline void setStaticF_k_ShadowRadiusID(int32_t value);

  static inline void setStaticF_k_ShadowStencilGroupID(int32_t value);

  static inline void setStaticF_k_ShadowVolumeIntensityID(int32_t value);

  static inline void setStaticF_m_LightInputTextures(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  static inline void setStaticF_m_ProfilingSamplerShadowColorsLookup(::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*> value);

  static inline void setStaticF_m_ProfilingSamplerShadows(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerShadowsA(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerShadowsB(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerShadowsG(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerShadowsR(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_RenderTargets(::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value);

  /// @brief Method set_maxTextureCount, addr 0x2c56148, size 0x5c, virtual false, abstract: false, final false
  static inline void set_maxTextureCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowRendering(ShadowRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowRendering(ShadowRendering const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowRendering, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowRendering*, "UnityEngine.Rendering.Universal", "ShadowRendering");
