#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandles)
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
struct RTHandleProperties;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RTHandles;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RTHandles);
// Type: UnityEngine.Rendering::RTHandles
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RTHandles*
class CORDL_TYPE RTHandles : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultInstance, put = setStaticF_s_DefaultInstance))::UnityEngine::Rendering::RTHandleSystem* s_DefaultInstance;

  /// @brief Method Alloc, addr 0x1a08f74, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a093b0, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a09760, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* tex);

  /// @brief Method Alloc, addr 0x1a09af0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* tex);

  /// @brief Method Alloc, addr 0x1a09894, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex);

  /// @brief Method Alloc, addr 0x1a0999c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex, ::StringW name);

  /// @brief Method Alloc, addr 0x1a0962c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* tex);

  /// @brief Method Alloc, addr 0x19fec90, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method Alloc, addr 0x1a088ac, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                          ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                          int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                          ::UnityEngine::RenderTextureMemoryless memoryless, ::StringW name);

  /// @brief Method CalculateRatioAgainstMaxSize, addr 0x1a0a15c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateRatioAgainstMaxSize(int32_t width, int32_t height);

  /// @brief Method Initialize, addr 0x1a09b60, size 0x78, virtual false, abstract: false, final false
  static inline void Initialize(int32_t width, int32_t height);

  /// @brief Method Release, addr 0x19fee88, size 0x78, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method ResetReferenceSize, addr 0x1a0a0dc, size 0x80, virtual false, abstract: false, final false
  static inline void ResetReferenceSize(int32_t width, int32_t height);

  /// @brief Method SetHardwareDynamicResolutionState, addr 0x1a09e84, size 0x68, virtual false, abstract: false, final false
  static inline void SetHardwareDynamicResolutionState(bool hwDynamicResRequested);

  /// @brief Method SetReferenceSize, addr 0x1a0a060, size 0x7c, virtual false, abstract: false, final false
  static inline void SetReferenceSize(int32_t width, int32_t height);

  static inline ::UnityEngine::Rendering::RTHandleSystem* getStaticF_s_DefaultInstance();

  /// @brief Method get_maxHeight, addr 0x1a08728, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_maxHeight();

  /// @brief Method get_maxWidth, addr 0x1a086c4, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_maxWidth();

  /// @brief Method get_rtHandleProperties, addr 0x1a0878c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();

  static inline void setStaticF_s_DefaultInstance(::UnityEngine::Rendering::RTHandleSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandles(RTHandles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandles(RTHandles const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandles, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RTHandles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandles*, "UnityEngine.Rendering", "RTHandles");
