#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessUtils)
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class __PostProcessUtils__ShaderConstants;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessUtils;
}
namespace UnityEngine::Rendering::Universal {
class __PostProcessUtils__ShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__PostProcessUtils__ShaderConstants);
// Type: ::ShaderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::PostProcessUtils::ShaderConstants*
class CORDL_TYPE __PostProcessUtils__ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _BlueNoise_Texture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlueNoise_Texture, put = setStaticF__BlueNoise_Texture)) int32_t _BlueNoise_Texture;

  /// @brief Field _Dithering_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Dithering_Params, put = setStaticF__Dithering_Params)) int32_t _Dithering_Params;

  /// @brief Field _Grain_Params, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Grain_Params, put = setStaticF__Grain_Params)) int32_t _Grain_Params;

  /// @brief Field _Grain_Texture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Grain_Texture, put = setStaticF__Grain_Texture)) int32_t _Grain_Texture;

  /// @brief Field _Grain_TilingParams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__Grain_TilingParams, put = setStaticF__Grain_TilingParams)) int32_t _Grain_TilingParams;

  /// @brief Field _SourceSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SourceSize, put = setStaticF__SourceSize)) int32_t _SourceSize;

  static inline int32_t getStaticF__BlueNoise_Texture();

  static inline int32_t getStaticF__Dithering_Params();

  static inline int32_t getStaticF__Grain_Params();

  static inline int32_t getStaticF__Grain_Texture();

  static inline int32_t getStaticF__Grain_TilingParams();

  static inline int32_t getStaticF__SourceSize();

  static inline void setStaticF__BlueNoise_Texture(int32_t value);

  static inline void setStaticF__Dithering_Params(int32_t value);

  static inline void setStaticF__Grain_Params(int32_t value);

  static inline void setStaticF__Grain_Texture(int32_t value);

  static inline void setStaticF__Grain_TilingParams(int32_t value);

  static inline void setStaticF__SourceSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostProcessUtils__ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessUtils__ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PostProcessUtils__ShaderConstants(__PostProcessUtils__ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PostProcessUtils__ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PostProcessUtils__ShaderConstants(__PostProcessUtils__ShaderConstants const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__PostProcessUtils__ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::PostProcessUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PostProcessUtils*
class CORDL_TYPE PostProcessUtils : public ::System::Object {
public:
  // Declarations
  using ShaderConstants = ::UnityEngine::Rendering::Universal::__PostProcessUtils__ShaderConstants;

  /// @brief Method ConfigureDithering, addr 0x2728d08, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, ::UnityEngine::Camera* camera, ::UnityEngine::Material* material);

  /// @brief Method ConfigureDithering, addr 0x2728d6c, size 0x164, virtual false, abstract: false, final false
  static inline int32_t ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, int32_t cameraPixelWidth, int32_t cameraPixelHeight,
                                           ::UnityEngine::Material* material);

  /// @brief Method ConfigureFilmGrain, addr 0x2728ed0, size 0x64, virtual false, abstract: false, final false
  static inline void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Rendering::Universal::FilmGrain* settings, ::UnityEngine::Camera* camera,
                                        ::UnityEngine::Material* material);

  /// @brief Method ConfigureFilmGrain, addr 0x2728f34, size 0x274, virtual false, abstract: false, final false
  static inline void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Rendering::Universal::FilmGrain* settings, int32_t cameraPixelWidth,
                                        int32_t cameraPixelHeight, ::UnityEngine::Material* material);

  /// @brief Method SetSourceSize, addr 0x27291a8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetSourceSize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor desc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessUtils(PostProcessUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessUtils(PostProcessUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessUtils*, "UnityEngine.Rendering.Universal", "PostProcessUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__PostProcessUtils__ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__PostProcessUtils__ShaderConstants*, "UnityEngine.Rendering.Universal", "PostProcessUtils/ShaderConstants");
