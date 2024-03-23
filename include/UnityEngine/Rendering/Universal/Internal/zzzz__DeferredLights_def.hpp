#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredTiler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredLights)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct BitArray;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredTiler;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__CullLightsJob;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__DrawCall;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__InitParams;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __DeferredLights__ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__StencilDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__TileDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__PrePunctualLight;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct MixedLightingSetup;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__StencilDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__TileDeferredPasses;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __DeferredLights__ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__CullLightsJob;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__DrawCall;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredLights__InitParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredLights);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams);
// Type: ::ShaderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::DeferredLights::ShaderConstants*
class CORDL_TYPE __DeferredLights__ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field UDepthRanges, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UDepthRanges, put = setStaticF_UDepthRanges)) int32_t UDepthRanges;

  /// @brief Field UPunctualLightBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UPunctualLightBuffer, put = setStaticF_UPunctualLightBuffer)) int32_t UPunctualLightBuffer;

  /// @brief Field URelLightList, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_URelLightList, put = setStaticF_URelLightList)) int32_t URelLightList;

  /// @brief Field UTileList, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UTileList, put = setStaticF_UTileList)) int32_t UTileList;

  /// @brief Field _BitmaskTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__BitmaskTex, put = setStaticF__BitmaskTex)) int32_t _BitmaskTex;

  /// @brief Field _ClearStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ClearStencilReadMask, put = setStaticF__ClearStencilReadMask)) int32_t _ClearStencilReadMask;

  /// @brief Field _ClearStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ClearStencilRef, put = setStaticF__ClearStencilRef)) int32_t _ClearStencilRef;

  /// @brief Field _ClearStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ClearStencilWriteMask, put = setStaticF__ClearStencilWriteMask)) int32_t _ClearStencilWriteMask;

  /// @brief Field _CookieLightIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__CookieLightIndex, put = setStaticF__CookieLightIndex)) int32_t _CookieLightIndex;

  /// @brief Field _DepthRangeOffset, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DepthRangeOffset, put = setStaticF__DepthRangeOffset)) int32_t _DepthRangeOffset;

  /// @brief Field _DepthRanges, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DepthRanges, put = setStaticF__DepthRanges)) int32_t _DepthRanges;

  /// @brief Field _DepthTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DepthTex, put = setStaticF__DepthTex)) int32_t _DepthTex;

  /// @brief Field _DepthTexSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DepthTexSize, put = setStaticF__DepthTexSize)) int32_t _DepthTexSize;

  /// @brief Field _DownsamplingHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DownsamplingHeight, put = setStaticF__DownsamplingHeight)) int32_t _DownsamplingHeight;

  /// @brief Field _DownsamplingWidth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__DownsamplingWidth, put = setStaticF__DownsamplingWidth)) int32_t _DownsamplingWidth;

  /// @brief Field _InstanceOffset, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__InstanceOffset, put = setStaticF__InstanceOffset)) int32_t _InstanceOffset;

  /// @brief Field _LightAttenuation, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightAttenuation, put = setStaticF__LightAttenuation)) int32_t _LightAttenuation;

  /// @brief Field _LightColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightColor, put = setStaticF__LightColor)) int32_t _LightColor;

  /// @brief Field _LightDirection, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightDirection, put = setStaticF__LightDirection)) int32_t _LightDirection;

  /// @brief Field _LightFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightFlags, put = setStaticF__LightFlags)) int32_t _LightFlags;

  /// @brief Field _LightLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightLayerMask, put = setStaticF__LightLayerMask)) int32_t _LightLayerMask;

  /// @brief Field _LightOcclusionProbInfo, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightOcclusionProbInfo, put = setStaticF__LightOcclusionProbInfo)) int32_t _LightOcclusionProbInfo;

  /// @brief Field _LightPosWS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LightPosWS, put = setStaticF__LightPosWS)) int32_t _LightPosWS;

  /// @brief Field _LitDirStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitDirStencilReadMask, put = setStaticF__LitDirStencilReadMask)) int32_t _LitDirStencilReadMask;

  /// @brief Field _LitDirStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitDirStencilRef, put = setStaticF__LitDirStencilRef)) int32_t _LitDirStencilRef;

  /// @brief Field _LitDirStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitDirStencilWriteMask, put = setStaticF__LitDirStencilWriteMask)) int32_t _LitDirStencilWriteMask;

  /// @brief Field _LitPunctualStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitPunctualStencilReadMask, put = setStaticF__LitPunctualStencilReadMask)) int32_t _LitPunctualStencilReadMask;

  /// @brief Field _LitPunctualStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitPunctualStencilRef, put = setStaticF__LitPunctualStencilRef)) int32_t _LitPunctualStencilRef;

  /// @brief Field _LitPunctualStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitPunctualStencilWriteMask, put = setStaticF__LitPunctualStencilWriteMask)) int32_t _LitPunctualStencilWriteMask;

  /// @brief Field _LitStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitStencilReadMask, put = setStaticF__LitStencilReadMask)) int32_t _LitStencilReadMask;

  /// @brief Field _LitStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitStencilRef, put = setStaticF__LitStencilRef)) int32_t _LitStencilRef;

  /// @brief Field _LitStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__LitStencilWriteMask, put = setStaticF__LitStencilWriteMask)) int32_t _LitStencilWriteMask;

  /// @brief Field _MainLightColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightColor, put = setStaticF__MainLightColor)) int32_t _MainLightColor;

  /// @brief Field _MainLightLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightLayerMask, put = setStaticF__MainLightLayerMask)) int32_t _MainLightLayerMask;

  /// @brief Field _MainLightPosition, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightPosition, put = setStaticF__MainLightPosition)) int32_t _MainLightPosition;

  /// @brief Field _PunctualLightBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__PunctualLightBuffer, put = setStaticF__PunctualLightBuffer)) int32_t _PunctualLightBuffer;

  /// @brief Field _RelLightList, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__RelLightList, put = setStaticF__RelLightList)) int32_t _RelLightList;

  /// @brief Field _ScreenToWorld, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ScreenToWorld, put = setStaticF__ScreenToWorld)) int32_t _ScreenToWorld;

  /// @brief Field _ShadowLightIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ShadowLightIndex, put = setStaticF__ShadowLightIndex)) int32_t _ShadowLightIndex;

  /// @brief Field _SimpleLitDirStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitDirStencilReadMask, put = setStaticF__SimpleLitDirStencilReadMask)) int32_t _SimpleLitDirStencilReadMask;

  /// @brief Field _SimpleLitDirStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitDirStencilRef, put = setStaticF__SimpleLitDirStencilRef)) int32_t _SimpleLitDirStencilRef;

  /// @brief Field _SimpleLitDirStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitDirStencilWriteMask, put = setStaticF__SimpleLitDirStencilWriteMask)) int32_t _SimpleLitDirStencilWriteMask;

  /// @brief Field _SimpleLitPunctualStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitPunctualStencilReadMask, put = setStaticF__SimpleLitPunctualStencilReadMask)) int32_t _SimpleLitPunctualStencilReadMask;

  /// @brief Field _SimpleLitPunctualStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitPunctualStencilRef, put = setStaticF__SimpleLitPunctualStencilRef)) int32_t _SimpleLitPunctualStencilRef;

  /// @brief Field _SimpleLitPunctualStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitPunctualStencilWriteMask, put = setStaticF__SimpleLitPunctualStencilWriteMask)) int32_t _SimpleLitPunctualStencilWriteMask;

  /// @brief Field _SimpleLitStencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitStencilReadMask, put = setStaticF__SimpleLitStencilReadMask)) int32_t _SimpleLitStencilReadMask;

  /// @brief Field _SimpleLitStencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitStencilRef, put = setStaticF__SimpleLitStencilRef)) int32_t _SimpleLitStencilRef;

  /// @brief Field _SimpleLitStencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SimpleLitStencilWriteMask, put = setStaticF__SimpleLitStencilWriteMask)) int32_t _SimpleLitStencilWriteMask;

  /// @brief Field _SourceShiftX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SourceShiftX, put = setStaticF__SourceShiftX)) int32_t _SourceShiftX;

  /// @brief Field _SourceShiftY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SourceShiftY, put = setStaticF__SourceShiftY)) int32_t _SourceShiftY;

  /// @brief Field _SpotLightBias, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SpotLightBias, put = setStaticF__SpotLightBias)) int32_t _SpotLightBias;

  /// @brief Field _SpotLightGuard, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SpotLightGuard, put = setStaticF__SpotLightGuard)) int32_t _SpotLightGuard;

  /// @brief Field _SpotLightScale, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SpotLightScale, put = setStaticF__SpotLightScale)) int32_t _SpotLightScale;

  /// @brief Field _StencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__StencilReadMask, put = setStaticF__StencilReadMask)) int32_t _StencilReadMask;

  /// @brief Field _StencilRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__StencilRef, put = setStaticF__StencilRef)) int32_t _StencilRef;

  /// @brief Field _StencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__StencilWriteMask, put = setStaticF__StencilWriteMask)) int32_t _StencilWriteMask;

  /// @brief Field _TileList, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TileList, put = setStaticF__TileList)) int32_t _TileList;

  /// @brief Field _TilePixelHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TilePixelHeight, put = setStaticF__TilePixelHeight)) int32_t _TilePixelHeight;

  /// @brief Field _TilePixelWidth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TilePixelWidth, put = setStaticF__TilePixelWidth)) int32_t _TilePixelWidth;

  /// @brief Field _TileShiftX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TileShiftX, put = setStaticF__TileShiftX)) int32_t _TileShiftX;

  /// @brief Field _TileShiftY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TileShiftY, put = setStaticF__TileShiftY)) int32_t _TileShiftY;

  /// @brief Field _tileXCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tileXCount, put = setStaticF__tileXCount)) int32_t _tileXCount;

  /// @brief Field _unproject0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__unproject0, put = setStaticF__unproject0)) int32_t _unproject0;

  /// @brief Field _unproject1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__unproject1, put = setStaticF__unproject1)) int32_t _unproject1;

  static inline int32_t getStaticF_UDepthRanges();

  static inline int32_t getStaticF_UPunctualLightBuffer();

  static inline int32_t getStaticF_URelLightList();

  static inline int32_t getStaticF_UTileList();

  static inline int32_t getStaticF__BitmaskTex();

  static inline int32_t getStaticF__ClearStencilReadMask();

  static inline int32_t getStaticF__ClearStencilRef();

  static inline int32_t getStaticF__ClearStencilWriteMask();

  static inline int32_t getStaticF__CookieLightIndex();

  static inline int32_t getStaticF__DepthRangeOffset();

  static inline int32_t getStaticF__DepthRanges();

  static inline int32_t getStaticF__DepthTex();

  static inline int32_t getStaticF__DepthTexSize();

  static inline int32_t getStaticF__DownsamplingHeight();

  static inline int32_t getStaticF__DownsamplingWidth();

  static inline int32_t getStaticF__InstanceOffset();

  static inline int32_t getStaticF__LightAttenuation();

  static inline int32_t getStaticF__LightColor();

  static inline int32_t getStaticF__LightDirection();

  static inline int32_t getStaticF__LightFlags();

  static inline int32_t getStaticF__LightLayerMask();

  static inline int32_t getStaticF__LightOcclusionProbInfo();

  static inline int32_t getStaticF__LightPosWS();

  static inline int32_t getStaticF__LitDirStencilReadMask();

  static inline int32_t getStaticF__LitDirStencilRef();

  static inline int32_t getStaticF__LitDirStencilWriteMask();

  static inline int32_t getStaticF__LitPunctualStencilReadMask();

  static inline int32_t getStaticF__LitPunctualStencilRef();

  static inline int32_t getStaticF__LitPunctualStencilWriteMask();

  static inline int32_t getStaticF__LitStencilReadMask();

  static inline int32_t getStaticF__LitStencilRef();

  static inline int32_t getStaticF__LitStencilWriteMask();

  static inline int32_t getStaticF__MainLightColor();

  static inline int32_t getStaticF__MainLightLayerMask();

  static inline int32_t getStaticF__MainLightPosition();

  static inline int32_t getStaticF__PunctualLightBuffer();

  static inline int32_t getStaticF__RelLightList();

  static inline int32_t getStaticF__ScreenToWorld();

  static inline int32_t getStaticF__ShadowLightIndex();

  static inline int32_t getStaticF__SimpleLitDirStencilReadMask();

  static inline int32_t getStaticF__SimpleLitDirStencilRef();

  static inline int32_t getStaticF__SimpleLitDirStencilWriteMask();

  static inline int32_t getStaticF__SimpleLitPunctualStencilReadMask();

  static inline int32_t getStaticF__SimpleLitPunctualStencilRef();

  static inline int32_t getStaticF__SimpleLitPunctualStencilWriteMask();

  static inline int32_t getStaticF__SimpleLitStencilReadMask();

  static inline int32_t getStaticF__SimpleLitStencilRef();

  static inline int32_t getStaticF__SimpleLitStencilWriteMask();

  static inline int32_t getStaticF__SourceShiftX();

  static inline int32_t getStaticF__SourceShiftY();

  static inline int32_t getStaticF__SpotLightBias();

  static inline int32_t getStaticF__SpotLightGuard();

  static inline int32_t getStaticF__SpotLightScale();

  static inline int32_t getStaticF__StencilReadMask();

  static inline int32_t getStaticF__StencilRef();

  static inline int32_t getStaticF__StencilWriteMask();

  static inline int32_t getStaticF__TileList();

  static inline int32_t getStaticF__TilePixelHeight();

  static inline int32_t getStaticF__TilePixelWidth();

  static inline int32_t getStaticF__TileShiftX();

  static inline int32_t getStaticF__TileShiftY();

  static inline int32_t getStaticF__tileXCount();

  static inline int32_t getStaticF__unproject0();

  static inline int32_t getStaticF__unproject1();

  static inline void setStaticF_UDepthRanges(int32_t value);

  static inline void setStaticF_UPunctualLightBuffer(int32_t value);

  static inline void setStaticF_URelLightList(int32_t value);

  static inline void setStaticF_UTileList(int32_t value);

  static inline void setStaticF__BitmaskTex(int32_t value);

  static inline void setStaticF__ClearStencilReadMask(int32_t value);

  static inline void setStaticF__ClearStencilRef(int32_t value);

  static inline void setStaticF__ClearStencilWriteMask(int32_t value);

  static inline void setStaticF__CookieLightIndex(int32_t value);

  static inline void setStaticF__DepthRangeOffset(int32_t value);

  static inline void setStaticF__DepthRanges(int32_t value);

  static inline void setStaticF__DepthTex(int32_t value);

  static inline void setStaticF__DepthTexSize(int32_t value);

  static inline void setStaticF__DownsamplingHeight(int32_t value);

  static inline void setStaticF__DownsamplingWidth(int32_t value);

  static inline void setStaticF__InstanceOffset(int32_t value);

  static inline void setStaticF__LightAttenuation(int32_t value);

  static inline void setStaticF__LightColor(int32_t value);

  static inline void setStaticF__LightDirection(int32_t value);

  static inline void setStaticF__LightFlags(int32_t value);

  static inline void setStaticF__LightLayerMask(int32_t value);

  static inline void setStaticF__LightOcclusionProbInfo(int32_t value);

  static inline void setStaticF__LightPosWS(int32_t value);

  static inline void setStaticF__LitDirStencilReadMask(int32_t value);

  static inline void setStaticF__LitDirStencilRef(int32_t value);

  static inline void setStaticF__LitDirStencilWriteMask(int32_t value);

  static inline void setStaticF__LitPunctualStencilReadMask(int32_t value);

  static inline void setStaticF__LitPunctualStencilRef(int32_t value);

  static inline void setStaticF__LitPunctualStencilWriteMask(int32_t value);

  static inline void setStaticF__LitStencilReadMask(int32_t value);

  static inline void setStaticF__LitStencilRef(int32_t value);

  static inline void setStaticF__LitStencilWriteMask(int32_t value);

  static inline void setStaticF__MainLightColor(int32_t value);

  static inline void setStaticF__MainLightLayerMask(int32_t value);

  static inline void setStaticF__MainLightPosition(int32_t value);

  static inline void setStaticF__PunctualLightBuffer(int32_t value);

  static inline void setStaticF__RelLightList(int32_t value);

  static inline void setStaticF__ScreenToWorld(int32_t value);

  static inline void setStaticF__ShadowLightIndex(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitDirStencilWriteMask(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitPunctualStencilWriteMask(int32_t value);

  static inline void setStaticF__SimpleLitStencilReadMask(int32_t value);

  static inline void setStaticF__SimpleLitStencilRef(int32_t value);

  static inline void setStaticF__SimpleLitStencilWriteMask(int32_t value);

  static inline void setStaticF__SourceShiftX(int32_t value);

  static inline void setStaticF__SourceShiftY(int32_t value);

  static inline void setStaticF__SpotLightBias(int32_t value);

  static inline void setStaticF__SpotLightGuard(int32_t value);

  static inline void setStaticF__SpotLightScale(int32_t value);

  static inline void setStaticF__StencilReadMask(int32_t value);

  static inline void setStaticF__StencilRef(int32_t value);

  static inline void setStaticF__StencilWriteMask(int32_t value);

  static inline void setStaticF__TileList(int32_t value);

  static inline void setStaticF__TilePixelHeight(int32_t value);

  static inline void setStaticF__TilePixelWidth(int32_t value);

  static inline void setStaticF__TileShiftX(int32_t value);

  static inline void setStaticF__TileShiftY(int32_t value);

  static inline void setStaticF__tileXCount(int32_t value);

  static inline void setStaticF__unproject0(int32_t value);

  static inline void setStaticF__unproject1(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DeferredLights__ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeferredLights__ShaderConstants(__DeferredLights__ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeferredLights__ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeferredLights__ShaderConstants(__DeferredLights__ShaderConstants const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::CullLightsJob
// SizeInfo { instance_size: 192, native_size: 192, calculated_instance_size: 192, calculated_native_size: 204, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredLights::CullLightsJob
struct CORDL_TYPE __DeferredLights__CullLightsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2ad6cc4, size 0x58, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__CullLightsJob();

  // Ctor Parameters [CppParam { name: "tiler", ty: "::UnityEngine::Rendering::Universal::Internal::DeferredTiler", modifiers: "", def_value: None }, CppParam { name: "prePunctualLights", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>", modifiers: "", def_value: None }, CppParam { name: "coarseTiles", ty:
  // "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "coarseTileHeaders", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "coarseHeaderOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "istart", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "iend", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jstart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jend", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __DeferredLights__CullLightsJob(::UnityEngine::Rendering::Universal::Internal::DeferredTiler tiler,
                                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight> prePunctualLights,
                                            ::Unity::Collections::NativeArray_1<uint16_t> coarseTiles, ::Unity::Collections::NativeArray_1<uint32_t> coarseTileHeaders, int32_t coarseHeaderOffset,
                                            int32_t istart, int32_t iend, int32_t jstart, int32_t jend) noexcept;

  /// @brief Field tiler, offset: 0x0, size: 0x78, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredTiler tiler;

  /// @brief Field prePunctualLights, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight> prePunctualLights;

  /// @brief Field coarseTiles, offset: 0x88, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> coarseTiles;

  /// @brief Field coarseTileHeaders, offset: 0x98, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> coarseTileHeaders;

  /// @brief Field coarseHeaderOffset, offset: 0xa8, size: 0x4, def value: None
  int32_t coarseHeaderOffset;

  /// @brief Field istart, offset: 0xac, size: 0x4, def value: None
  int32_t istart;

  /// @brief Field iend, offset: 0xb0, size: 0x4, def value: None
  int32_t iend;

  /// @brief Field jstart, offset: 0xb4, size: 0x4, def value: None
  int32_t jstart;

  /// @brief Field jend, offset: 0xb8, size: 0x4, def value: None
  int32_t jend;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, tiler) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, prePunctualLights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, coarseTiles) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, coarseTileHeaders) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, coarseHeaderOffset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, istart) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, iend) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, jstart) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, jend) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::DrawCall
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredLights::DrawCall
struct CORDL_TYPE __DeferredLights__DrawCall {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__DrawCall();

