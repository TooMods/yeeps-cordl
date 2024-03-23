#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Blitter)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
class __Blitter__BlitShaderIDs;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::Rendering {
class Blitter;
}
namespace UnityEngine::Rendering {
class __Blitter__BlitShaderIDs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Blitter);
MARK_REF_PTR_T(::UnityEngine::Rendering::__Blitter__BlitShaderIDs);
// Type: ::BlitShaderIDs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::Blitter::BlitShaderIDs*
class CORDL_TYPE __Blitter__BlitShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _BlitCubeTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitCubeTexture, put = setStaticF__BlitCubeTexture)) int32_t _BlitCubeTexture;

  /// @brief Field _BlitMipLevel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitMipLevel, put = setStaticF__BlitMipLevel)) int32_t _BlitMipLevel;

  /// @brief Field _BlitPaddingSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitPaddingSize, put = setStaticF__BlitPaddingSize)) int32_t _BlitPaddingSize;

  /// @brief Field _BlitScaleBias, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitScaleBias, put = setStaticF__BlitScaleBias)) int32_t _BlitScaleBias;

  /// @brief Field _BlitScaleBiasRt, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitScaleBiasRt, put = setStaticF__BlitScaleBiasRt)) int32_t _BlitScaleBiasRt;

  /// @brief Field _BlitTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitTexture, put = setStaticF__BlitTexture)) int32_t _BlitTexture;

  /// @brief Field _BlitTextureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BlitTextureSize, put = setStaticF__BlitTextureSize)) int32_t _BlitTextureSize;

  /// @brief Field _InputDepth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__InputDepth, put = setStaticF__InputDepth)) int32_t _InputDepth;

  static inline int32_t getStaticF__BlitCubeTexture();

  static inline int32_t getStaticF__BlitMipLevel();

  static inline int32_t getStaticF__BlitPaddingSize();

  static inline int32_t getStaticF__BlitScaleBias();

  static inline int32_t getStaticF__BlitScaleBiasRt();

  static inline int32_t getStaticF__BlitTexture();

  static inline int32_t getStaticF__BlitTextureSize();

  static inline int32_t getStaticF__InputDepth();

  static inline void setStaticF__BlitCubeTexture(int32_t value);

  static inline void setStaticF__BlitMipLevel(int32_t value);

  static inline void setStaticF__BlitPaddingSize(int32_t value);

  static inline void setStaticF__BlitScaleBias(int32_t value);

  static inline void setStaticF__BlitScaleBiasRt(int32_t value);

  static inline void setStaticF__BlitTexture(int32_t value);

  static inline void setStaticF__BlitTextureSize(int32_t value);

  static inline void setStaticF__InputDepth(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Blitter__BlitShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Blitter__BlitShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Blitter__BlitShaderIDs(__Blitter__BlitShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Blitter__BlitShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Blitter__BlitShaderIDs(__Blitter__BlitShaderIDs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__Blitter__BlitShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::Blitter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::Blitter*
class CORDL_TYPE Blitter : public ::System::Object {
public:
  // Declarations
  using BlitShaderIDs = ::UnityEngine::Rendering::__Blitter__BlitShaderIDs;

  /// @brief Field s_Blit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Blit, put = setStaticF_s_Blit))::UnityW<::UnityEngine::Material> s_Blit;

  /// @brief Field s_BlitColorAndDepth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BlitColorAndDepth, put = setStaticF_s_BlitColorAndDepth))::UnityW<::UnityEngine::Material> s_BlitColorAndDepth;

  /// @brief Field s_BlitTexArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BlitTexArray, put = setStaticF_s_BlitTexArray))::UnityW<::UnityEngine::Material> s_BlitTexArray;

  /// @brief Field s_BlitTexArraySingleSlice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BlitTexArraySingleSlice, put = setStaticF_s_BlitTexArraySingleSlice))::UnityW<::UnityEngine::Material> s_BlitTexArraySingleSlice;

  /// @brief Field s_PropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PropertyBlock, put = setStaticF_s_PropertyBlock))::UnityEngine::MaterialPropertyBlock* s_PropertyBlock;

  /// @brief Field s_QuadMesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_QuadMesh, put = setStaticF_s_QuadMesh))::UnityW<::UnityEngine::Mesh> s_QuadMesh;

  /// @brief Field s_TriangleMesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TriangleMesh, put = setStaticF_s_TriangleMesh))::UnityW<::UnityEngine::Mesh> s_TriangleMesh;

  /// @brief Method BlitCameraTexture, addr 0x17c8d70, size 0x154, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Rect destViewport, float_t mipLevel, bool bilinear);

  /// @brief Method BlitCameraTexture, addr 0x17c8b64, size 0x114, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitCameraTexture, addr 0x17c8888, size 0x11c, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, float_t mipLevel,
                                       bool bilinear);

  /// @brief Method BlitCameraTexture, addr 0x17c8c78, size 0xf8, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitCameraTexture2D, addr 0x17c8a48, size 0x11c, virtual false, abstract: false, final false
  static inline void BlitCameraTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, float_t mipLevel,
                                         bool bilinear);

  /// @brief Method BlitColorAndDepth, addr 0x17c869c, size 0x1ec, virtual false, abstract: false, final false
  static inline void BlitColorAndDepth(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* sourceColor, ::UnityEngine::RenderTexture* sourceDepth, ::UnityEngine::Vector4 scaleBias,
                                       float_t mipLevel, bool blitDepth);

  /// @brief Method BlitCubeToOctahedral2DQuad, addr 0x17c97ec, size 0x198, virtual false, abstract: false, final false
  static inline void BlitCubeToOctahedral2DQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex);

  /// @brief Method BlitCubeToOctahedral2DQuadSingleChannel, addr 0x17c9984, size 0x270, virtual false, abstract: false, final false
  static inline void BlitCubeToOctahedral2DQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex);

  /// @brief Method BlitOctahedralWithPadding, addr 0x17c93bc, size 0x218, virtual false, abstract: false, final false
  static inline void BlitOctahedralWithPadding(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                               ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitOctahedralWithPaddingMultiply, addr 0x17c95d4, size 0x218, virtual false, abstract: false, final false
  static inline void BlitOctahedralWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize,
                                                       ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitQuad, addr 0x17c3a0c, size 0x1dc, virtual false, abstract: false, final false
  static inline void BlitQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT,
                              int32_t mipLevelTex, bool bilinear);

  /// @brief Method BlitQuadSingleChannel, addr 0x17c9bf4, size 0x290, virtual false, abstract: false, final false
  static inline void BlitQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT,
                                           int32_t mipLevelTex);

  /// @brief Method BlitQuadWithPadding, addr 0x17c8ec4, size 0x27c, virtual false, abstract: false, final false
  static inline void BlitQuadWithPadding(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                         ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitQuadWithPaddingMultiply, addr 0x17c9140, size 0x27c, virtual false, abstract: false, final false
  static inline void BlitQuadWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                                 ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitTexture, addr 0x17c8434, size 0x138, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material,
                                 int32_t pass);

  /// @brief Method BlitTexture, addr 0x17c82e0, size 0x154, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitTexture2D, addr 0x17c856c, size 0x130, virtual false, abstract: false, final false
  static inline void BlitTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method Cleanup, addr 0x17c7dd0, size 0xa4, virtual false, abstract: false, final false
  static inline void Cleanup();

  /// @brief Method DrawQuad, addr 0x17c8138, size 0x1a8, virtual false, abstract: false, final false
  static inline void DrawQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method DrawTriangle, addr 0x17c7f90, size 0x1a8, virtual false, abstract: false, final false
  static inline void DrawTriangle(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method GetBlitMaterial, addr 0x17c7efc, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::Rendering::TextureDimension dimension, bool singleSlice);

  /// @brief Method Initialize, addr 0x17c75d8, size 0x410, virtual false, abstract: false, final false
  static inline void Initialize(::UnityEngine::Shader* blitPS, ::UnityEngine::Shader* blitColorAndDepthPS);

  /// @brief Method <Initialize>g__GetFullScreenTriangleTexCoord|8_1, addr 0x17c7b94, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _Initialize_g__GetFullScreenTriangleTexCoord_8_1();

  /// @brief Method <Initialize>g__GetFullScreenTriangleVertexPosition|8_0, addr 0x17c7ae0, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _Initialize_g__GetFullScreenTriangleVertexPosition_8_0(float_t z);

  /// @brief Method <Initialize>g__GetQuadTexCoord|8_3, addr 0x17c7d0c, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _Initialize_g__GetQuadTexCoord_8_3();

  /// @brief Method <Initialize>g__GetQuadVertexPosition|8_2, addr 0x17c7c5c, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _Initialize_g__GetQuadVertexPosition_8_2(float_t z);

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_Blit();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitColorAndDepth();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArray();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArraySingleSlice();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_PropertyBlock();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_QuadMesh();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_TriangleMesh();

  static inline void setStaticF_s_Blit(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitColorAndDepth(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitTexArray(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitTexArraySingleSlice(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF_s_QuadMesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF_s_TriangleMesh(::UnityW<::UnityEngine::Mesh> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Blitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Blitter(Blitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Blitter(Blitter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Blitter, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Blitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Blitter*, "UnityEngine.Rendering", "Blitter");
NEED_NO_BOX(::UnityEngine::Rendering::__Blitter__BlitShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__Blitter__BlitShaderIDs*, "UnityEngine.Rendering", "Blitter/BlitShaderIDs");
