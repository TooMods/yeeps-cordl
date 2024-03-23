#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__FastMemoryDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureSizeMode_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureDesc)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct FastMemoryDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureSizeMode;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::TextureDesc
// SizeInfo { instance_size: 120, native_size: 144, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::TextureDesc
struct CORDL_TYPE TextureDesc {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x1bcce28, size 0x11c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InitDefaultValues, addr 0x1bccc88, size 0xc4, virtual false, abstract: false, final false
  inline void InitDefaultValues(bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x1bccdcc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ScaleFunc* func, bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x1bcce14, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc input);

  /// @brief Method .ctor, addr 0x1bccd84, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 scale, bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x1bccd4c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, bool dynamicResolution, bool xrReady);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureDesc();

  // Ctor Parameters [CppParam { name: "sizeMode", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode", modifiers: "", def_value: None }, CppParam { name: "width", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "slices", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "func", ty: "::UnityEngine::Rendering::ScaleFunc*", modifiers: "", def_value: None },
  // CppParam { name: "depthBufferBits", ty: "::UnityEngine::Rendering::DepthBits", modifiers: "", def_value: None }, CppParam { name: "colorFormat", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "filterMode", ty: "::UnityEngine::FilterMode", modifiers: "", def_value: None },
  // CppParam { name: "wrapMode", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: None }, CppParam { name: "dimension", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "",
  // def_value: None }, CppParam { name: "enableRandomWrite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useMipMap", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "autoGenerateMips", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isShadowMap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "anisoLevel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "mipMapBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "msaaSamples", ty: "::UnityEngine::Rendering::MSAASamples",
  // modifiers: "", def_value: None }, CppParam { name: "bindTextureMS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useDynamicScale", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "memoryless", ty: "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "fastMemoryDesc", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc", modifiers: "", def_value: None }, CppParam { name: "fallBackToBlackTexture", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "clearBuffer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }]
  constexpr TextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode, int32_t width, int32_t height, int32_t slices, ::UnityEngine::Vector2 scale,
                        ::UnityEngine::Rendering::ScaleFunc* func, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                        ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                        bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                        ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name, ::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc,
                        bool fallBackToBlackTexture, bool clearBuffer, ::UnityEngine::Color clearColor) noexcept;

  /// @brief Field sizeMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode;

  /// @brief Field width, offset: 0x4, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x8, size: 0x4, def value: None
  int32_t height;

  /// @brief Field slices, offset: 0xc, size: 0x4, def value: None
  int32_t slices;

  /// @brief Field scale, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 scale;

  /// @brief Field func, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScaleFunc* func;

  /// @brief Field depthBufferBits, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::DepthBits depthBufferBits;

  /// @brief Field colorFormat, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat;

  /// @brief Field filterMode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::FilterMode filterMode;

  /// @brief Field wrapMode, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::TextureWrapMode wrapMode;

  /// @brief Field dimension, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension dimension;

  /// @brief Field enableRandomWrite, offset: 0x34, size: 0x1, def value: None
  bool enableRandomWrite;

  /// @brief Field useMipMap, offset: 0x35, size: 0x1, def value: None
  bool useMipMap;

  /// @brief Field autoGenerateMips, offset: 0x36, size: 0x1, def value: None
  bool autoGenerateMips;

  /// @brief Field isShadowMap, offset: 0x37, size: 0x1, def value: None
  bool isShadowMap;

  /// @brief Field anisoLevel, offset: 0x38, size: 0x4, def value: None
  int32_t anisoLevel;

  /// @brief Field mipMapBias, offset: 0x3c, size: 0x4, def value: None
  float_t mipMapBias;

  /// @brief Field msaaSamples, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Rendering::MSAASamples msaaSamples;

  /// @brief Field bindTextureMS, offset: 0x44, size: 0x1, def value: None
  bool bindTextureMS;

  /// @brief Field useDynamicScale, offset: 0x45, size: 0x1, def value: None
  bool useDynamicScale;

  /// @brief Field memoryless, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::RenderTextureMemoryless memoryless;

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field fastMemoryDesc, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc;

  /// @brief Field fallBackToBlackTexture, offset: 0x64, size: 0x1, def value: None
  bool fallBackToBlackTexture;

  /// @brief Field clearBuffer, offset: 0x65, size: 0x1, def value: None
  bool clearBuffer;

  /// @brief Field clearColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color clearColor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, sizeMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, width) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, height) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, slices) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, func) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, depthBufferBits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, colorFormat) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, filterMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, wrapMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, dimension) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, enableRandomWrite) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, useMipMap) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, autoGenerateMips) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, isShadowMap) == 0x37, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, anisoLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, mipMapBias) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, msaaSamples) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, bindTextureMS) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, useDynamicScale) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, memoryless) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, fastMemoryDesc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, fallBackToBlackTexture) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, clearBuffer) == 0x65, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, clearColor) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureDesc");