  // Ctor Parameters [CppParam { name: "tileList", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "punctualLightBuffer", ty: "::UnityEngine::ComputeBuffer*",
  // modifiers: "", def_value: None }, CppParam { name: "relLightList", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "tileListSize", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "punctualLightBufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "relLightListSize", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "instanceOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeferredLights__DrawCall(::UnityEngine::ComputeBuffer* tileList, ::UnityEngine::ComputeBuffer* punctualLightBuffer, ::UnityEngine::ComputeBuffer* relLightList, int32_t tileListSize,
                                       int32_t punctualLightBufferSize, int32_t relLightListSize, int32_t instanceOffset, int32_t instanceCount) noexcept;

  /// @brief Field tileList, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* tileList;

  /// @brief Field punctualLightBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* punctualLightBuffer;

  /// @brief Field relLightList, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* relLightList;

  /// @brief Field tileListSize, offset: 0x18, size: 0x4, def value: None
  int32_t tileListSize;

  /// @brief Field punctualLightBufferSize, offset: 0x1c, size: 0x4, def value: None
  int32_t punctualLightBufferSize;

  /// @brief Field relLightListSize, offset: 0x20, size: 0x4, def value: None
  int32_t relLightListSize;

  /// @brief Field instanceOffset, offset: 0x24, size: 0x4, def value: None
  int32_t instanceOffset;

  /// @brief Field instanceCount, offset: 0x28, size: 0x4, def value: None
  int32_t instanceCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, tileList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, punctualLightBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, relLightList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, tileListSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, punctualLightBufferSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, relLightListSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, instanceOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, instanceCount) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::TileDeferredPasses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredLights::TileDeferredPasses
