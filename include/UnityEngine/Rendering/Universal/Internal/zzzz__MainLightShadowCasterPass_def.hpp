#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainLightShadowCasterPass)
namespace UnityEngine::Rendering::Universal::Internal {
class __MainLightShadowCasterPass__MainLightShadowConstantBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowSliceData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __MainLightShadowCasterPass__MainLightShadowConstantBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer);
// Type: ::MainLightShadowConstantBuffer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::MainLightShadowCasterPass::MainLightShadowConstantBuffer*
class CORDL_TYPE __MainLightShadowCasterPass__MainLightShadowConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _CascadeShadowSplitSphereRadii, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CascadeShadowSplitSphereRadii, put = setStaticF__CascadeShadowSplitSphereRadii)) int32_t _CascadeShadowSplitSphereRadii;

  /// @brief Field _CascadeShadowSplitSpheres0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CascadeShadowSplitSpheres0, put = setStaticF__CascadeShadowSplitSpheres0)) int32_t _CascadeShadowSplitSpheres0;

  /// @brief Field _CascadeShadowSplitSpheres1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CascadeShadowSplitSpheres1, put = setStaticF__CascadeShadowSplitSpheres1)) int32_t _CascadeShadowSplitSpheres1;

  /// @brief Field _CascadeShadowSplitSpheres2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CascadeShadowSplitSpheres2, put = setStaticF__CascadeShadowSplitSpheres2)) int32_t _CascadeShadowSplitSpheres2;

  /// @brief Field _CascadeShadowSplitSpheres3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CascadeShadowSplitSpheres3, put = setStaticF__CascadeShadowSplitSpheres3)) int32_t _CascadeShadowSplitSpheres3;

  /// @brief Field _ShadowOffset0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowOffset0, put = setStaticF__ShadowOffset0)) int32_t _ShadowOffset0;

  /// @brief Field _ShadowOffset1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowOffset1, put = setStaticF__ShadowOffset1)) int32_t _ShadowOffset1;

  /// @brief Field _ShadowOffset2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowOffset2, put = setStaticF__ShadowOffset2)) int32_t _ShadowOffset2;

  /// @brief Field _ShadowOffset3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowOffset3, put = setStaticF__ShadowOffset3)) int32_t _ShadowOffset3;

  /// @brief Field _ShadowParams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowParams, put = setStaticF__ShadowParams)) int32_t _ShadowParams;

  /// @brief Field _ShadowmapSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowmapSize, put = setStaticF__ShadowmapSize)) int32_t _ShadowmapSize;

  /// @brief Field _WorldToShadow, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__WorldToShadow, put = setStaticF__WorldToShadow)) int32_t _WorldToShadow;

  static inline int32_t getStaticF__CascadeShadowSplitSphereRadii();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres0();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres1();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres2();

  static inline int32_t getStaticF__CascadeShadowSplitSpheres3();

  static inline int32_t getStaticF__ShadowOffset0();

  static inline int32_t getStaticF__ShadowOffset1();

  static inline int32_t getStaticF__ShadowOffset2();

  static inline int32_t getStaticF__ShadowOffset3();

  static inline int32_t getStaticF__ShadowParams();

  static inline int32_t getStaticF__ShadowmapSize();

  static inline int32_t getStaticF__WorldToShadow();

  static inline void setStaticF__CascadeShadowSplitSphereRadii(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres0(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres1(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres2(int32_t value);

  static inline void setStaticF__CascadeShadowSplitSpheres3(int32_t value);

  static inline void setStaticF__ShadowOffset0(int32_t value);

  static inline void setStaticF__ShadowOffset1(int32_t value);

  static inline void setStaticF__ShadowOffset2(int32_t value);

  static inline void setStaticF__ShadowOffset3(int32_t value);

  static inline void setStaticF__ShadowParams(int32_t value);

  static inline void setStaticF__ShadowmapSize(int32_t value);

  static inline void setStaticF__WorldToShadow(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainLightShadowCasterPass__MainLightShadowConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MainLightShadowCasterPass__MainLightShadowConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainLightShadowCasterPass__MainLightShadowConstantBuffer(__MainLightShadowCasterPass__MainLightShadowConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainLightShadowCasterPass__MainLightShadowConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainLightShadowCasterPass__MainLightShadowConstantBuffer(__MainLightShadowCasterPass__MainLightShadowConstantBuffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::MainLightShadowCasterPass
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::MainLightShadowCasterPass*
class CORDL_TYPE MainLightShadowCasterPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using MainLightShadowConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer;

  /// @brief Field m_CascadeBorder, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_CascadeSlices, offset 0x128, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CascadeSlices,
      put = __cordl_internal_set_m_CascadeSlices))::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> m_CascadeSlices;

  /// @brief Field m_CascadeSplitDistances, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CascadeSplitDistances,
                      put = __cordl_internal_set_m_CascadeSplitDistances))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CascadeSplitDistances;

  /// @brief Field m_CreateEmptyShadowmap, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateEmptyShadowmap, put = __cordl_internal_set_m_CreateEmptyShadowmap)) bool m_CreateEmptyShadowmap;

  /// @brief Field m_MainLightShadowMatrices, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowMatrices,
                      put = __cordl_internal_set_m_MainLightShadowMatrices))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_MainLightShadowMatrices;

  /// @brief Field m_MainLightShadowmap, offset 0xe8, size 0x30
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowmap, put = __cordl_internal_set_m_MainLightShadowmap))::UnityEngine::Rendering::Universal::RenderTargetHandle m_MainLightShadowmap;

  /// @brief Field m_MainLightShadowmapTexture, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowmapTexture,
                      put = __cordl_internal_set_m_MainLightShadowmapTexture))::UnityW<::UnityEngine::RenderTexture> m_MainLightShadowmapTexture;

  /// @brief Field m_MaxShadowDistanceSq, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxShadowDistanceSq, put = __cordl_internal_set_m_MaxShadowDistanceSq)) float_t m_MaxShadowDistanceSq;

  /// @brief Field m_ProfilingSetupSampler, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSetupSampler, put = __cordl_internal_set_m_ProfilingSetupSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler;

  /// @brief Field m_ShadowCasterCascadesCount, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCasterCascadesCount, put = __cordl_internal_set_m_ShadowCasterCascadesCount)) int32_t m_ShadowCasterCascadesCount;

  /// @brief Method Clear, addr 0x29b94e4, size 0x14c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Configure, addr 0x29b9630, size 0x98, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x29b96c8, size 0x34, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method OnCameraCleanup, addr 0x29b9e54, size 0xc8, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RenderMainLightCascadeShadowmap, addr 0x29b9918, size 0x53c, virtual false, abstract: false, final false
  inline void RenderMainLightCascadeShadowmap(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context, ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                              ByRef<::UnityEngine::Rendering::Universal::LightData> lightData, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData);

  /// @brief Method SetEmptyMainLightCascadeShadowmap, addr 0x29b96fc, size 0x21c, virtual false, abstract: false, final false
  inline void SetEmptyMainLightCascadeShadowmap(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context);

  /// @brief Method Setup, addr 0x29b9040, size 0x40c, virtual false, abstract: false, final false
  inline bool Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupForEmptyRendering, addr 0x29b944c, size 0x98, virtual false, abstract: false, final false
  inline bool SetupForEmptyRendering(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupMainLightShadowReceiverConstants, addr 0x29b9f1c, size 0x534, virtual false, abstract: false, final false
  inline void SetupMainLightShadowReceiverConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::VisibleLight shadowLight, bool supportsSoftShadows);

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const& __cordl_internal_get_m_CascadeSlices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>& __cordl_internal_get_m_CascadeSlices();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CascadeSplitDistances() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CascadeSplitDistances();

  constexpr bool const& __cordl_internal_get_m_CreateEmptyShadowmap() const;

  constexpr bool& __cordl_internal_get_m_CreateEmptyShadowmap();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_MainLightShadowMatrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_MainLightShadowMatrices();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_MainLightShadowmap() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_MainLightShadowmap();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_MainLightShadowmapTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_MainLightShadowmapTexture();

  constexpr float_t const& __cordl_internal_get_m_MaxShadowDistanceSq() const;

  constexpr float_t& __cordl_internal_get_m_MaxShadowDistanceSq();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSetupSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSetupSampler() const;

  constexpr int32_t const& __cordl_internal_get_m_ShadowCasterCascadesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ShadowCasterCascadesCount();

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_CascadeSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value);

  constexpr void __cordl_internal_set_m_CascadeSplitDistances(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CreateEmptyShadowmap(bool value);

  constexpr void __cordl_internal_set_m_MainLightShadowMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_MainLightShadowmap(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_MainLightShadowmapTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_MaxShadowDistanceSq(float_t value);

  constexpr void __cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ShadowCasterCascadesCount(int32_t value);

  /// @brief Method .ctor, addr 0x29b8cb0, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainLightShadowCasterPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainLightShadowCasterPass(MainLightShadowCasterPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainLightShadowCasterPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainLightShadowCasterPass(MainLightShadowCasterPass const&) = delete;

  /// @brief Field m_CascadeBorder, offset: 0xd8, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_MaxShadowDistanceSq, offset: 0xdc, size: 0x4, def value: None
  float_t ___m_MaxShadowDistanceSq;

  /// @brief Field m_ShadowCasterCascadesCount, offset: 0xe0, size: 0x4, def value: None
  int32_t ___m_ShadowCasterCascadesCount;

  /// @brief Field m_MainLightShadowmap, offset: 0xe8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_MainLightShadowmap;

  /// @brief Field m_MainLightShadowmapTexture, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_MainLightShadowmapTexture;

  /// @brief Field m_MainLightShadowMatrices, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_MainLightShadowMatrices;

  /// @brief Field m_CascadeSlices, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> ___m_CascadeSlices;

  /// @brief Field m_CascadeSplitDistances, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CascadeSplitDistances;

  /// @brief Field m_CreateEmptyShadowmap, offset: 0x138, size: 0x1, def value: None
  bool ___m_CreateEmptyShadowmap;

  /// @brief Field m_ProfilingSetupSampler, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSetupSampler;

  /// @brief Field k_MaxCascades offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxCascades{ static_cast<int32_t>(0x4) };

  /// @brief Field k_ShadowmapBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowmapBufferBits{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, 0x148>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeBorder) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MaxShadowDistanceSq) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_ShadowCasterCascadesCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowmap) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowmapTexture) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_MainLightShadowMatrices) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeSlices) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CascadeSplitDistances) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_CreateEmptyShadowmap) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass, ___m_ProfilingSetupSampler) == 0x140, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*, "UnityEngine.Rendering.Universal.Internal", "MainLightShadowCasterPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*, "UnityEngine.Rendering.Universal.Internal",
                       "MainLightShadowCasterPass/MainLightShadowConstantBuffer");
