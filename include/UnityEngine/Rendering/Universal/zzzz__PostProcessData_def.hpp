#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PostProcessData)
namespace UnityEngine::Rendering::Universal {
class __PostProcessData__ShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class __PostProcessData__TextureResources;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class __PostProcessData__ShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class __PostProcessData__TextureResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources);
// Type: ::ShaderResources
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::PostProcessData::ShaderResources*
class CORDL_TYPE __PostProcessData__ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field LensFlareDataDrivenPS, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_LensFlareDataDrivenPS, put = __cordl_internal_set_LensFlareDataDrivenPS))::UnityW<::UnityEngine::Shader> LensFlareDataDrivenPS;

  /// @brief Field bloomPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomPS, put = __cordl_internal_set_bloomPS))::UnityW<::UnityEngine::Shader> bloomPS;

  /// @brief Field bokehDepthOfFieldPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfFieldPS, put = __cordl_internal_set_bokehDepthOfFieldPS))::UnityW<::UnityEngine::Shader> bokehDepthOfFieldPS;

  /// @brief Field cameraMotionBlurPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionBlurPS, put = __cordl_internal_set_cameraMotionBlurPS))::UnityW<::UnityEngine::Shader> cameraMotionBlurPS;

  /// @brief Field easuPS, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_easuPS, put = __cordl_internal_set_easuPS))::UnityW<::UnityEngine::Shader> easuPS;

  /// @brief Field finalPostPassPS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_finalPostPassPS, put = __cordl_internal_set_finalPostPassPS))::UnityW<::UnityEngine::Shader> finalPostPassPS;

  /// @brief Field gaussianDepthOfFieldPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfFieldPS, put = __cordl_internal_set_gaussianDepthOfFieldPS))::UnityW<::UnityEngine::Shader> gaussianDepthOfFieldPS;

  /// @brief Field lutBuilderHdrPS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderHdrPS, put = __cordl_internal_set_lutBuilderHdrPS))::UnityW<::UnityEngine::Shader> lutBuilderHdrPS;

  /// @brief Field lutBuilderLdrPS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderLdrPS, put = __cordl_internal_set_lutBuilderLdrPS))::UnityW<::UnityEngine::Shader> lutBuilderLdrPS;

  /// @brief Field paniniProjectionPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_paniniProjectionPS, put = __cordl_internal_set_paniniProjectionPS))::UnityW<::UnityEngine::Shader> paniniProjectionPS;

  /// @brief Field scalingSetupPS, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_scalingSetupPS, put = __cordl_internal_set_scalingSetupPS))::UnityW<::UnityEngine::Shader> scalingSetupPS;

  /// @brief Field stopNanPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNanPS, put = __cordl_internal_set_stopNanPS))::UnityW<::UnityEngine::Shader> stopNanPS;

  /// @brief Field subpixelMorphologicalAntialiasingPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subpixelMorphologicalAntialiasingPS,
                      put = __cordl_internal_set_subpixelMorphologicalAntialiasingPS))::UnityW<::UnityEngine::Shader> subpixelMorphologicalAntialiasingPS;

  /// @brief Field uberPostPS, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_uberPostPS, put = __cordl_internal_set_uberPostPS))::UnityW<::UnityEngine::Shader> uberPostPS;

  static inline ::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_LensFlareDataDrivenPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_LensFlareDataDrivenPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_bloomPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_bloomPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_bokehDepthOfFieldPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_bokehDepthOfFieldPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_cameraMotionBlurPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_cameraMotionBlurPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_easuPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_easuPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_finalPostPassPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_finalPostPassPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_gaussianDepthOfFieldPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_gaussianDepthOfFieldPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lutBuilderHdrPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lutBuilderHdrPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lutBuilderLdrPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lutBuilderLdrPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_paniniProjectionPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_paniniProjectionPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_scalingSetupPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_scalingSetupPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_stopNanPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_stopNanPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_subpixelMorphologicalAntialiasingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_subpixelMorphologicalAntialiasingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_uberPostPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_uberPostPS();

  constexpr void __cordl_internal_set_LensFlareDataDrivenPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_bloomPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_bokehDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_cameraMotionBlurPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_easuPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_finalPostPassPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_gaussianDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_lutBuilderHdrPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_lutBuilderLdrPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_paniniProjectionPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_scalingSetupPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_stopNanPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_uberPostPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2c59ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessData__ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessData__ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessData__ShaderResources(__PostProcessData__ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessData__ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessData__ShaderResources(__PostProcessData__ShaderResources const&) = delete;

  /// @brief Field stopNanPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___stopNanPS;

  /// @brief Field subpixelMorphologicalAntialiasingPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___subpixelMorphologicalAntialiasingPS;

  /// @brief Field gaussianDepthOfFieldPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___gaussianDepthOfFieldPS;

  /// @brief Field bokehDepthOfFieldPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___bokehDepthOfFieldPS;

  /// @brief Field cameraMotionBlurPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___cameraMotionBlurPS;

  /// @brief Field paniniProjectionPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___paniniProjectionPS;

  /// @brief Field lutBuilderLdrPS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___lutBuilderLdrPS;

  /// @brief Field lutBuilderHdrPS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___lutBuilderHdrPS;

  /// @brief Field bloomPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___bloomPS;

  /// @brief Field LensFlareDataDrivenPS, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___LensFlareDataDrivenPS;

  /// @brief Field scalingSetupPS, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___scalingSetupPS;

  /// @brief Field easuPS, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___easuPS;

  /// @brief Field uberPostPS, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___uberPostPS;

  /// @brief Field finalPostPassPS, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___finalPostPassPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___stopNanPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___subpixelMorphologicalAntialiasingPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___gaussianDepthOfFieldPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___bokehDepthOfFieldPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___cameraMotionBlurPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___paniniProjectionPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___lutBuilderLdrPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___lutBuilderHdrPS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___bloomPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___LensFlareDataDrivenPS) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___scalingSetupPS) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___easuPS) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___uberPostPS) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources, ___finalPostPassPS) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::TextureResources
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::PostProcessData::TextureResources*
class CORDL_TYPE __PostProcessData__TextureResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field blueNoise16LTex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blueNoise16LTex,
                      put = __cordl_internal_set_blueNoise16LTex))::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> blueNoise16LTex;

  /// @brief Field filmGrainTex, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_filmGrainTex,
                      put = __cordl_internal_set_filmGrainTex))::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> filmGrainTex;

  /// @brief Field smaaAreaTex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_smaaAreaTex, put = __cordl_internal_set_smaaAreaTex))::UnityW<::UnityEngine::Texture2D> smaaAreaTex;

  /// @brief Field smaaSearchTex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_smaaSearchTex, put = __cordl_internal_set_smaaSearchTex))::UnityW<::UnityEngine::Texture2D> smaaSearchTex;

  static inline ::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_blueNoise16LTex() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_blueNoise16LTex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_filmGrainTex() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_filmGrainTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_smaaAreaTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_smaaAreaTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_smaaSearchTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_smaaSearchTex();

  constexpr void __cordl_internal_set_blueNoise16LTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_filmGrainTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_smaaAreaTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_smaaSearchTex(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x2c59cf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessData__TextureResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessData__TextureResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessData__TextureResources(__PostProcessData__TextureResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessData__TextureResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessData__TextureResources(__PostProcessData__TextureResources const&) = delete;

  /// @brief Field blueNoise16LTex, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___blueNoise16LTex;

  /// @brief Field filmGrainTex, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___filmGrainTex;

  /// @brief Field smaaAreaTex, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___smaaAreaTex;

  /// @brief Field smaaSearchTex, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___smaaSearchTex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources, ___blueNoise16LTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources, ___filmGrainTex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources, ___smaaAreaTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources, ___smaaSearchTex) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::PostProcessData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PostProcessData*
class CORDL_TYPE PostProcessData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources;

  using TextureResources = ::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources;

  /// @brief Field shaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders))::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources* shaders;

  /// @brief Field textures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_textures, put = __cordl_internal_set_textures))::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources* textures;

  static inline ::UnityEngine::Rendering::Universal::PostProcessData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources*& __cordl_internal_get_shaders();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources*> const& __cordl_internal_get_shaders() const;

  constexpr ::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources*& __cordl_internal_get_textures();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources*> const& __cordl_internal_get_textures() const;

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources* value);

  constexpr void __cordl_internal_set_textures(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources* value);

  /// @brief Method .ctor, addr 0x2c59ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessData(PostProcessData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessData(PostProcessData const&) = delete;

  /// @brief Field shaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources* ___shaders;

  /// @brief Field textures, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources* ___textures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData, ___shaders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData, ___textures) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessData*, "UnityEngine.Rendering.Universal", "PostProcessData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__PostProcessData__ShaderResources*, "UnityEngine.Rendering.Universal", "PostProcessData/ShaderResources");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__PostProcessData__TextureResources*, "UnityEngine.Rendering.Universal", "PostProcessData/TextureResources");
