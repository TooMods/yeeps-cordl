#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraData)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingMode;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingQuality;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
struct ImageScalingMode;
}
namespace UnityEngine::Rendering::Universal {
struct ImageUpscalingFilter;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::CameraData);
// Type: UnityEngine.Rendering.Universal::CameraData
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::CameraData
struct CORDL_TYPE CameraData {
public:
  // Declarations
  __declspec(property(get = get_isPreviewCamera)) bool isPreviewCamera;

  __declspec(property(get = get_isRenderPassSupportedCamera)) bool isRenderPassSupportedCamera;

  __declspec(property(get = get_isSceneViewCamera)) bool isSceneViewCamera;

  __declspec(property(get = get_requireSrgbConversion)) bool requireSrgbConversion;

  /// @brief Method GetGPUProjectionMatrix, addr 0x288c794, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetProjectionMatrix, addr 0x288c720, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x288c6ac, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method IsCameraProjectionMatrixFlipped, addr 0x288c7ec, size 0x1d4, virtual false, abstract: false, final false
  inline bool IsCameraProjectionMatrixFlipped();

  /// @brief Method SetViewAndProjectionMatrix, addr 0x2889d90, size 0x24, virtual false, abstract: false, final false
  inline void SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method get_isPreviewCamera, addr 0x288afc8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPreviewCamera();

  /// @brief Method get_isRenderPassSupportedCamera, addr 0x288cadc, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isRenderPassSupportedCamera();

  /// @brief Method get_isSceneViewCamera, addr 0x2886d64, size 0x10, virtual false, abstract: false, final false
  inline bool get_isSceneViewCamera();

  /// @brief Method get_requireSrgbConversion, addr 0x288c9c0, size 0x11c, virtual false, abstract: false, final false
  inline bool get_requireSrgbConversion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraData();

  // Ctor Parameters [CppParam { name: "m_ViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_ProjectionMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None }, CppParam { name: "renderType", ty:
  // "::UnityEngine::Rendering::Universal::CameraRenderType", modifiers: "", def_value: None }, CppParam { name: "targetTexture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "",
  // def_value: None }, CppParam { name: "cameraTargetDescriptor", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "pixelRect", ty:
  // "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "pixelWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pixelHeight", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderScale", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "imageScalingMode", ty: "::UnityEngine::Rendering::Universal::ImageScalingMode", modifiers: "", def_value: None }, CppParam { name: "upscalingFilter", ty:
  // "::UnityEngine::Rendering::Universal::ImageUpscalingFilter", modifiers: "", def_value: None }, CppParam { name: "fsrOverrideSharpness", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "fsrSharpness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "clearDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cameraType", ty:
  // "::UnityEngine::CameraType", modifiers: "", def_value: None }, CppParam { name: "isDefaultViewport", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isHdrEnabled", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresOpaqueTexture", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "postProcessingRequiresDepthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xrRendering", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "defaultOpaqueSortFlags", ty: "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value: None }, CppParam { name: "xr", ty:
  // "::UnityEngine::Rendering::Universal::XRPass*", modifiers: "", def_value: None }, CppParam { name: "isStereoEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "maxShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "postProcessEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "captureActions", ty:
  // "::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier,::UnityEngine::Rendering::CommandBuffer*>*>*", modifiers: "", def_value: None },
  // CppParam { name: "volumeLayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "volumeTrigger", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "",
  // def_value: None }, CppParam { name: "isStopNaNEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDitheringEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "antialiasing", ty: "::UnityEngine::Rendering::Universal::AntialiasingMode", modifiers: "", def_value: None }, CppParam { name: "antialiasingQuality", ty:
  // "::UnityEngine::Rendering::Universal::AntialiasingQuality", modifiers: "", def_value: None }, CppParam { name: "renderer", ty: "::UnityEngine::Rendering::Universal::ScriptableRenderer*",
  // modifiers: "", def_value: None }, CppParam { name: "resolveFinalTarget", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "worldSpaceCameraPos", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }]
  constexpr CameraData(::UnityEngine::Matrix4x4 m_ViewMatrix, ::UnityEngine::Matrix4x4 m_ProjectionMatrix, ::UnityW<::UnityEngine::Camera> camera,
                       ::UnityEngine::Rendering::Universal::CameraRenderType renderType, ::UnityW<::UnityEngine::RenderTexture> targetTexture,
                       ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor, ::UnityEngine::Rect pixelRect, int32_t pixelWidth, int32_t pixelHeight, float_t aspectRatio, float_t renderScale,
                       ::UnityEngine::Rendering::Universal::ImageScalingMode imageScalingMode, ::UnityEngine::Rendering::Universal::ImageUpscalingFilter upscalingFilter, bool fsrOverrideSharpness,
                       float_t fsrSharpness, bool clearDepth, ::UnityEngine::CameraType cameraType, bool isDefaultViewport, bool isHdrEnabled, bool requiresDepthTexture, bool requiresOpaqueTexture,
                       bool postProcessingRequiresDepthTexture, bool xrRendering, ::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags, ::UnityEngine::Rendering::Universal::XRPass* xr,
                       bool isStereoEnabled, float_t maxShadowDistance, bool postProcessEnabled,
                       ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* captureActions,
                       ::UnityEngine::LayerMask volumeLayerMask, ::UnityW<::UnityEngine::Transform> volumeTrigger, bool isStopNaNEnabled, bool isDitheringEnabled,
                       ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing, ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality,
                       ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, bool resolveFinalTarget, ::UnityEngine::Vector3 worldSpaceCameraPos) noexcept;