struct CORDL_TYPE __DeferredLights__TileDeferredPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeferredLights__TileDeferredPasses_Unwrapped
  enum struct ____DeferredLights__TileDeferredPasses_Unwrapped : int32_t {
    __E_PunctualLit = static_cast<int32_t>(0x0),
    __E_PunctualSimpleLit = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeferredLights__TileDeferredPasses_Unwrapped() const noexcept {
    return static_cast<____DeferredLights__TileDeferredPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__TileDeferredPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeferredLights__TileDeferredPasses(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PunctualLit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses const PunctualLit;

  /// @brief Field PunctualSimpleLit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses const PunctualSimpleLit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::StencilDeferredPasses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredLights::StencilDeferredPasses
struct CORDL_TYPE __DeferredLights__StencilDeferredPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeferredLights__StencilDeferredPasses_Unwrapped
  enum struct ____DeferredLights__StencilDeferredPasses_Unwrapped : int32_t {
    __E_StencilVolume = static_cast<int32_t>(0x0),
    __E_PunctualLit = static_cast<int32_t>(0x1),
    __E_PunctualSimpleLit = static_cast<int32_t>(0x2),
    __E_DirectionalLit = static_cast<int32_t>(0x3),
    __E_DirectionalSimpleLit = static_cast<int32_t>(0x4),
    __E_ClearStencilPartial = static_cast<int32_t>(0x5),
    __E_Fog = static_cast<int32_t>(0x6),
    __E_SSAOOnly = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeferredLights__StencilDeferredPasses_Unwrapped() const noexcept {
    return static_cast<____DeferredLights__StencilDeferredPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__StencilDeferredPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeferredLights__StencilDeferredPasses(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClearStencilPartial value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const ClearStencilPartial;

  /// @brief Field DirectionalLit value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const DirectionalLit;

  /// @brief Field DirectionalSimpleLit value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const DirectionalSimpleLit;

  /// @brief Field Fog value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const Fog;

  /// @brief Field PunctualLit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const PunctualLit;

  /// @brief Field PunctualSimpleLit value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const PunctualSimpleLit;

  /// @brief Field SSAOOnly value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const SSAOOnly;

  /// @brief Field StencilVolume value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses const StencilVolume;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::InitParams
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredLights::InitParams
struct CORDL_TYPE __DeferredLights__InitParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredLights__InitParams();

  // Ctor Parameters [CppParam { name: "tileDepthInfoMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "tileDeferredMaterial", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None },
  // CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None }]
  constexpr __DeferredLights__InitParams(::UnityW<::UnityEngine::Material> tileDepthInfoMaterial, ::UnityW<::UnityEngine::Material> tileDeferredMaterial,
                                         ::UnityW<::UnityEngine::Material> stencilDeferredMaterial, ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager) noexcept;

  /// @brief Field tileDepthInfoMaterial, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> tileDepthInfoMaterial;

  /// @brief Field tileDeferredMaterial, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> tileDeferredMaterial;

  /// @brief Field stencilDeferredMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> stencilDeferredMaterial;

  /// @brief Field lightCookieManager, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, tileDepthInfoMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, tileDeferredMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, stencilDeferredMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, lightCookieManager) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::DeferredLights
// SizeInfo { instance_size: 696, native_size: -1, calculated_instance_size: 696, calculated_native_size: 696, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DeferredLights*
class CORDL_TYPE DeferredLights : public ::System::Object {
public:
  // Declarations
  using CullLightsJob = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob;

  using DrawCall = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall;

  using InitParams = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants;

  using StencilDeferredPasses = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses;

  using TileDeferredPasses = ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses;

  __declspec(property(get = get_AccurateGbufferNormals, put = set_AccurateGbufferNormals)) bool AccurateGbufferNormals;

  __declspec(
      property(get = get_DeferredInputAttachments,
               put = set_DeferredInputAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> DeferredInputAttachments;

  __declspec(property(get = get_DeferredInputIsTransient, put = set_DeferredInputIsTransient))::ArrayW<bool, ::Array<bool>*> DeferredInputIsTransient;

  __declspec(property(get = get_DepthAttachment, put = set_DepthAttachment))::UnityEngine::Rendering::Universal::RenderTargetHandle DepthAttachment;

  __declspec(property(get = get_DepthAttachmentIdentifier, put = set_DepthAttachmentIdentifier))::UnityEngine::Rendering::RenderTargetIdentifier DepthAttachmentIdentifier;

  __declspec(property(get = get_DepthCopyTexture, put = set_DepthCopyTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle DepthCopyTexture;

  __declspec(property(get = get_DepthCopyTextureIdentifier, put = set_DepthCopyTextureIdentifier))::UnityEngine::Rendering::RenderTargetIdentifier DepthCopyTextureIdentifier;

  __declspec(property(get = get_DepthInfoTexture, put = set_DepthInfoTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle DepthInfoTexture;

  __declspec(property(get = get_DepthInfoTextureIdentifier, put = set_DepthInfoTextureIdentifier))::UnityEngine::Rendering::RenderTargetIdentifier DepthInfoTextureIdentifier;

  __declspec(property(get = get_GBufferAlbedoIndex)) int32_t GBufferAlbedoIndex;

  __declspec(property(get = get_GBufferLightingIndex)) int32_t GBufferLightingIndex;

  __declspec(property(get = get_GBufferNormalSmoothnessIndex)) int32_t GBufferNormalSmoothnessIndex;

  __declspec(property(get = get_GBufferRenderingLayers)) int32_t GBufferRenderingLayers;

  __declspec(property(get = get_GBufferShadowMask)) int32_t GBufferShadowMask;

  __declspec(property(get = get_GBufferSliceCount)) int32_t GBufferSliceCount;

  __declspec(property(get = get_GBufferSpecularMetallicIndex)) int32_t GBufferSpecularMetallicIndex;

  __declspec(property(
      get = get_GbufferAttachmentIdentifiers,
      put = set_GbufferAttachmentIdentifiers))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> GbufferAttachmentIdentifiers;

  __declspec(
      property(get = get_GbufferAttachments,
               put = set_GbufferAttachments))::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> GbufferAttachments;

  __declspec(property(get = get_GbufferDepthIndex)) int32_t GbufferDepthIndex;

  __declspec(property(get = get_GbufferFormats,
                      put = set_GbufferFormats))::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> GbufferFormats;

  __declspec(property(get = get_HasDepthPrepass, put = set_HasDepthPrepass)) bool HasDepthPrepass;

  __declspec(property(get = get_HasNormalPrepass, put = set_HasNormalPrepass)) bool HasNormalPrepass;

  __declspec(property(get = get_IsOverlay, put = set_IsOverlay)) bool IsOverlay;

  __declspec(property(get = get_MixedLightingSetup, put = set_MixedLightingSetup))::UnityEngine::Rendering::Universal::MixedLightingSetup MixedLightingSetup;

  __declspec(property(get = get_RenderHeight, put = set_RenderHeight)) int32_t RenderHeight;

  __declspec(property(get = get_RenderWidth, put = set_RenderWidth)) int32_t RenderWidth;

  __declspec(property(get = get_TileDepthInfoTexture, put = set_TileDepthInfoTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle TileDepthInfoTexture;

  __declspec(property(get = get_TileDepthInfoTextureIdentifier, put = set_TileDepthInfoTextureIdentifier))::UnityEngine::Rendering::RenderTargetIdentifier TileDepthInfoTextureIdentifier;

  __declspec(property(get = get_TiledDeferredShading, put = set_TiledDeferredShading)) bool TiledDeferredShading;

  __declspec(property(get = get_UseJobSystem, put = set_UseJobSystem)) bool UseJobSystem;

  __declspec(property(get = get_UseRenderPass, put = set_UseRenderPass)) bool UseRenderPass;

  __declspec(property(get = get_UseRenderingLayers)) bool UseRenderingLayers;

  __declspec(property(get = get_UseShadowMask)) bool UseShadowMask;

  /// @brief Field <DeferredInputAttachments>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__DeferredInputAttachments_k__BackingField, put = __cordl_internal_set__DeferredInputAttachments_k__BackingField))::ArrayW<
      ::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> _DeferredInputAttachments_k__BackingField;

  /// @brief Field <DeferredInputIsTransient>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__DeferredInputIsTransient_k__BackingField,
                      put = __cordl_internal_set__DeferredInputIsTransient_k__BackingField))::ArrayW<bool, ::Array<bool>*> _DeferredInputIsTransient_k__BackingField;

  /// @brief Field <DepthAttachmentIdentifier>k__BackingField, offset 0x110, size 0x28
  __declspec(property(get = __cordl_internal_get__DepthAttachmentIdentifier_k__BackingField,
                      put = __cordl_internal_set__DepthAttachmentIdentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _DepthAttachmentIdentifier_k__BackingField;

  /// @brief Field <DepthAttachment>k__BackingField, offset 0x40, size 0x30
  __declspec(property(get = __cordl_internal_get__DepthAttachment_k__BackingField,
                      put = __cordl_internal_set__DepthAttachment_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthAttachment_k__BackingField;

  /// @brief Field <DepthCopyTextureIdentifier>k__BackingField, offset 0x138, size 0x28
  __declspec(property(get = __cordl_internal_get__DepthCopyTextureIdentifier_k__BackingField,
                      put = __cordl_internal_set__DepthCopyTextureIdentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _DepthCopyTextureIdentifier_k__BackingField;

  /// @brief Field <DepthCopyTexture>k__BackingField, offset 0x70, size 0x30
  __declspec(property(get = __cordl_internal_get__DepthCopyTexture_k__BackingField,
                      put = __cordl_internal_set__DepthCopyTexture_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthCopyTexture_k__BackingField;

  /// @brief Field <DepthInfoTextureIdentifier>k__BackingField, offset 0x160, size 0x28
  __declspec(property(get = __cordl_internal_get__DepthInfoTextureIdentifier_k__BackingField,
                      put = __cordl_internal_set__DepthInfoTextureIdentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _DepthInfoTextureIdentifier_k__BackingField;

  /// @brief Field <DepthInfoTexture>k__BackingField, offset 0xa0, size 0x30
  __declspec(property(get = __cordl_internal_get__DepthInfoTexture_k__BackingField,
                      put = __cordl_internal_set__DepthInfoTexture_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthInfoTexture_k__BackingField;

  /// @brief Field <GbufferAttachmentIdentifiers>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__GbufferAttachmentIdentifiers_k__BackingField, put = __cordl_internal_set__GbufferAttachmentIdentifiers_k__BackingField))::ArrayW<
      ::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> _GbufferAttachmentIdentifiers_k__BackingField;

  /// @brief Field <GbufferAttachments>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__GbufferAttachments_k__BackingField,
                      put = __cordl_internal_set__GbufferAttachments_k__BackingField))::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle,
                                                                                               ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> _GbufferAttachments_k__BackingField;

  /// @brief Field <GbufferFormats>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__GbufferFormats_k__BackingField,
                      put = __cordl_internal_set__GbufferFormats_k__BackingField))::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                           ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> _GbufferFormats_k__BackingField;

  /// @brief Field <HasDepthPrepass>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__HasDepthPrepass_k__BackingField, put = __cordl_internal_set__HasDepthPrepass_k__BackingField)) bool _HasDepthPrepass_k__BackingField;

  /// @brief Field <HasNormalPrepass>k__BackingField, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__HasNormalPrepass_k__BackingField, put = __cordl_internal_set__HasNormalPrepass_k__BackingField)) bool _HasNormalPrepass_k__BackingField;

  /// @brief Field <IsOverlay>k__BackingField, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get__IsOverlay_k__BackingField, put = __cordl_internal_set__IsOverlay_k__BackingField)) bool _IsOverlay_k__BackingField;

  /// @brief Field <MixedLightingSetup>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__MixedLightingSetup_k__BackingField,
                      put = __cordl_internal_set__MixedLightingSetup_k__BackingField))::UnityEngine::Rendering::Universal::MixedLightingSetup _MixedLightingSetup_k__BackingField;

  /// @brief Field <RenderHeight>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__RenderHeight_k__BackingField, put = __cordl_internal_set__RenderHeight_k__BackingField)) int32_t _RenderHeight_k__BackingField;

  /// @brief Field <RenderWidth>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__RenderWidth_k__BackingField, put = __cordl_internal_set__RenderWidth_k__BackingField)) int32_t _RenderWidth_k__BackingField;

  /// @brief Field <TileDepthInfoTextureIdentifier>k__BackingField, offset 0x188, size 0x28
  __declspec(property(get = __cordl_internal_get__TileDepthInfoTextureIdentifier_k__BackingField,
                      put = __cordl_internal_set__TileDepthInfoTextureIdentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _TileDepthInfoTextureIdentifier_k__BackingField;

  /// @brief Field <TileDepthInfoTexture>k__BackingField, offset 0xd0, size 0x30
  __declspec(property(get = __cordl_internal_get__TileDepthInfoTexture_k__BackingField,
                      put = __cordl_internal_set__TileDepthInfoTexture_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _TileDepthInfoTexture_k__BackingField;

  /// @brief Field <TiledDeferredShading>k__BackingField, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__TiledDeferredShading_k__BackingField, put = __cordl_internal_set__TiledDeferredShading_k__BackingField)) bool _TiledDeferredShading_k__BackingField;

  /// @brief Field <UseJobSystem>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__UseJobSystem_k__BackingField, put = __cordl_internal_set__UseJobSystem_k__BackingField)) bool _UseJobSystem_k__BackingField;

  /// @brief Field <UseRenderPass>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__UseRenderPass_k__BackingField, put = __cordl_internal_set__UseRenderPass_k__BackingField)) bool _UseRenderPass_k__BackingField;

  /// @brief Field kStencilShapeGuard, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kStencilShapeGuard, put = setStaticF_kStencilShapeGuard)) float_t kStencilShapeGuard;

  /// @brief Field k_ClearStencilPartial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ClearStencilPartial, put = setStaticF_k_ClearStencilPartial))::StringW k_ClearStencilPartial;

  /// @brief Field k_DeferredFogPass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DeferredFogPass, put = setStaticF_k_DeferredFogPass))::StringW k_DeferredFogPass;

  /// @brief Field k_DeferredPass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DeferredPass, put = setStaticF_k_DeferredPass))::StringW k_DeferredPass;

  /// @brief Field k_DeferredStencilPass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DeferredStencilPass, put = setStaticF_k_DeferredStencilPass))::StringW k_DeferredStencilPass;

  /// @brief Field k_DeferredTiledPass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DeferredTiledPass, put = setStaticF_k_DeferredTiledPass))::StringW k_DeferredTiledPass;

  /// @brief Field k_GBufferNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GBufferNames, put = setStaticF_k_GBufferNames))::ArrayW<::StringW, ::Array<::StringW>*> k_GBufferNames;

  /// @brief Field k_InvalidLightOffset, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_k_InvalidLightOffset, put = setStaticF_k_InvalidLightOffset)) uint16_t k_InvalidLightOffset;

  /// @brief Field k_SetupLightConstants, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SetupLightConstants, put = setStaticF_k_SetupLightConstants))::StringW k_SetupLightConstants;

  /// @brief Field k_SetupLights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SetupLights, put = setStaticF_k_SetupLights))::StringW k_SetupLights;

  /// @brief Field k_StencilDeferredPassNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_StencilDeferredPassNames, put = setStaticF_k_StencilDeferredPassNames))::ArrayW<::StringW, ::Array<::StringW>*> k_StencilDeferredPassNames;

  /// @brief Field k_TileDeferredPassNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TileDeferredPassNames, put = setStaticF_k_TileDeferredPassNames))::ArrayW<::StringW, ::Array<::StringW>*> k_TileDeferredPassNames;

  /// @brief Field k_TileDepthInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TileDepthInfo, put = setStaticF_k_TileDepthInfo))::StringW k_TileDepthInfo;

  /// @brief Field m_AccurateGbufferNormals, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AccurateGbufferNormals, put = __cordl_internal_set_m_AccurateGbufferNormals)) bool m_AccurateGbufferNormals;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset 0x230, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_AdditionalLightsShadowCasterPass,
               put = __cordl_internal_set_m_AdditionalLightsShadowCasterPass))::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_CachedProjectionMatrix, offset 0x1b8, size 0x40
  __declspec(property(get = __cordl_internal_get_m_CachedProjectionMatrix, put = __cordl_internal_set_m_CachedProjectionMatrix))::UnityEngine::Matrix4x4 m_CachedProjectionMatrix;

  /// @brief Field m_CachedRenderHeight, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedRenderHeight, put = __cordl_internal_set_m_CachedRenderHeight)) int32_t m_CachedRenderHeight;

  /// @brief Field m_CachedRenderWidth, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedRenderWidth, put = __cordl_internal_set_m_CachedRenderWidth)) int32_t m_CachedRenderWidth;

  /// @brief Field m_FullscreenMesh, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullscreenMesh, put = __cordl_internal_set_m_FullscreenMesh))::UnityW<::UnityEngine::Mesh> m_FullscreenMesh;

  /// @brief Field m_HasTileVisLights, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasTileVisLights, put = __cordl_internal_set_m_HasTileVisLights)) bool m_HasTileVisLights;

  /// @brief Field m_HemisphereMesh, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HemisphereMesh, put = __cordl_internal_set_m_HemisphereMesh))::UnityW<::UnityEngine::Mesh> m_HemisphereMesh;

  /// @brief Field m_LightCookieManager, offset 0x2b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager))::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_MaxDepthRangePerBatch, offset 0x250, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDepthRangePerBatch, put = __cordl_internal_set_m_MaxDepthRangePerBatch)) int32_t m_MaxDepthRangePerBatch;

  /// @brief Field m_MaxPunctualLightPerBatch, offset 0x258, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxPunctualLightPerBatch, put = __cordl_internal_set_m_MaxPunctualLightPerBatch)) int32_t m_MaxPunctualLightPerBatch;

  /// @brief Field m_MaxRelLightIndicesPerBatch, offset 0x25c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxRelLightIndicesPerBatch, put = __cordl_internal_set_m_MaxRelLightIndicesPerBatch)) int32_t m_MaxRelLightIndicesPerBatch;

  /// @brief Field m_MaxTilesPerBatch, offset 0x254, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxTilesPerBatch, put = __cordl_internal_set_m_MaxTilesPerBatch)) int32_t m_MaxTilesPerBatch;

  /// @brief Field m_ProfilingDeferredPass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingDeferredPass, put = setStaticF_m_ProfilingDeferredPass))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDeferredPass;

  /// @brief Field m_ProfilingSamplerClearStencilPartialPass, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass,
                      put = __cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerClearStencilPartialPass;

  /// @brief Field m_ProfilingSamplerDeferredFogPass, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerDeferredFogPass,
                      put = __cordl_internal_set_m_ProfilingSamplerDeferredFogPass))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredFogPass;

  /// @brief Field m_ProfilingSamplerDeferredStencilPass, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass,
                      put = __cordl_internal_set_m_ProfilingSamplerDeferredStencilPass))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredStencilPass;

  /// @brief Field m_ProfilingSamplerDeferredTiledPass, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerDeferredTiledPass,
                      put = __cordl_internal_set_m_ProfilingSamplerDeferredTiledPass))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredTiledPass;

  /// @brief Field m_ProfilingSetupLightConstants, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSetupLightConstants,
                             put = setStaticF_m_ProfilingSetupLightConstants))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLightConstants;

  /// @brief Field m_ProfilingSetupLights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSetupLights, put = setStaticF_m_ProfilingSetupLights))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLights;

  /// @brief Field m_ProfilingTileDepthInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingTileDepthInfo, put = setStaticF_m_ProfilingTileDepthInfo))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingTileDepthInfo;

  /// @brief Field m_ScreenToWorld, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToWorld, put = __cordl_internal_set_m_ScreenToWorld))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_ScreenToWorld;

  /// @brief Field m_SphereMesh, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SphereMesh, put = __cordl_internal_set_m_SphereMesh))::UnityW<::UnityEngine::Mesh> m_SphereMesh;

  /// @brief Field m_StencilDeferredMaterial, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredMaterial, put = __cordl_internal_set_m_StencilDeferredMaterial))::UnityW<::UnityEngine::Material> m_StencilDeferredMaterial;

  /// @brief Field m_StencilDeferredPasses, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredPasses, put = __cordl_internal_set_m_StencilDeferredPasses))::ArrayW<int32_t, ::Array<int32_t>*> m_StencilDeferredPasses;

  /// @brief Field m_TileDataCapacities, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDataCapacities, put = __cordl_internal_set_m_TileDataCapacities))::ArrayW<int32_t, ::Array<int32_t>*> m_TileDataCapacities;

  /// @brief Field m_TileDeferredMaterial, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDeferredMaterial, put = __cordl_internal_set_m_TileDeferredMaterial))::UnityW<::UnityEngine::Material> m_TileDeferredMaterial;

  /// @brief Field m_TileDeferredPasses, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDeferredPasses, put = __cordl_internal_set_m_TileDeferredPasses))::ArrayW<int32_t, ::Array<int32_t>*> m_TileDeferredPasses;

  /// @brief Field m_TileDepthInfoMaterial, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDepthInfoMaterial, put = __cordl_internal_set_m_TileDepthInfoMaterial))::UnityW<::UnityEngine::Material> m_TileDepthInfoMaterial;

  /// @brief Field m_Tilers, offset 0x1f8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Tilers,
      put = __cordl_internal_set_m_Tilers))::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> m_Tilers;

  /// @brief Field m_stencilVisLightOffsets, offset 0x220, size 0x10
  __declspec(property(get = __cordl_internal_get_m_stencilVisLightOffsets, put = __cordl_internal_set_m_stencilVisLightOffsets))::Unity::Collections::NativeArray_1<uint16_t> m_stencilVisLightOffsets;

  /// @brief Field m_stencilVisLights, offset 0x210, size 0x10
  __declspec(property(get = __cordl_internal_get_m_stencilVisLights, put = __cordl_internal_set_m_stencilVisLights))::Unity::Collections::NativeArray_1<uint16_t> m_stencilVisLights;

  /// @brief Method Align, addr 0x2adbf78, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Align(int32_t s, int32_t alignment);

  /// @brief Method CheckHasTileLights, addr 0x2ad806c, size 0x16c, virtual false, abstract: false, final false
  inline bool CheckHasTileLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights);

  /// @brief Method ClearStencilPartial, addr 0x2ad9ac4, size 0x1d0, virtual false, abstract: false, final false
  inline void ClearStencilPartial(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method CreateFullscreenMesh, addr 0x2ad9c94, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateFullscreenMesh();

  /// @brief Method CreateGbufferAttachments, addr 0x2ad77c0, size 0x138, virtual false, abstract: false, final false
  inline void CreateGbufferAttachments();

  /// @brief Method CreateHemisphereMesh, addr 0x2adde2c, size 0x5a8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateHemisphereMesh();

  /// @brief Method CreateSphereMesh, addr 0x2add848, size 0x5e4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateSphereMesh();

  /// @brief Method DisableFramebufferFetchInput, addr 0x2ad78f8, size 0x8, virtual false, abstract: false, final false
  inline void DisableFramebufferFetchInput();

  /// @brief Method ExecuteDeferredPass, addr 0x2ad9de0, size 0x310, virtual false, abstract: false, final false
  inline void ExecuteDeferredPass(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteDownsampleBitmaskPass, addr 0x2ad9508, size 0x5bc, virtual false, abstract: false, final false
  inline void ExecuteDownsampleBitmaskPass(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteTileDepthInfoPass, addr 0x2ad8998, size 0xb70, virtual false, abstract: false, final false
  inline void ExecuteTileDepthInfoPass(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FloatToUInt, addr 0x2ade3f4, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t FloatToUInt(float_t val);

  /// @brief Method GetGBufferFormat, addr 0x2ad3b50, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGBufferFormat(int32_t index);

  /// @brief Method GetTiler, addr 0x2ad4b44, size 0x34, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::Rendering::Universal::Internal::DeferredTiler> GetTiler(int32_t i);

  /// @brief Method Half2ToUInt, addr 0x2ade5c8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Half2ToUInt(float_t x, float_t y);

  /// @brief Method HasStencilLightsOfType, addr 0x2ada4dc, size 0x78, virtual false, abstract: false, final false
  inline bool HasStencilLightsOfType(::UnityEngine::LightType type);

  /// @brief Method HasTileDepthRangeExtraPass, addr 0x2ad8908, size 0x90, virtual false, abstract: false, final false
  inline bool HasTileDepthRangeExtraPass();

  /// @brief Method HasTileLights, addr 0x2ad8900, size 0x8, virtual false, abstract: false, final false
  inline bool HasTileLights();

  /// @brief Method InitStencilDeferredMaterial, addr 0x2ad472c, size 0x3d0, virtual false, abstract: false, final false
  inline void InitStencilDeferredMaterial();

  /// @brief Method InitTileDeferredMaterial, addr 0x2ad44f8, size 0x234, virtual false, abstract: false, final false
  inline void InitTileDeferredMaterial();

  /// @brief Method IsRuntimeSupportedThisFrame, addr 0x2ad7900, size 0xb4, virtual false, abstract: false, final false
  inline bool IsRuntimeSupportedThisFrame();

  /// @brief Method IsTileLight, addr 0x2ade4a4, size 0x124, virtual false, abstract: false, final false
  inline bool IsTileLight(::UnityEngine::Rendering::VisibleLight visibleLight);

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* New_ctor(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams initParams,
                                                                                        bool useNativeRenderPass);

  /// @brief Method OnCameraCleanup, addr 0x2ad81d8, size 0x1a8, virtual false, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OverwriteStencil, addr 0x2ad86a4, size 0x25c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderStateBlock OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock block, int32_t stencilWriteMask, int32_t stencilRef);

  /// @brief Method OverwriteStencil, addr 0x2ad84f0, size 0x1b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::StencilState OverwriteStencil(::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask);

  /// @brief Method PackTileID, addr 0x2adbfb8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t PackTileID(uint32_t i, uint32_t j);

  /// @brief Method PrecomputeLights, addr 0x2ad6398, size 0x854, virtual false, abstract: false, final false
  inline void PrecomputeLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> prePunctualLights,
                               ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLights, ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLightOffsets,
                               ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights, bool hasAdditionalLights, ::UnityEngine::Matrix4x4 view,
                               bool isOrthographic, float_t zNear);

  /// @brief Method RenderFog, addr 0x2adba90, size 0x1f8, virtual false, abstract: false, final false
  inline void RenderFog(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderSSAOBeforeShading, addr 0x2ada554, size 0x144, virtual false, abstract: false, final false
  inline void RenderSSAOBeforeShading(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderStencilDirectionalLights, addr 0x2adc374, size 0x654, virtual false, abstract: false, final false
  inline void RenderStencilDirectionalLights(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex);

  /// @brief Method RenderStencilLights, addr 0x2ada698, size 0x29c, virtual false, abstract: false, final false
  inline void RenderStencilLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderStencilPointLights, addr 0x2adc9c8, size 0x6c0, virtual false, abstract: false, final false
  inline void RenderStencilPointLights(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights);

  /// @brief Method RenderStencilSpotLights, addr 0x2add088, size 0x780, virtual false, abstract: false, final false
  inline void RenderStencilSpotLights(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights);

  /// @brief Method RenderTileLights, addr 0x2ada934, size 0x115c, virtual false, abstract: false, final false
  inline void RenderTileLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                               ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ResolveMixedLightingMode, addr 0x2ad764c, size 0x174, virtual false, abstract: false, final false
  inline void ResolveMixedLightingMode(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x2ad79b4, size 0x6b8, virtual false, abstract: false, final false
  inline void Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass, bool hasDepthPrepass, bool hasNormalPrepass,
                    ::UnityEngine::Rendering::Universal::RenderTargetHandle depthCopyTexture, ::UnityEngine::Rendering::Universal::RenderTargetHandle depthInfoTexture,
                    ::UnityEngine::Rendering::Universal::RenderTargetHandle tileDepthInfoTexture, ::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachment,
                    ::UnityEngine::Rendering::Universal::RenderTargetHandle colorAttachment);

  /// @brief Method SetupLights, addr 0x2ad4b78, size 0xdbc, virtual false, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupMainLightConstants, addr 0x2adbc88, size 0x190, virtual false, abstract: false, final false
  inline void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method SetupMatrixConstants, addr 0x2ada0f0, size 0x3ec, virtual false, abstract: false, final false
  inline void SetupMatrixConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupShaderLightConstants, addr 0x2ad6bec, size 0x8, virtual false, abstract: false, final false
  inline void SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SortLights, addr 0x2ad6bf4, size 0xd0, virtual false, abstract: false, final false
  inline void SortLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> prePunctualLights);

  /// @brief Method StorePunctualLightData, addr 0x2adbfd8, size 0x328, virtual false, abstract: false, final false
  inline void StorePunctualLightData(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>> punctualLightBuffer, int32_t storeIndex,
                                     ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights, int32_t index);

  /// @brief Method StoreTileData, addr 0x2adbfc0, size 0x18, virtual false, abstract: false, final false
  inline void StoreTileData(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>> tileList, int32_t storeIndex, uint32_t tileID, uint32_t listBitMask, uint16_t relLightOffset,
                            uint16_t lightCount);

  /// @brief Method TrimLights, addr 0x2adbf14, size 0x64, virtual false, abstract: false, final false
  inline int32_t TrimLights(ByRef<::Unity::Collections::NativeArray_1<uint16_t>> trimmedLights, ByRef<::Unity::Collections::NativeArray_1<uint16_t>> tiles, int32_t offset, int32_t lightCount,
                            ByRef<::UnityEngine::Rendering::Universal::Internal::BitArray> usedLights);

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
  __cordl_internal_get__DeferredInputAttachments_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get__DeferredInputAttachments_k__BackingField();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__DeferredInputIsTransient_k__BackingField() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__DeferredInputIsTransient_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__DepthAttachmentIdentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__DepthAttachmentIdentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__DepthAttachment_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__DepthAttachment_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__DepthCopyTextureIdentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__DepthCopyTextureIdentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__DepthCopyTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__DepthCopyTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__DepthInfoTextureIdentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__DepthInfoTextureIdentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__DepthInfoTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__DepthInfoTexture_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
  __cordl_internal_get__GbufferAttachmentIdentifiers_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>&
  __cordl_internal_get__GbufferAttachmentIdentifiers_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> const&
  __cordl_internal_get__GbufferAttachments_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>&
  __cordl_internal_get__GbufferAttachments_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
  __cordl_internal_get__GbufferFormats_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>& __cordl_internal_get__GbufferFormats_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasDepthPrepass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasDepthPrepass_k__BackingField();

  constexpr bool const& __cordl_internal_get__HasNormalPrepass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasNormalPrepass_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsOverlay_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsOverlay_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& __cordl_internal_get__MixedLightingSetup_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& __cordl_internal_get__MixedLightingSetup_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__RenderHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__RenderHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__RenderWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__RenderWidth_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__TileDepthInfoTextureIdentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__TileDepthInfoTextureIdentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__TileDepthInfoTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__TileDepthInfoTexture_k__BackingField();

  constexpr bool const& __cordl_internal_get__TiledDeferredShading_k__BackingField() const;

  constexpr bool& __cordl_internal_get__TiledDeferredShading_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseJobSystem_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseJobSystem_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseRenderPass_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_AccurateGbufferNormals() const;

  constexpr bool& __cordl_internal_get_m_AccurateGbufferNormals();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*> const&
  __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_CachedProjectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_CachedProjectionMatrix();

  constexpr int32_t const& __cordl_internal_get_m_CachedRenderHeight() const;

  constexpr int32_t& __cordl_internal_get_m_CachedRenderHeight();

  constexpr int32_t const& __cordl_internal_get_m_CachedRenderWidth() const;

  constexpr int32_t& __cordl_internal_get_m_CachedRenderWidth();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_FullscreenMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_FullscreenMesh();

  constexpr bool const& __cordl_internal_get_m_HasTileVisLights() const;

  constexpr bool& __cordl_internal_get_m_HasTileVisLights();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_HemisphereMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_HemisphereMesh();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr int32_t const& __cordl_internal_get_m_MaxDepthRangePerBatch() const;

  constexpr int32_t& __cordl_internal_get_m_MaxDepthRangePerBatch();

  constexpr int32_t const& __cordl_internal_get_m_MaxPunctualLightPerBatch() const;

  constexpr int32_t& __cordl_internal_get_m_MaxPunctualLightPerBatch();

  constexpr int32_t const& __cordl_internal_get_m_MaxRelLightIndicesPerBatch() const;

  constexpr int32_t& __cordl_internal_get_m_MaxRelLightIndicesPerBatch();

  constexpr int32_t const& __cordl_internal_get_m_MaxTilesPerBatch() const;

  constexpr int32_t& __cordl_internal_get_m_MaxTilesPerBatch();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerDeferredFogPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSamplerDeferredFogPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerDeferredTiledPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSamplerDeferredTiledPass() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ScreenToWorld() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ScreenToWorld();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_SphereMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_SphereMesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_StencilDeferredPasses() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_StencilDeferredPasses();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_TileDataCapacities() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_TileDataCapacities();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_TileDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_TileDeferredMaterial();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_TileDeferredPasses() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_TileDeferredPasses();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_TileDepthInfoMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_TileDepthInfoMaterial();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> const& __cordl_internal_get_m_Tilers() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*>& __cordl_internal_get_m_Tilers();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get_m_stencilVisLightOffsets() const;

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get_m_stencilVisLightOffsets();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get_m_stencilVisLights() const;

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get_m_stencilVisLights();

  constexpr void
  __cordl_internal_set__DeferredInputAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set__DeferredInputIsTransient_k__BackingField(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__DepthAttachmentIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__DepthAttachment_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__DepthCopyTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__DepthCopyTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__DepthInfoTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__DepthInfoTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void
  __cordl_internal_set__GbufferAttachmentIdentifiers_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void
  __cordl_internal_set__GbufferAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value);

  constexpr void
  __cordl_internal_set__GbufferFormats_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  constexpr void __cordl_internal_set__HasDepthPrepass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__HasNormalPrepass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsOverlay_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MixedLightingSetup_k__BackingField(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  constexpr void __cordl_internal_set__RenderHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__RenderWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TileDepthInfoTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__TileDepthInfoTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__TiledDeferredShading_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseJobSystem_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AccurateGbufferNormals(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_CachedProjectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_CachedRenderHeight(int32_t value);

  constexpr void __cordl_internal_set_m_CachedRenderWidth(int32_t value);

  constexpr void __cordl_internal_set_m_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_HasTileVisLights(bool value);

  constexpr void __cordl_internal_set_m_HemisphereMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_MaxDepthRangePerBatch(int32_t value);

  constexpr void __cordl_internal_set_m_MaxPunctualLightPerBatch(int32_t value);

  constexpr void __cordl_internal_set_m_MaxRelLightIndicesPerBatch(int32_t value);

  constexpr void __cordl_internal_set_m_MaxTilesPerBatch(int32_t value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerDeferredFogPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerDeferredStencilPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerDeferredTiledPass(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ScreenToWorld(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_SphereMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_StencilDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_TileDataCapacities(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_TileDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TileDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_TileDepthInfoMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Tilers(::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> value);

  constexpr void __cordl_internal_set_m_stencilVisLightOffsets(::Unity::Collections::NativeArray_1<uint16_t> value);

  constexpr void __cordl_internal_set_m_stencilVisLights(::Unity::Collections::NativeArray_1<uint16_t> value);

  /// @brief Method .ctor, addr 0x2ad3f18, size 0x5e0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams initParams, bool useNativeRenderPass);

  static inline float_t getStaticF_kStencilShapeGuard();

  static inline ::StringW getStaticF_k_ClearStencilPartial();

  static inline ::StringW getStaticF_k_DeferredFogPass();

  static inline ::StringW getStaticF_k_DeferredPass();

  static inline ::StringW getStaticF_k_DeferredStencilPass();

  static inline ::StringW getStaticF_k_DeferredTiledPass();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_GBufferNames();

  static inline uint16_t getStaticF_k_InvalidLightOffset();

  static inline ::StringW getStaticF_k_SetupLightConstants();

  static inline ::StringW getStaticF_k_SetupLights();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_StencilDeferredPassNames();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_TileDeferredPassNames();

  static inline ::StringW getStaticF_k_TileDepthInfo();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDeferredPass();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSetupLightConstants();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSetupLights();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingTileDepthInfo();

  /// @brief Method get_AccurateGbufferNormals, addr 0x2ad3c90, size 0x8, virtual false, abstract: false, final false
  inline bool get_AccurateGbufferNormals();

  /// @brief Method get_DeferredInputAttachments, addr 0x2ad3d88, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_DeferredInputAttachments();

  /// @brief Method get_DeferredInputIsTransient, addr 0x2ad3d98, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_DeferredInputIsTransient();

  /// @brief Method get_DepthAttachment, addr 0x2ad3da8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthAttachment();

  /// @brief Method get_DepthAttachmentIdentifier, addr 0x2ad3e68, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_DepthAttachmentIdentifier();

  /// @brief Method get_DepthCopyTexture, addr 0x2ad3dd0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthCopyTexture();

  /// @brief Method get_DepthCopyTextureIdentifier, addr 0x2ad3e90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_DepthCopyTextureIdentifier();

  /// @brief Method get_DepthInfoTexture, addr 0x2ad3df8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthInfoTexture();

  /// @brief Method get_DepthInfoTextureIdentifier, addr 0x2ad3ec0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_DepthInfoTextureIdentifier();

  /// @brief Method get_GBufferAlbedoIndex, addr 0x2ad3a28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferAlbedoIndex();

  /// @brief Method get_GBufferLightingIndex, addr 0x2ad3a40, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferLightingIndex();

  /// @brief Method get_GBufferNormalSmoothnessIndex, addr 0x2ad3a38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferNormalSmoothnessIndex();

  /// @brief Method get_GBufferRenderingLayers, addr 0x2ad3a88, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_GBufferRenderingLayers();

  /// @brief Method get_GBufferShadowMask, addr 0x2ad3a5c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_GBufferShadowMask();

  /// @brief Method get_GBufferSliceCount, addr 0x2ad3b1c, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_GBufferSliceCount();

  /// @brief Method get_GBufferSpecularMetallicIndex, addr 0x2ad3a30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GBufferSpecularMetallicIndex();

  /// @brief Method get_GbufferAttachmentIdentifiers, addr 0x2ad3e48, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_GbufferAttachmentIdentifiers();

  /// @brief Method get_GbufferAttachments, addr 0x2ad3d78, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> get_GbufferAttachments();

  /// @brief Method get_GbufferDepthIndex, addr 0x2ad3a48, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_GbufferDepthIndex();

  /// @brief Method get_GbufferFormats, addr 0x2ad3e58, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> get_GbufferFormats();

  /// @brief Method get_HasDepthPrepass, addr 0x2ad3c54, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasDepthPrepass();

  /// @brief Method get_HasNormalPrepass, addr 0x2ad3c68, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasNormalPrepass();

  /// @brief Method get_IsOverlay, addr 0x2ad3c7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOverlay();

  /// @brief Method get_MixedLightingSetup, addr 0x2ad3d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::MixedLightingSetup get_MixedLightingSetup();

  /// @brief Method get_RenderHeight, addr 0x2ad3d68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RenderHeight();

  /// @brief Method get_RenderWidth, addr 0x2ad3d58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RenderWidth();

  /// @brief Method get_TileDepthInfoTexture, addr 0x2ad3e20, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_TileDepthInfoTexture();

  /// @brief Method get_TileDepthInfoTextureIdentifier, addr 0x2ad3ee8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_TileDepthInfoTextureIdentifier();

  /// @brief Method get_TiledDeferredShading, addr 0x2ad3d20, size 0x8, virtual false, abstract: false, final false
  inline bool get_TiledDeferredShading();

  /// @brief Method get_UseJobSystem, addr 0x2ad3d44, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseJobSystem();

  /// @brief Method get_UseRenderPass, addr 0x2ad3c40, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseRenderPass();

  /// @brief Method get_UseRenderingLayers, addr 0x2ad3abc, size 0x60, virtual false, abstract: false, final false
  inline bool get_UseRenderingLayers();

  /// @brief Method get_UseShadowMask, addr 0x2ad3a78, size 0x10, virtual false, abstract: false, final false
  inline bool get_UseShadowMask();

  static inline void setStaticF_kStencilShapeGuard(float_t value);

  static inline void setStaticF_k_ClearStencilPartial(::StringW value);

  static inline void setStaticF_k_DeferredFogPass(::StringW value);

  static inline void setStaticF_k_DeferredPass(::StringW value);

  static inline void setStaticF_k_DeferredStencilPass(::StringW value);

  static inline void setStaticF_k_DeferredTiledPass(::StringW value);

  static inline void setStaticF_k_GBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_k_InvalidLightOffset(uint16_t value);

  static inline void setStaticF_k_SetupLightConstants(::StringW value);

  static inline void setStaticF_k_SetupLights(::StringW value);

  static inline void setStaticF_k_StencilDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_k_TileDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_k_TileDepthInfo(::StringW value);

  static inline void setStaticF_m_ProfilingDeferredPass(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSetupLightConstants(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSetupLights(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingTileDepthInfo(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_AccurateGbufferNormals, addr 0x2ad3c98, size 0x88, virtual false, abstract: false, final false
  inline void set_AccurateGbufferNormals(bool value);

  /// @brief Method set_DeferredInputAttachments, addr 0x2ad3d90, size 0x8, virtual false, abstract: false, final false
  inline void set_DeferredInputAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  /// @brief Method set_DeferredInputIsTransient, addr 0x2ad3da0, size 0x8, virtual false, abstract: false, final false
  inline void set_DeferredInputIsTransient(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method set_DepthAttachment, addr 0x2ad3dbc, size 0x14, virtual false, abstract: false, final false
  inline void set_DepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_DepthAttachmentIdentifier, addr 0x2ad3e7c, size 0x14, virtual false, abstract: false, final false
  inline void set_DepthAttachmentIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_DepthCopyTexture, addr 0x2ad3de4, size 0x14, virtual false, abstract: false, final false
  inline void set_DepthCopyTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_DepthCopyTextureIdentifier, addr 0x2ad3ea8, size 0x18, virtual false, abstract: false, final false
  inline void set_DepthCopyTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_DepthInfoTexture, addr 0x2ad3e0c, size 0x14, virtual false, abstract: false, final false
  inline void set_DepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_DepthInfoTextureIdentifier, addr 0x2ad3ed4, size 0x14, virtual false, abstract: false, final false
  inline void set_DepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_GbufferAttachmentIdentifiers, addr 0x2ad3e50, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferAttachmentIdentifiers(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  /// @brief Method set_GbufferAttachments, addr 0x2ad3d80, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value);

  /// @brief Method set_GbufferFormats, addr 0x2ad3e60, size 0x8, virtual false, abstract: false, final false
  inline void set_GbufferFormats(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  /// @brief Method set_HasDepthPrepass, addr 0x2ad3c5c, size 0xc, virtual false, abstract: false, final false
  inline void set_HasDepthPrepass(bool value);

  /// @brief Method set_HasNormalPrepass, addr 0x2ad3c70, size 0xc, virtual false, abstract: false, final false
  inline void set_HasNormalPrepass(bool value);

  /// @brief Method set_IsOverlay, addr 0x2ad3c84, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOverlay(bool value);

  /// @brief Method set_MixedLightingSetup, addr 0x2ad3d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  /// @brief Method set_RenderHeight, addr 0x2ad3d70, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderHeight(int32_t value);

  /// @brief Method set_RenderWidth, addr 0x2ad3d60, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderWidth(int32_t value);

  /// @brief Method set_TileDepthInfoTexture, addr 0x2ad3e34, size 0x14, virtual false, abstract: false, final false
  inline void set_TileDepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_TileDepthInfoTextureIdentifier, addr 0x2ad3f00, size 0x18, virtual false, abstract: false, final false
  inline void set_TileDepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_TiledDeferredShading, addr 0x2ad3d28, size 0xc, virtual false, abstract: false, final false
  inline void set_TiledDeferredShading(bool value);

  /// @brief Method set_UseJobSystem, addr 0x2ad3d4c, size 0xc, virtual false, abstract: false, final false
  inline void set_UseJobSystem(bool value);

  /// @brief Method set_UseRenderPass, addr 0x2ad3c48, size 0xc, virtual false, abstract: false, final false
  inline void set_UseRenderPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredLights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredLights(DeferredLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredLights(DeferredLights const&) = delete;

  /// @brief Field <UseRenderPass>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____UseRenderPass_k__BackingField;

  /// @brief Field <HasDepthPrepass>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____HasDepthPrepass_k__BackingField;

  /// @brief Field <HasNormalPrepass>k__BackingField, offset: 0x12, size: 0x1, def value: None
  bool ____HasNormalPrepass_k__BackingField;

  /// @brief Field <IsOverlay>k__BackingField, offset: 0x13, size: 0x1, def value: None
  bool ____IsOverlay_k__BackingField;

  /// @brief Field m_AccurateGbufferNormals, offset: 0x14, size: 0x1, def value: None
  bool ___m_AccurateGbufferNormals;

  /// @brief Field <TiledDeferredShading>k__BackingField, offset: 0x15, size: 0x1, def value: None
  bool ____TiledDeferredShading_k__BackingField;

  /// @brief Field <MixedLightingSetup>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MixedLightingSetup ____MixedLightingSetup_k__BackingField;

  /// @brief Field <UseJobSystem>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____UseJobSystem_k__BackingField;

  /// @brief Field <RenderWidth>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____RenderWidth_k__BackingField;

  /// @brief Field <RenderHeight>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____RenderHeight_k__BackingField;

  /// @brief Field <GbufferAttachments>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> ____GbufferAttachments_k__BackingField;

  /// @brief Field <DeferredInputAttachments>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ____DeferredInputAttachments_k__BackingField;

  /// @brief Field <DeferredInputIsTransient>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____DeferredInputIsTransient_k__BackingField;

  /// @brief Field <DepthAttachment>k__BackingField, offset: 0x40, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____DepthAttachment_k__BackingField;

  /// @brief Field <DepthCopyTexture>k__BackingField, offset: 0x70, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____DepthCopyTexture_k__BackingField;

  /// @brief Field <DepthInfoTexture>k__BackingField, offset: 0xa0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____DepthInfoTexture_k__BackingField;

  /// @brief Field <TileDepthInfoTexture>k__BackingField, offset: 0xd0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____TileDepthInfoTexture_k__BackingField;

  /// @brief Field <GbufferAttachmentIdentifiers>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ____GbufferAttachmentIdentifiers_k__BackingField;

  /// @brief Field <GbufferFormats>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> ____GbufferFormats_k__BackingField;

  /// @brief Field <DepthAttachmentIdentifier>k__BackingField, offset: 0x110, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____DepthAttachmentIdentifier_k__BackingField;

  /// @brief Field <DepthCopyTextureIdentifier>k__BackingField, offset: 0x138, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____DepthCopyTextureIdentifier_k__BackingField;

  /// @brief Field <DepthInfoTextureIdentifier>k__BackingField, offset: 0x160, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____DepthInfoTextureIdentifier_k__BackingField;

  /// @brief Field <TileDepthInfoTextureIdentifier>k__BackingField, offset: 0x188, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____TileDepthInfoTextureIdentifier_k__BackingField;

  /// @brief Field m_CachedRenderWidth, offset: 0x1b0, size: 0x4, def value: None
  int32_t ___m_CachedRenderWidth;

  /// @brief Field m_CachedRenderHeight, offset: 0x1b4, size: 0x4, def value: None
  int32_t ___m_CachedRenderHeight;

  /// @brief Field m_CachedProjectionMatrix, offset: 0x1b8, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedProjectionMatrix;

  /// @brief Field m_Tilers, offset: 0x1f8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> ___m_Tilers;

  /// @brief Field m_TileDataCapacities, offset: 0x200, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_TileDataCapacities;

  /// @brief Field m_HasTileVisLights, offset: 0x208, size: 0x1, def value: None
  bool ___m_HasTileVisLights;

  /// @brief Field m_stencilVisLights, offset: 0x210, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ___m_stencilVisLights;

  /// @brief Field m_stencilVisLightOffsets, offset: 0x220, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ___m_stencilVisLightOffsets;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_SphereMesh, offset: 0x238, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_SphereMesh;

  /// @brief Field m_HemisphereMesh, offset: 0x240, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_HemisphereMesh;

  /// @brief Field m_FullscreenMesh, offset: 0x248, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_FullscreenMesh;

  /// @brief Field m_MaxDepthRangePerBatch, offset: 0x250, size: 0x4, def value: None
  int32_t ___m_MaxDepthRangePerBatch;

  /// @brief Field m_MaxTilesPerBatch, offset: 0x254, size: 0x4, def value: None
  int32_t ___m_MaxTilesPerBatch;

  /// @brief Field m_MaxPunctualLightPerBatch, offset: 0x258, size: 0x4, def value: None
  int32_t ___m_MaxPunctualLightPerBatch;

  /// @brief Field m_MaxRelLightIndicesPerBatch, offset: 0x25c, size: 0x4, def value: None
  int32_t ___m_MaxRelLightIndicesPerBatch;

  /// @brief Field m_TileDepthInfoMaterial, offset: 0x260, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_TileDepthInfoMaterial;

  /// @brief Field m_TileDeferredMaterial, offset: 0x268, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_TileDeferredMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset: 0x270, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_StencilDeferredMaterial;

  /// @brief Field m_StencilDeferredPasses, offset: 0x278, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_StencilDeferredPasses;

  /// @brief Field m_TileDeferredPasses, offset: 0x280, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_TileDeferredPasses;

  /// @brief Field m_ScreenToWorld, offset: 0x288, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ScreenToWorld;

  /// @brief Field m_ProfilingSamplerDeferredTiledPass, offset: 0x290, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerDeferredTiledPass;

  /// @brief Field m_ProfilingSamplerDeferredStencilPass, offset: 0x298, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerDeferredStencilPass;

  /// @brief Field m_ProfilingSamplerDeferredFogPass, offset: 0x2a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerDeferredFogPass;

  /// @brief Field m_ProfilingSamplerClearStencilPartialPass, offset: 0x2a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerClearStencilPartialPass;

  /// @brief Field m_LightCookieManager, offset: 0x2b0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredLights, 0x2b8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____UseRenderPass_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____HasDepthPrepass_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____HasNormalPrepass_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____IsOverlay_k__BackingField) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_AccurateGbufferNormals) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____TiledDeferredShading_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____MixedLightingSetup_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____UseJobSystem_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____RenderWidth_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____RenderHeight_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferAttachments_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DeferredInputAttachments_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DeferredInputIsTransient_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthAttachment_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthCopyTexture_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthInfoTexture_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____TileDepthInfoTexture_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferAttachmentIdentifiers_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____GbufferFormats_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthAttachmentIdentifier_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthCopyTextureIdentifier_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____DepthInfoTextureIdentifier_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ____TileDepthInfoTextureIdentifier_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_CachedRenderWidth) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_CachedRenderHeight) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_CachedProjectionMatrix) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_Tilers) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_TileDataCapacities) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_HasTileVisLights) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_stencilVisLights) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_stencilVisLightOffsets) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_AdditionalLightsShadowCasterPass) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_SphereMesh) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_HemisphereMesh) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_FullscreenMesh) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_MaxDepthRangePerBatch) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_MaxTilesPerBatch) == 0x254, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_MaxPunctualLightPerBatch) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_MaxRelLightIndicesPerBatch) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_TileDepthInfoMaterial) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_TileDeferredMaterial) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_StencilDeferredMaterial) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_StencilDeferredPasses) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_TileDeferredPasses) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ScreenToWorld) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerDeferredTiledPass) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerDeferredStencilPass) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerDeferredFogPass) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_ProfilingSamplerClearStencilPartialPass) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredLights, ___m_LightCookieManager) == 0x2b0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/StencilDeferredPasses");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/TileDeferredPasses");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredLights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredLights*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/ShaderConstants");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/CullLightsJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/DrawCall");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, "UnityEngine.Rendering.Universal.Internal", "DeferredLights/InitParams");
