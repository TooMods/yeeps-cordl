#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessPass)
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass__MaterialLibrary;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass__ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass____c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __PostProcessPass____c__DisplayClass57_0;
}
namespace UnityEngine::Rendering::Universal {
class Bloom;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class ChromaticAberration;
}
namespace UnityEngine::Rendering::Universal {
class ColorAdjustments;
}
namespace UnityEngine::Rendering::Universal {
class ColorLookup;
}
namespace UnityEngine::Rendering::Universal {
class DepthOfField;
}
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class LensDistortion;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlur;
}
namespace UnityEngine::Rendering::Universal {
class PaniniProjection;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class Vignette;
}
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
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
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class PostProcessPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass__MaterialLibrary;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass__ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __PostProcessPass____c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __PostProcessPass____c__DisplayClass57_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::PostProcessPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0);
// Type: ::MaterialLibrary
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::PostProcessPass::MaterialLibrary*
class CORDL_TYPE __PostProcessPass__MaterialLibrary : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloom, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bloom, put = __cordl_internal_set_bloom))::UnityW<::UnityEngine::Material> bloom;

  /// @brief Field bokehDepthOfField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfField, put = __cordl_internal_set_bokehDepthOfField))::UnityW<::UnityEngine::Material> bokehDepthOfField;

  /// @brief Field cameraMotionBlur, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionBlur, put = __cordl_internal_set_cameraMotionBlur))::UnityW<::UnityEngine::Material> cameraMotionBlur;

  /// @brief Field easu, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_easu, put = __cordl_internal_set_easu))::UnityW<::UnityEngine::Material> easu;

  /// @brief Field finalPass, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_finalPass, put = __cordl_internal_set_finalPass))::UnityW<::UnityEngine::Material> finalPass;

  /// @brief Field gaussianDepthOfField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfField, put = __cordl_internal_set_gaussianDepthOfField))::UnityW<::UnityEngine::Material> gaussianDepthOfField;

  /// @brief Field lensFlareDataDriven, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareDataDriven, put = __cordl_internal_set_lensFlareDataDriven))::UnityW<::UnityEngine::Material> lensFlareDataDriven;

  /// @brief Field paniniProjection, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_paniniProjection, put = __cordl_internal_set_paniniProjection))::UnityW<::UnityEngine::Material> paniniProjection;

  /// @brief Field scalingSetup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_scalingSetup, put = __cordl_internal_set_scalingSetup))::UnityW<::UnityEngine::Material> scalingSetup;

  /// @brief Field stopNaN, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNaN, put = __cordl_internal_set_stopNaN))::UnityW<::UnityEngine::Material> stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subpixelMorphologicalAntialiasing,
                      put = __cordl_internal_set_subpixelMorphologicalAntialiasing))::UnityW<::UnityEngine::Material> subpixelMorphologicalAntialiasing;

  /// @brief Field uber, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_uber, put = __cordl_internal_set_uber))::UnityW<::UnityEngine::Material> uber;

  /// @brief Method Cleanup, addr 0x16136c0, size 0xd4, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Load, addr 0x16134ec, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> Load(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary* New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bloom() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bloom();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bokehDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bokehDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_cameraMotionBlur() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_cameraMotionBlur();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_easu() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_easu();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_finalPass() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_finalPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gaussianDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gaussianDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lensFlareDataDriven() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lensFlareDataDriven();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_paniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_paniniProjection();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scalingSetup() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scalingSetup();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stopNaN() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stopNaN();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_subpixelMorphologicalAntialiasing() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_subpixelMorphologicalAntialiasing();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_uber() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_uber();

  constexpr void __cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_cameraMotionBlur(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x16133a0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessPass__MaterialLibrary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass__MaterialLibrary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessPass__MaterialLibrary(__PostProcessPass__MaterialLibrary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass__MaterialLibrary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessPass__MaterialLibrary(__PostProcessPass__MaterialLibrary const&) = delete;

  /// @brief Field stopNaN, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___subpixelMorphologicalAntialiasing;

  /// @brief Field gaussianDepthOfField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___gaussianDepthOfField;

  /// @brief Field bokehDepthOfField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bokehDepthOfField;

  /// @brief Field cameraMotionBlur, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___cameraMotionBlur;

  /// @brief Field paniniProjection, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___paniniProjection;

  /// @brief Field bloom, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bloom;

  /// @brief Field scalingSetup, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___scalingSetup;

  /// @brief Field easu, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___easu;

  /// @brief Field uber, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___uber;

  /// @brief Field finalPass, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___finalPass;

  /// @brief Field lensFlareDataDriven, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lensFlareDataDriven;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___stopNaN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___subpixelMorphologicalAntialiasing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___gaussianDepthOfField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___bokehDepthOfField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___cameraMotionBlur) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___paniniProjection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___bloom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___scalingSetup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___easu) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___uber) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___finalPass) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary, ___lensFlareDataDriven) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::ShaderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::PostProcessPass::ShaderConstants*
class CORDL_TYPE __PostProcessPass__ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AreaTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AreaTexture, put = setStaticF__AreaTexture)) int32_t _AreaTexture;

  /// @brief Field _BlendTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlendTexture, put = setStaticF__BlendTexture)) int32_t _BlendTexture;

  /// @brief Field _BloomMipDown, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__BloomMipDown, put = setStaticF__BloomMipDown))::ArrayW<int32_t, ::Array<int32_t>*> _BloomMipDown;

  /// @brief Field _BloomMipUp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__BloomMipUp, put = setStaticF__BloomMipUp))::ArrayW<int32_t, ::Array<int32_t>*> _BloomMipUp;

  /// @brief Field _Bloom_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Bloom_Params, put = setStaticF__Bloom_Params)) int32_t _Bloom_Params;

  /// @brief Field _Bloom_RGBM, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Bloom_RGBM, put = setStaticF__Bloom_RGBM)) int32_t _Bloom_RGBM;

  /// @brief Field _Bloom_Texture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Bloom_Texture, put = setStaticF__Bloom_Texture)) int32_t _Bloom_Texture;

  /// @brief Field _BokehConstants, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BokehConstants, put = setStaticF__BokehConstants)) int32_t _BokehConstants;

  /// @brief Field _BokehKernel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BokehKernel, put = setStaticF__BokehKernel)) int32_t _BokehKernel;

  /// @brief Field _Chroma_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Chroma_Params, put = setStaticF__Chroma_Params)) int32_t _Chroma_Params;

  /// @brief Field _CoCParams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CoCParams, put = setStaticF__CoCParams)) int32_t _CoCParams;

  /// @brief Field _ColorTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ColorTexture, put = setStaticF__ColorTexture)) int32_t _ColorTexture;

  /// @brief Field _Distortion_Params1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Distortion_Params1, put = setStaticF__Distortion_Params1)) int32_t _Distortion_Params1;

  /// @brief Field _Distortion_Params2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Distortion_Params2, put = setStaticF__Distortion_Params2)) int32_t _Distortion_Params2;

  /// @brief Field _DofTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DofTexture, put = setStaticF__DofTexture)) int32_t _DofTexture;

  /// @brief Field _DownSampleScaleFactor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DownSampleScaleFactor, put = setStaticF__DownSampleScaleFactor)) int32_t _DownSampleScaleFactor;

  /// @brief Field _EdgeTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__EdgeTexture, put = setStaticF__EdgeTexture)) int32_t _EdgeTexture;

  /// @brief Field _FlareColorValue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareColorValue, put = setStaticF__FlareColorValue)) int32_t _FlareColorValue;

  /// @brief Field _FlareData0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData0, put = setStaticF__FlareData0)) int32_t _FlareData0;

  /// @brief Field _FlareData1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData1, put = setStaticF__FlareData1)) int32_t _FlareData1;

  /// @brief Field _FlareData2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData2, put = setStaticF__FlareData2)) int32_t _FlareData2;

  /// @brief Field _FlareData3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData3, put = setStaticF__FlareData3)) int32_t _FlareData3;

  /// @brief Field _FlareData4, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData4, put = setStaticF__FlareData4)) int32_t _FlareData4;

  /// @brief Field _FlareData5, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareData5, put = setStaticF__FlareData5)) int32_t _FlareData5;

  /// @brief Field _FlareOcclusionIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareOcclusionIndex, put = setStaticF__FlareOcclusionIndex)) int32_t _FlareOcclusionIndex;

  /// @brief Field _FlareOcclusionTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareOcclusionTex, put = setStaticF__FlareOcclusionTex)) int32_t _FlareOcclusionTex;

  /// @brief Field _FlareTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FlareTex, put = setStaticF__FlareTex)) int32_t _FlareTex;

  /// @brief Field _FullCoCTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FullCoCTexture, put = setStaticF__FullCoCTexture)) int32_t _FullCoCTexture;

  /// @brief Field _FullscreenProjMat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FullscreenProjMat, put = setStaticF__FullscreenProjMat)) int32_t _FullscreenProjMat;

  /// @brief Field _HalfCoCTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__HalfCoCTexture, put = setStaticF__HalfCoCTexture)) int32_t _HalfCoCTexture;

  /// @brief Field _InternalLut, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__InternalLut, put = setStaticF__InternalLut)) int32_t _InternalLut;

  /// @brief Field _LensDirt_Intensity, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LensDirt_Intensity, put = setStaticF__LensDirt_Intensity)) int32_t _LensDirt_Intensity;

  /// @brief Field _LensDirt_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LensDirt_Params, put = setStaticF__LensDirt_Params)) int32_t _LensDirt_Params;

  /// @brief Field _LensDirt_Texture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LensDirt_Texture, put = setStaticF__LensDirt_Texture)) int32_t _LensDirt_Texture;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _Metrics, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Metrics, put = setStaticF__Metrics)) int32_t _Metrics;

  /// @brief Field _Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Params, put = setStaticF__Params)) int32_t _Params;

  /// @brief Field _PingTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__PingTexture, put = setStaticF__PingTexture)) int32_t _PingTexture;

  /// @brief Field _PongTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__PongTexture, put = setStaticF__PongTexture)) int32_t _PongTexture;

  /// @brief Field _ScalingSetupTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ScalingSetupTexture, put = setStaticF__ScalingSetupTexture)) int32_t _ScalingSetupTexture;

  /// @brief Field _SearchTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SearchTexture, put = setStaticF__SearchTexture)) int32_t _SearchTexture;

  /// @brief Field _SourceTexLowMip, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SourceTexLowMip, put = setStaticF__SourceTexLowMip)) int32_t _SourceTexLowMip;

  /// @brief Field _StencilMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__StencilMask, put = setStaticF__StencilMask)) int32_t _StencilMask;

  /// @brief Field _StencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__StencilRef, put = setStaticF__StencilRef)) int32_t _StencilRef;

  /// @brief Field _TempTarget, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TempTarget, put = setStaticF__TempTarget)) int32_t _TempTarget;

  /// @brief Field _TempTarget2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TempTarget2, put = setStaticF__TempTarget2)) int32_t _TempTarget2;

  /// @brief Field _UpscaledTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__UpscaledTexture, put = setStaticF__UpscaledTexture)) int32_t _UpscaledTexture;

  /// @brief Field _UserLut, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__UserLut, put = setStaticF__UserLut)) int32_t _UserLut;

  /// @brief Field _UserLut_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__UserLut_Params, put = setStaticF__UserLut_Params)) int32_t _UserLut_Params;

  /// @brief Field _Vignette_Params1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Vignette_Params1, put = setStaticF__Vignette_Params1)) int32_t _Vignette_Params1;

  /// @brief Field _Vignette_Params2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Vignette_Params2, put = setStaticF__Vignette_Params2)) int32_t _Vignette_Params2;

  static inline int32_t getStaticF__AreaTexture();

  static inline int32_t getStaticF__BlendTexture();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__BloomMipDown();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__BloomMipUp();

  static inline int32_t getStaticF__Bloom_Params();

  static inline int32_t getStaticF__Bloom_RGBM();

  static inline int32_t getStaticF__Bloom_Texture();

  static inline int32_t getStaticF__BokehConstants();

  static inline int32_t getStaticF__BokehKernel();

  static inline int32_t getStaticF__Chroma_Params();

  static inline int32_t getStaticF__CoCParams();

  static inline int32_t getStaticF__ColorTexture();

  static inline int32_t getStaticF__Distortion_Params1();

  static inline int32_t getStaticF__Distortion_Params2();

  static inline int32_t getStaticF__DofTexture();

  static inline int32_t getStaticF__DownSampleScaleFactor();

  static inline int32_t getStaticF__EdgeTexture();

  static inline int32_t getStaticF__FlareColorValue();

  static inline int32_t getStaticF__FlareData0();

  static inline int32_t getStaticF__FlareData1();

  static inline int32_t getStaticF__FlareData2();

  static inline int32_t getStaticF__FlareData3();

  static inline int32_t getStaticF__FlareData4();

  static inline int32_t getStaticF__FlareData5();

  static inline int32_t getStaticF__FlareOcclusionIndex();

  static inline int32_t getStaticF__FlareOcclusionTex();

  static inline int32_t getStaticF__FlareTex();

  static inline int32_t getStaticF__FullCoCTexture();

  static inline int32_t getStaticF__FullscreenProjMat();

  static inline int32_t getStaticF__HalfCoCTexture();

  static inline int32_t getStaticF__InternalLut();

  static inline int32_t getStaticF__LensDirt_Intensity();

  static inline int32_t getStaticF__LensDirt_Params();

  static inline int32_t getStaticF__LensDirt_Texture();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__Metrics();

  static inline int32_t getStaticF__Params();

  static inline int32_t getStaticF__PingTexture();

  static inline int32_t getStaticF__PongTexture();

  static inline int32_t getStaticF__ScalingSetupTexture();

  static inline int32_t getStaticF__SearchTexture();

  static inline int32_t getStaticF__SourceTexLowMip();

  static inline int32_t getStaticF__StencilMask();

  static inline int32_t getStaticF__StencilRef();

  static inline int32_t getStaticF__TempTarget();

  static inline int32_t getStaticF__TempTarget2();

  static inline int32_t getStaticF__UpscaledTexture();

  static inline int32_t getStaticF__UserLut();

  static inline int32_t getStaticF__UserLut_Params();

  static inline int32_t getStaticF__Vignette_Params1();

  static inline int32_t getStaticF__Vignette_Params2();

  static inline void setStaticF__AreaTexture(int32_t value);

  static inline void setStaticF__BlendTexture(int32_t value);

  static inline void setStaticF__BloomMipDown(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF__BloomMipUp(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF__Bloom_Params(int32_t value);

  static inline void setStaticF__Bloom_RGBM(int32_t value);

  static inline void setStaticF__Bloom_Texture(int32_t value);

  static inline void setStaticF__BokehConstants(int32_t value);

  static inline void setStaticF__BokehKernel(int32_t value);

  static inline void setStaticF__Chroma_Params(int32_t value);

  static inline void setStaticF__CoCParams(int32_t value);

  static inline void setStaticF__ColorTexture(int32_t value);

  static inline void setStaticF__Distortion_Params1(int32_t value);

  static inline void setStaticF__Distortion_Params2(int32_t value);

  static inline void setStaticF__DofTexture(int32_t value);

  static inline void setStaticF__DownSampleScaleFactor(int32_t value);

  static inline void setStaticF__EdgeTexture(int32_t value);

  static inline void setStaticF__FlareColorValue(int32_t value);

  static inline void setStaticF__FlareData0(int32_t value);

  static inline void setStaticF__FlareData1(int32_t value);

  static inline void setStaticF__FlareData2(int32_t value);

  static inline void setStaticF__FlareData3(int32_t value);

  static inline void setStaticF__FlareData4(int32_t value);

  static inline void setStaticF__FlareData5(int32_t value);

  static inline void setStaticF__FlareOcclusionIndex(int32_t value);

  static inline void setStaticF__FlareOcclusionTex(int32_t value);

  static inline void setStaticF__FlareTex(int32_t value);

  static inline void setStaticF__FullCoCTexture(int32_t value);

  static inline void setStaticF__FullscreenProjMat(int32_t value);

  static inline void setStaticF__HalfCoCTexture(int32_t value);

  static inline void setStaticF__InternalLut(int32_t value);

  static inline void setStaticF__LensDirt_Intensity(int32_t value);

  static inline void setStaticF__LensDirt_Params(int32_t value);

  static inline void setStaticF__LensDirt_Texture(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__Metrics(int32_t value);

  static inline void setStaticF__Params(int32_t value);

  static inline void setStaticF__PingTexture(int32_t value);

  static inline void setStaticF__PongTexture(int32_t value);

  static inline void setStaticF__ScalingSetupTexture(int32_t value);

  static inline void setStaticF__SearchTexture(int32_t value);

  static inline void setStaticF__SourceTexLowMip(int32_t value);

  static inline void setStaticF__StencilMask(int32_t value);

  static inline void setStaticF__StencilRef(int32_t value);

  static inline void setStaticF__TempTarget(int32_t value);

  static inline void setStaticF__TempTarget2(int32_t value);

  static inline void setStaticF__UpscaledTexture(int32_t value);

  static inline void setStaticF__UserLut(int32_t value);

  static inline void setStaticF__UserLut_Params(int32_t value);

  static inline void setStaticF__Vignette_Params1(int32_t value);

  static inline void setStaticF__Vignette_Params2(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessPass__ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass__ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessPass__ShaderConstants(__PostProcessPass__ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass__ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessPass__ShaderConstants(__PostProcessPass__ShaderConstants const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::<>c__DisplayClass57_0
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::PostProcessPass::<>c__DisplayClass57_0
struct CORDL_TYPE __PostProcessPass____c__DisplayClass57_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessPass____c__DisplayClass57_0();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityEngine::Rendering::Universal::Internal::PostProcessPass*", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderTargetIdentifier",
  // modifiers: "", def_value: None }, CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }, CppParam { name: "tempTargetUsed", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "tempTarget2Used", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "amountOfPassesRemaining", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __PostProcessPass____c__DisplayClass57_0(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* __4__this,
                                                     ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rendering::CommandBuffer* cmd, bool tempTargetUsed,
                                                     bool tempTarget2Used, int32_t amountOfPassesRemaining) noexcept;

  /// @brief Field source, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier source;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* __4__this;

  /// @brief Field destination, offset: 0x30, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier destination;

  /// @brief Field cmd, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* cmd;

  /// @brief Field tempTargetUsed, offset: 0x60, size: 0x1, def value: None
  bool tempTargetUsed;

  /// @brief Field tempTarget2Used, offset: 0x61, size: 0x1, def value: None
  bool tempTarget2Used;

  /// @brief Field amountOfPassesRemaining, offset: 0x64, size: 0x4, def value: None
  int32_t amountOfPassesRemaining;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, destination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, cmd) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, tempTargetUsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, tempTarget2Used) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, amountOfPassesRemaining) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::PostProcessPass::<>c*
class CORDL_TYPE __PostProcessPass____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* __9;

  /// @brief Field <>9__66_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__66_0,
                             put = setStaticF___9__66_0))::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__66_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* New_ctor();

  /// @brief Method <DoLensFlareDatadriven>b__66_0, addr 0x16140c8, size 0x90, virtual false, abstract: false, final false
  inline float_t _DoLensFlareDatadriven_b__66_0(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method .ctor, addr 0x16140c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* getStaticF___9();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__66_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* value);

  static inline void setStaticF___9__66_0(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessPass____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessPass____c(__PostProcessPass____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessPass____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessPass____c(__PostProcessPass____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::PostProcessPass
// SizeInfo { instance_size: 632, native_size: -1, calculated_instance_size: 632, calculated_native_size: 632, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::PostProcessPass*
class CORDL_TYPE PostProcessPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using MaterialLibrary = ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants;

  using __c = ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c;

  using __c__DisplayClass57_0 = ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0;

  /// @brief Field kShaderPropertyId_PrevViewProjM, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kShaderPropertyId_PrevViewProjM, put = setStaticF_kShaderPropertyId_PrevViewProjM)) int32_t kShaderPropertyId_PrevViewProjM;

  /// @brief Field kShaderPropertyId_PrevViewProjMStereo, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kShaderPropertyId_PrevViewProjMStereo, put = setStaticF_kShaderPropertyId_PrevViewProjMStereo)) int32_t kShaderPropertyId_PrevViewProjMStereo;

  /// @brief Field kShaderPropertyId_ViewProjM, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kShaderPropertyId_ViewProjM, put = setStaticF_kShaderPropertyId_ViewProjM)) int32_t kShaderPropertyId_ViewProjM;

  /// @brief Field kShaderPropertyId_ViewProjMStereo, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kShaderPropertyId_ViewProjMStereo, put = setStaticF_kShaderPropertyId_ViewProjMStereo)) int32_t kShaderPropertyId_ViewProjMStereo;

  /// @brief Field m_BlitMaterial, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial))::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_Bloom, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bloom, put = __cordl_internal_set_m_Bloom))::UnityW<::UnityEngine::Rendering::Universal::Bloom> m_Bloom;

  /// @brief Field m_BokehHash, offset 0x258, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehHash, put = __cordl_internal_set_m_BokehHash)) int32_t m_BokehHash;

  /// @brief Field m_BokehKernel, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BokehKernel, put = __cordl_internal_set_m_BokehKernel))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BokehKernel;

  /// @brief Field m_BokehMaxRadius, offset 0x25c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehMaxRadius, put = __cordl_internal_set_m_BokehMaxRadius)) float_t m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset 0x260, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehRCPAspect, put = __cordl_internal_set_m_BokehRCPAspect)) float_t m_BokehRCPAspect;

  /// @brief Field m_ChromaticAberration, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChromaticAberration,
                      put = __cordl_internal_set_m_ChromaticAberration))::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> m_ChromaticAberration;

  /// @brief Field m_ColorAdjustments, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorAdjustments, put = __cordl_internal_set_m_ColorAdjustments))::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> m_ColorAdjustments;

  /// @brief Field m_ColorLookup, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorLookup, put = __cordl_internal_set_m_ColorLookup))::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> m_ColorLookup;

  /// @brief Field m_Data, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data))::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_Data;

  /// @brief Field m_DefaultHDRFormat, offset 0x230, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultHDRFormat, put = __cordl_internal_set_m_DefaultHDRFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat;

  /// @brief Field m_Depth, offset 0x168, size 0x30
  __declspec(property(get = __cordl_internal_get_m_Depth, put = __cordl_internal_set_m_Depth))::UnityEngine::Rendering::Universal::RenderTargetHandle m_Depth;

  /// @brief Field m_DepthOfField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthOfField, put = __cordl_internal_set_m_DepthOfField))::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> m_DepthOfField;

  /// @brief Field m_Descriptor, offset 0xd8, size 0x34
  __declspec(property(get = __cordl_internal_get_m_Descriptor, put = __cordl_internal_set_m_Descriptor))::UnityEngine::RenderTextureDescriptor m_Descriptor;

  /// @brief Field m_Destination, offset 0x138, size 0x30
  __declspec(property(get = __cordl_internal_get_m_Destination, put = __cordl_internal_set_m_Destination))::UnityEngine::Rendering::Universal::RenderTargetHandle m_Destination;

  /// @brief Field m_DitheringTextureIndex, offset 0x244, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DitheringTextureIndex, put = __cordl_internal_set_m_DitheringTextureIndex)) int32_t m_DitheringTextureIndex;

  /// @brief Field m_EnableSRGBConversionIfNeeded, offset 0x266, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableSRGBConversionIfNeeded, put = __cordl_internal_set_m_EnableSRGBConversionIfNeeded)) bool m_EnableSRGBConversionIfNeeded;

  /// @brief Field m_FilmGrain, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilmGrain, put = __cordl_internal_set_m_FilmGrain))::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> m_FilmGrain;

  /// @brief Field m_GaussianCoCFormat, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GaussianCoCFormat, put = __cordl_internal_set_m_GaussianCoCFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat m_GaussianCoCFormat;

  /// @brief Field m_HasFinalPass, offset 0x265, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasFinalPass, put = __cordl_internal_set_m_HasFinalPass)) bool m_HasFinalPass;

  /// @brief Field m_InternalLut, offset 0x198, size 0x30
  __declspec(property(get = __cordl_internal_get_m_InternalLut, put = __cordl_internal_set_m_InternalLut))::UnityEngine::Rendering::Universal::RenderTargetHandle m_InternalLut;

  /// @brief Field m_IsFinalPass, offset 0x264, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFinalPass, put = __cordl_internal_set_m_IsFinalPass)) bool m_IsFinalPass;

  /// @brief Field m_LensDistortion, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensDistortion, put = __cordl_internal_set_m_LensDistortion))::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> m_LensDistortion;

  /// @brief Field m_MRT2, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MRT2,
                      put = __cordl_internal_set_m_MRT2))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_MRT2;

  /// @brief Field m_Materials, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Materials, put = __cordl_internal_set_m_Materials))::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary* m_Materials;

  /// @brief Field m_MotionBlur, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionBlur, put = __cordl_internal_set_m_MotionBlur))::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> m_MotionBlur;

  /// @brief Field m_PaniniProjection, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PaniniProjection, put = __cordl_internal_set_m_PaniniProjection))::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> m_PaniniProjection;

  /// @brief Field m_ProfilingRenderFinalPostProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingRenderFinalPostProcessing,
                             put = setStaticF_m_ProfilingRenderFinalPostProcessing))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderFinalPostProcessing;

  /// @brief Field m_ProfilingRenderPostProcessing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingRenderPostProcessing,
                             put = setStaticF_m_ProfilingRenderPostProcessing))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderPostProcessing;

  /// @brief Field m_ResetHistory, offset 0x240, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResetHistory, put = __cordl_internal_set_m_ResetHistory)) bool m_ResetHistory;

  /// @brief Field m_ResolveToScreen, offset 0x269, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResolveToScreen, put = __cordl_internal_set_m_ResolveToScreen)) bool m_ResolveToScreen;

  /// @brief Field m_SMAAEdgeFormat, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SMAAEdgeFormat, put = __cordl_internal_set_m_SMAAEdgeFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat;

  /// @brief Field m_Source, offset 0x110, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source))::UnityEngine::Rendering::RenderTargetIdentifier m_Source;

  /// @brief Field m_Tonemapping, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tonemapping, put = __cordl_internal_set_m_Tonemapping))::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> m_Tonemapping;

  /// @brief Field m_UseDrawProcedural, offset 0x267, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseDrawProcedural, put = __cordl_internal_set_m_UseDrawProcedural)) bool m_UseDrawProcedural;

  /// @brief Field m_UseFastSRGBLinearConversion, offset 0x268, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFastSRGBLinearConversion, put = __cordl_internal_set_m_UseFastSRGBLinearConversion)) bool m_UseFastSRGBLinearConversion;

  /// @brief Field m_UseRGBM, offset 0x234, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseRGBM, put = __cordl_internal_set_m_UseRGBM)) bool m_UseRGBM;

  /// @brief Field m_UseSwapBuffer, offset 0x26a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSwapBuffer, put = __cordl_internal_set_m_UseSwapBuffer)) bool m_UseSwapBuffer;

  /// @brief Field m_Vignette, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vignette, put = __cordl_internal_set_m_Vignette))::UnityW<::UnityEngine::Rendering::Universal::Vignette> m_Vignette;

  /// @brief Method Blit, addr 0x29beb8c, size 0x218, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                   ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method BlitDstDiscardContent, addr 0x29c1c54, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method CalcCropExtents, addr 0x29c3664, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::Camera* camera, float_t d);

  /// @brief Method CalcViewExtents, addr 0x29c3608, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::Camera* camera);

  /// @brief Method CanRunOnTile, addr 0x29bb99c, size 0x8, virtual false, abstract: false, final false
  inline bool CanRunOnTile();

  /// @brief Method Cleanup, addr 0x29bb388, size 0x1c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method DoBokehDepthOfField, addr 0x29c2770, size 0x7a0, virtual false, abstract: false, final false
  inline void DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                                  ::UnityEngine::Rect pixelRect);

  /// @brief Method DoDepthOfField, addr 0x29bfb8c, size 0x12c, virtual false, abstract: false, final false
  inline void DoDepthOfField(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                             ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect);

  /// @brief Method DoGaussianDepthOfField, addr 0x29c1ce0, size 0xa90, virtual false, abstract: false, final false
  inline void DoGaussianDepthOfField(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect);

  /// @brief Method DoLensFlareDatadriven, addr 0x29c00f0, size 0x460, virtual false, abstract: false, final false
  inline void DoLensFlareDatadriven(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, bool usePanini,
                                    float_t paniniDistance, float_t paniniCropToFit);

  /// @brief Method DoMotionBlur, addr 0x29bfcb8, size 0x1dc, virtual false, abstract: false, final false
  inline void DoMotionBlur(::UnityEngine::Rendering::Universal::CameraData cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                           ::UnityEngine::Rendering::RenderTargetIdentifier destination);

  /// @brief Method DoPaniniProjection, addr 0x29bfe94, size 0x25c, virtual false, abstract: false, final false
  inline void DoPaniniProjection(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                 ::UnityEngine::Rendering::RenderTargetIdentifier destination);

  /// @brief Method DoSubpixelMorphologicalAntialiasing, addr 0x29bf338, size 0x854, virtual false, abstract: false, final false
  inline void DoSubpixelMorphologicalAntialiasing(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                  ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination);

  /// @brief Method DrawFullscreenMesh, addr 0x29beda4, size 0x1c4, virtual false, abstract: false, final false
  inline void DrawFullscreenMesh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Execute, addr 0x29bb9a4, size 0x410, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetCompatibleDescriptor, addr 0x29bb814, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor();

  /// @brief Method GetCompatibleDescriptor, addr 0x29beac0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t depthBufferBits);

  /// @brief Method GetLensFlareLightAttenuation, addr 0x29c3170, size 0x208, virtual false, abstract: false, final false
  static inline float_t GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method GetMaxBokehRadiusInPixels, addr 0x29c3158, size 0x18, virtual false, abstract: false, final false
  static inline float_t GetMaxBokehRadiusInPixels(float_t viewportHeight);

  static inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Material* blitMaterial);

  /// @brief Method OnCameraCleanup, addr 0x29bb8b0, size 0xe0, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x29bb6c8, size 0x14c, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method PrepareBokehKernel, addr 0x29c2f10, size 0x248, virtual false, abstract: false, final false
  inline void PrepareBokehKernel(float_t maxRadius, float_t rcpAspect);

  /// @brief Method Render, addr 0x29bcb70, size 0x1f50, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderFinalPass, addr 0x29bbdb4, size 0xdbc, virtual false, abstract: false, final false
  inline void RenderFinalPass(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RequireSRGBConversionBlitToBackBuffer, addr 0x29beb58, size 0x34, virtual false, abstract: false, final false
  inline bool RequireSRGBConversionBlitToBackBuffer(::UnityEngine::Rendering::Universal::CameraData cameraData);

  /// @brief Method ResetHistory, addr 0x29bb990, size 0xc, virtual false, abstract: false, final false
  inline void ResetHistory();

  /// @brief Method Setup, addr 0x29bb500, size 0x108, virtual false, abstract: false, final false
  inline void Setup(ByRef<::UnityEngine::RenderTextureDescriptor> baseDescriptor, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source,
                    ::UnityEngine::Rendering::Universal::RenderTargetHandle destination, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depth,
                    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut, bool hasFinalPass, bool enableSRGBConversion);

  /// @brief Method Setup, addr 0x29bb3a4, size 0x15c, virtual false, abstract: false, final false
  inline void Setup(ByRef<::UnityEngine::RenderTextureDescriptor> baseDescriptor, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source, bool resolveToScreen,
                    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depth, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut, bool hasFinalPass,
                    bool enableSRGBConversion);

  /// @brief Method SetupBloom, addr 0x29c0550, size 0xd24, virtual false, abstract: false, final false
  inline void SetupBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Material* uberMaterial);

  /// @brief Method SetupChromaticAberration, addr 0x29c1548, size 0xf0, virtual false, abstract: false, final false
  inline void SetupChromaticAberration(::UnityEngine::Material* material);

  /// @brief Method SetupColorGrading, addr 0x29c17d4, size 0x344, virtual false, abstract: false, final false
  inline void SetupColorGrading(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ::UnityEngine::Material* material);

  /// @brief Method SetupDithering, addr 0x29c1bc0, size 0x94, virtual false, abstract: false, final false
  inline void SetupDithering(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupFinalPass, addr 0x29bb608, size 0xc0, virtual false, abstract: false, final false
  inline void SetupFinalPass(ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source, bool useSwapBuffer);

  /// @brief Method SetupGrain, addr 0x29c1b18, size 0xa8, virtual false, abstract: false, final false
  inline void SetupGrain(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupLensDistortion, addr 0x29c1274, size 0x2d4, virtual false, abstract: false, final false
  inline void SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView);

  /// @brief Method SetupVignette, addr 0x29c1638, size 0x19c, virtual false, abstract: false, final false
  inline void SetupVignette(::UnityEngine::Material* material);

  /// @brief Method UpdateMotionBlurMatrices, addr 0x29c3378, size 0x290, virtual false, abstract: false, final false
  inline void UpdateMotionBlurMatrices(ByRef<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xr);

  /// @brief Method <Render>g__GetDestination|57_1, addr 0x29bef7c, size 0x260, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier
  _Render_g__GetDestination_57_1(ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Render>g__GetSource|57_0, addr 0x29bef68, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier
  _Render_g__GetSource_57_0(ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Render>g__Swap|57_2, addr 0x29bf1dc, size 0x15c, virtual false, abstract: false, final false
  inline void _Render_g__Swap_57_2(ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> r,
                                   ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& __cordl_internal_get_m_Bloom() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& __cordl_internal_get_m_Bloom();

  constexpr int32_t const& __cordl_internal_get_m_BokehHash() const;

  constexpr int32_t& __cordl_internal_get_m_BokehHash();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_BokehKernel() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_BokehKernel();

  constexpr float_t const& __cordl_internal_get_m_BokehMaxRadius() const;

  constexpr float_t& __cordl_internal_get_m_BokehMaxRadius();

  constexpr float_t const& __cordl_internal_get_m_BokehRCPAspect() const;

  constexpr float_t& __cordl_internal_get_m_BokehRCPAspect();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& __cordl_internal_get_m_ChromaticAberration() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& __cordl_internal_get_m_ChromaticAberration();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& __cordl_internal_get_m_ColorAdjustments() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& __cordl_internal_get_m_ColorAdjustments();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& __cordl_internal_get_m_ColorLookup() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& __cordl_internal_get_m_ColorLookup();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_Data() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_Data();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_DefaultHDRFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_DefaultHDRFormat();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_Depth() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_Depth();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& __cordl_internal_get_m_DepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& __cordl_internal_get_m_DepthOfField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_Descriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_Descriptor();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_Destination() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_Destination();

  constexpr int32_t const& __cordl_internal_get_m_DitheringTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DitheringTextureIndex();

  constexpr bool const& __cordl_internal_get_m_EnableSRGBConversionIfNeeded() const;

  constexpr bool& __cordl_internal_get_m_EnableSRGBConversionIfNeeded();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& __cordl_internal_get_m_FilmGrain() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& __cordl_internal_get_m_FilmGrain();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_GaussianCoCFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_GaussianCoCFormat();

  constexpr bool const& __cordl_internal_get_m_HasFinalPass() const;

  constexpr bool& __cordl_internal_get_m_HasFinalPass();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_InternalLut() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_InternalLut();

  constexpr bool const& __cordl_internal_get_m_IsFinalPass() const;

  constexpr bool& __cordl_internal_get_m_IsFinalPass();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& __cordl_internal_get_m_LensDistortion() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& __cordl_internal_get_m_LensDistortion();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_m_MRT2() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_m_MRT2();

  constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*& __cordl_internal_get_m_Materials();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*> const& __cordl_internal_get_m_Materials() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& __cordl_internal_get_m_MotionBlur() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& __cordl_internal_get_m_MotionBlur();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& __cordl_internal_get_m_PaniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& __cordl_internal_get_m_PaniniProjection();

  constexpr bool const& __cordl_internal_get_m_ResetHistory() const;

  constexpr bool& __cordl_internal_get_m_ResetHistory();

  constexpr bool const& __cordl_internal_get_m_ResolveToScreen() const;

  constexpr bool& __cordl_internal_get_m_ResolveToScreen();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_SMAAEdgeFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_SMAAEdgeFormat();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_Source();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& __cordl_internal_get_m_Tonemapping() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& __cordl_internal_get_m_Tonemapping();

  constexpr bool const& __cordl_internal_get_m_UseDrawProcedural() const;

  constexpr bool& __cordl_internal_get_m_UseDrawProcedural();

  constexpr bool const& __cordl_internal_get_m_UseFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_m_UseFastSRGBLinearConversion();

  constexpr bool const& __cordl_internal_get_m_UseRGBM() const;

  constexpr bool& __cordl_internal_get_m_UseRGBM();

  constexpr bool const& __cordl_internal_get_m_UseSwapBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseSwapBuffer();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& __cordl_internal_get_m_Vignette() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& __cordl_internal_get_m_Vignette();

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value);

  constexpr void __cordl_internal_set_m_BokehHash(int32_t value);

  constexpr void __cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_BokehMaxRadius(float_t value);

  constexpr void __cordl_internal_set_m_BokehRCPAspect(float_t value);

  constexpr void __cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value);

  constexpr void __cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value);

  constexpr void __cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value);

  constexpr void __cordl_internal_set_m_Data(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_m_DefaultHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Depth(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value);

  constexpr void __cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_Destination(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_DitheringTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_EnableSRGBConversionIfNeeded(bool value);

  constexpr void __cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value);

  constexpr void __cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_HasFinalPass(bool value);

  constexpr void __cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_IsFinalPass(bool value);

  constexpr void __cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value);

  constexpr void __cordl_internal_set_m_MRT2(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary* value);

  constexpr void __cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value);

  constexpr void __cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value);

  constexpr void __cordl_internal_set_m_ResetHistory(bool value);

  constexpr void __cordl_internal_set_m_ResolveToScreen(bool value);

  constexpr void __cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value);

  constexpr void __cordl_internal_set_m_UseDrawProcedural(bool value);

  constexpr void __cordl_internal_set_m_UseFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_m_UseRGBM(bool value);

  constexpr void __cordl_internal_set_m_UseSwapBuffer(bool value);

  constexpr void __cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value);

  /// @brief Method .ctor, addr 0x29bb018, size 0x370, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Material* blitMaterial);

  static inline int32_t getStaticF_kShaderPropertyId_PrevViewProjM();

  static inline int32_t getStaticF_kShaderPropertyId_PrevViewProjMStereo();

  static inline int32_t getStaticF_kShaderPropertyId_ViewProjM();

  static inline int32_t getStaticF_kShaderPropertyId_ViewProjMStereo();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingRenderFinalPostProcessing();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingRenderPostProcessing();

  static inline void setStaticF_kShaderPropertyId_PrevViewProjM(int32_t value);

  static inline void setStaticF_kShaderPropertyId_PrevViewProjMStereo(int32_t value);

  static inline void setStaticF_kShaderPropertyId_ViewProjM(int32_t value);

  static inline void setStaticF_kShaderPropertyId_ViewProjMStereo(int32_t value);

  static inline void setStaticF_m_ProfilingRenderFinalPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingRenderPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass(PostProcessPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass(PostProcessPass const&) = delete;

  /// @brief Field m_Descriptor, offset: 0xd8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_Descriptor;

  /// @brief Field m_Source, offset: 0x110, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_Source;

  /// @brief Field m_Destination, offset: 0x138, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_Destination;

  /// @brief Field m_Depth, offset: 0x168, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_Depth;

  /// @brief Field m_InternalLut, offset: 0x198, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_InternalLut;

  /// @brief Field m_Materials, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary* ___m_Materials;

  /// @brief Field m_Data, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_Data;

  /// @brief Field m_DepthOfField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> ___m_DepthOfField;

  /// @brief Field m_MotionBlur, offset: 0x1e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> ___m_MotionBlur;

  /// @brief Field m_PaniniProjection, offset: 0x1e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> ___m_PaniniProjection;

  /// @brief Field m_Bloom, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Bloom> ___m_Bloom;

  /// @brief Field m_LensDistortion, offset: 0x1f8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> ___m_LensDistortion;

  /// @brief Field m_ChromaticAberration, offset: 0x200, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> ___m_ChromaticAberration;

  /// @brief Field m_Vignette, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Vignette> ___m_Vignette;

  /// @brief Field m_ColorLookup, offset: 0x210, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> ___m_ColorLookup;

  /// @brief Field m_ColorAdjustments, offset: 0x218, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> ___m_ColorAdjustments;

  /// @brief Field m_Tonemapping, offset: 0x220, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> ___m_Tonemapping;

  /// @brief Field m_FilmGrain, offset: 0x228, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> ___m_FilmGrain;

  /// @brief Field m_DefaultHDRFormat, offset: 0x230, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_DefaultHDRFormat;

  /// @brief Field m_UseRGBM, offset: 0x234, size: 0x1, def value: None
  bool ___m_UseRGBM;

  /// @brief Field m_SMAAEdgeFormat, offset: 0x238, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_SMAAEdgeFormat;

  /// @brief Field m_GaussianCoCFormat, offset: 0x23c, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_GaussianCoCFormat;

  /// @brief Field m_ResetHistory, offset: 0x240, size: 0x1, def value: None
  bool ___m_ResetHistory;

  /// @brief Field m_DitheringTextureIndex, offset: 0x244, size: 0x4, def value: None
  int32_t ___m_DitheringTextureIndex;

  /// @brief Field m_MRT2, offset: 0x248, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___m_MRT2;

  /// @brief Field m_BokehKernel, offset: 0x250, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_BokehKernel;

  /// @brief Field m_BokehHash, offset: 0x258, size: 0x4, def value: None
  int32_t ___m_BokehHash;

  /// @brief Field m_BokehMaxRadius, offset: 0x25c, size: 0x4, def value: None
  float_t ___m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset: 0x260, size: 0x4, def value: None
  float_t ___m_BokehRCPAspect;

  /// @brief Field m_IsFinalPass, offset: 0x264, size: 0x1, def value: None
  bool ___m_IsFinalPass;

  /// @brief Field m_HasFinalPass, offset: 0x265, size: 0x1, def value: None
  bool ___m_HasFinalPass;

  /// @brief Field m_EnableSRGBConversionIfNeeded, offset: 0x266, size: 0x1, def value: None
  bool ___m_EnableSRGBConversionIfNeeded;

  /// @brief Field m_UseDrawProcedural, offset: 0x267, size: 0x1, def value: None
  bool ___m_UseDrawProcedural;

  /// @brief Field m_UseFastSRGBLinearConversion, offset: 0x268, size: 0x1, def value: None
  bool ___m_UseFastSRGBLinearConversion;

  /// @brief Field m_ResolveToScreen, offset: 0x269, size: 0x1, def value: None
  bool ___m_ResolveToScreen;

  /// @brief Field m_UseSwapBuffer, offset: 0x26a, size: 0x1, def value: None
  bool ___m_UseSwapBuffer;

  /// @brief Field m_BlitMaterial, offset: 0x270, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field k_MaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxPyramidSize{ static_cast<int32_t>(0x10) };

  /// @brief Field k_RenderFinalPostProcessingTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderFinalPostProcessingTag{ u"Render Final PostProcessing Pass" };

  /// @brief Field k_RenderPostProcessingTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderPostProcessingTag{ u"Render PostProcessing Effects" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::PostProcessPass, 0x278>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Descriptor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Source) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Destination) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Depth) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_InternalLut) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Materials) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Data) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_DepthOfField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_MotionBlur) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_PaniniProjection) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Bloom) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_LensDistortion) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_ChromaticAberration) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Vignette) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_ColorLookup) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_ColorAdjustments) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_Tonemapping) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_FilmGrain) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_DefaultHDRFormat) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_UseRGBM) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_SMAAEdgeFormat) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_GaussianCoCFormat) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_ResetHistory) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_DitheringTextureIndex) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_MRT2) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_BokehKernel) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_BokehHash) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_BokehMaxRadius) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_BokehRCPAspect) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_IsFinalPass) == 0x264, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_HasFinalPass) == 0x265, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_EnableSRGBConversionIfNeeded) == 0x266, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_UseDrawProcedural) == 0x267, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_UseFastSRGBLinearConversion) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_ResolveToScreen) == 0x269, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_UseSwapBuffer) == 0x26a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PostProcessPass, ___m_BlitMaterial) == 0x270, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::PostProcessPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, "UnityEngine.Rendering.Universal.Internal", "PostProcessPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*, "UnityEngine.Rendering.Universal.Internal", "PostProcessPass/MaterialLibrary");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "PostProcessPass/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*, "UnityEngine.Rendering.Universal.Internal", "PostProcessPass/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0, "UnityEngine.Rendering.Universal.Internal", "PostProcessPass/<>c__DisplayClass57_0");