  /// @brief Field m_ViewMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_ViewMatrix;

  /// @brief Field m_ProjectionMatrix, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_ProjectionMatrix;

  /// @brief Field camera, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field renderType, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CameraRenderType renderType;

  /// @brief Field targetTexture, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Field cameraTargetDescriptor, offset: 0x98, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor;

  /// @brief Field pixelRect, offset: 0xcc, size: 0x10, def value: None
  ::UnityEngine::Rect pixelRect;

  /// @brief Field pixelWidth, offset: 0xdc, size: 0x4, def value: None
  int32_t pixelWidth;

  /// @brief Field pixelHeight, offset: 0xe0, size: 0x4, def value: None
  int32_t pixelHeight;

  /// @brief Field aspectRatio, offset: 0xe4, size: 0x4, def value: None
  float_t aspectRatio;

  /// @brief Field renderScale, offset: 0xe8, size: 0x4, def value: None
  float_t renderScale;

  /// @brief Field imageScalingMode, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ImageScalingMode imageScalingMode;

  /// @brief Field upscalingFilter, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ImageUpscalingFilter upscalingFilter;

  /// @brief Field fsrOverrideSharpness, offset: 0xf4, size: 0x1, def value: None
  bool fsrOverrideSharpness;

  /// @brief Field fsrSharpness, offset: 0xf8, size: 0x4, def value: None
  float_t fsrSharpness;

  /// @brief Field clearDepth, offset: 0xfc, size: 0x1, def value: None
  bool clearDepth;

  /// @brief Field cameraType, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::CameraType cameraType;

  /// @brief Field isDefaultViewport, offset: 0x104, size: 0x1, def value: None
  bool isDefaultViewport;

  /// @brief Field isHdrEnabled, offset: 0x105, size: 0x1, def value: None
  bool isHdrEnabled;

  /// @brief Field requiresDepthTexture, offset: 0x106, size: 0x1, def value: None
  bool requiresDepthTexture;

  /// @brief Field requiresOpaqueTexture, offset: 0x107, size: 0x1, def value: None
  bool requiresOpaqueTexture;

  /// @brief Field postProcessingRequiresDepthTexture, offset: 0x108, size: 0x1, def value: None
  bool postProcessingRequiresDepthTexture;

  /// @brief Field xrRendering, offset: 0x109, size: 0x1, def value: None
  bool xrRendering;

  /// @brief Field defaultOpaqueSortFlags, offset: 0x10c, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags;

  /// @brief Field xr, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRPass* xr;

  /// @brief Field isStereoEnabled, offset: 0x118, size: 0x1, def value: None
  bool isStereoEnabled;

  /// @brief Field maxShadowDistance, offset: 0x11c, size: 0x4, def value: None
  float_t maxShadowDistance;

  /// @brief Field postProcessEnabled, offset: 0x120, size: 0x1, def value: None
  bool postProcessEnabled;

  /// @brief Field captureActions, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* captureActions;

  /// @brief Field volumeLayerMask, offset: 0x130, size: 0x4, def value: None
  ::UnityEngine::LayerMask volumeLayerMask;

  /// @brief Field volumeTrigger, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> volumeTrigger;

  /// @brief Field isStopNaNEnabled, offset: 0x140, size: 0x1, def value: None
  bool isStopNaNEnabled;

  /// @brief Field isDitheringEnabled, offset: 0x141, size: 0x1, def value: None
  bool isDitheringEnabled;

  /// @brief Field antialiasing, offset: 0x144, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing;

  /// @brief Field antialiasingQuality, offset: 0x148, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  /// @brief Field renderer, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;

  /// @brief Field resolveFinalTarget, offset: 0x158, size: 0x1, def value: None
  bool resolveFinalTarget;

  /// @brief Field worldSpaceCameraPos, offset: 0x15c, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldSpaceCameraPos;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x168 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CameraData, 0x168>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, m_ViewMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, m_ProjectionMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, camera) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, renderType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, targetTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, cameraTargetDescriptor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, pixelRect) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, pixelWidth) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, pixelHeight) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, aspectRatio) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, renderScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, imageScalingMode) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, upscalingFilter) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, fsrOverrideSharpness) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, fsrSharpness) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, clearDepth) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, cameraType) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, isDefaultViewport) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, isHdrEnabled) == 0x105, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, requiresDepthTexture) == 0x106, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, requiresOpaqueTexture) == 0x107, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, postProcessingRequiresDepthTexture) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, xrRendering) == 0x109, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, defaultOpaqueSortFlags) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, xr) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, isStereoEnabled) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, maxShadowDistance) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, postProcessEnabled) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, captureActions) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, volumeLayerMask) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, volumeTrigger) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, isStopNaNEnabled) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, isDitheringEnabled) == 0x141, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, antialiasing) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, antialiasingQuality) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, renderer) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, resolveFinalTarget) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, worldSpaceCameraPos) == 0x15c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraData, "UnityEngine.Rendering.Universal", "CameraData");
