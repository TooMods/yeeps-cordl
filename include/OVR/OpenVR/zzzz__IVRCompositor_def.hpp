#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRCompositor)
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
class __IVRCompositor___CanRenderScene;
}
namespace OVR::OpenVR {
class __IVRCompositor___ClearLastSubmittedFrame;
}
namespace OVR::OpenVR {
class __IVRCompositor___ClearSkyboxOverride;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorBringToFront;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorDumpImages;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorGoToBack;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorQuit;
}
namespace OVR::OpenVR {
class __IVRCompositor___FadeGrid;
}
namespace OVR::OpenVR {
class __IVRCompositor___FadeToColor;
}
namespace OVR::OpenVR {
class __IVRCompositor___ForceInterleavedReprojectionOn;
}
namespace OVR::OpenVR {
class __IVRCompositor___ForceReconnectProcess;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCumulativeStats;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentFadeColor;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentGridAlpha;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentSceneFocusProcess;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTimeRemaining;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTiming;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTimings;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastFrameRenderer;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastPoseForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastPoses;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetMirrorTextureGL;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetTrackingSpace;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetVulkanDeviceExtensionsRequired;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetVulkanInstanceExtensionsRequired;
}
namespace OVR::OpenVR {
class __IVRCompositor___HideMirrorWindow;
}
namespace OVR::OpenVR {
class __IVRCompositor___IsFullscreen;
}
namespace OVR::OpenVR {
class __IVRCompositor___IsMirrorWindowVisible;
}
namespace OVR::OpenVR {
class __IVRCompositor___LockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class __IVRCompositor___PostPresentHandoff;
}
namespace OVR::OpenVR {
class __IVRCompositor___ReleaseMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRCompositor___ReleaseSharedGLTexture;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetExplicitTimingMode;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetSkyboxOverride;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetTrackingSpace;
}
namespace OVR::OpenVR {
class __IVRCompositor___ShouldAppRenderWithLowResources;
}
namespace OVR::OpenVR {
class __IVRCompositor___ShowMirrorWindow;
}
namespace OVR::OpenVR {
class __IVRCompositor___SubmitExplicitTimingData;
}
namespace OVR::OpenVR {
class __IVRCompositor___Submit;
}
namespace OVR::OpenVR {
class __IVRCompositor___SuspendRendering;
}
namespace OVR::OpenVR {
class __IVRCompositor___UnlockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class __IVRCompositor___WaitGetPoses;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRCompositor___CanRenderScene;
}
namespace OVR::OpenVR {
class __IVRCompositor___ClearLastSubmittedFrame;
}
namespace OVR::OpenVR {
class __IVRCompositor___ClearSkyboxOverride;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorBringToFront;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorDumpImages;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorGoToBack;
}
namespace OVR::OpenVR {
class __IVRCompositor___CompositorQuit;
}
namespace OVR::OpenVR {
class __IVRCompositor___FadeGrid;
}
namespace OVR::OpenVR {
class __IVRCompositor___FadeToColor;
}
namespace OVR::OpenVR {
class __IVRCompositor___ForceInterleavedReprojectionOn;
}
namespace OVR::OpenVR {
class __IVRCompositor___ForceReconnectProcess;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCumulativeStats;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentFadeColor;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentGridAlpha;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetCurrentSceneFocusProcess;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTimeRemaining;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTiming;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetFrameTimings;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastFrameRenderer;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastPoseForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetLastPoses;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetMirrorTextureGL;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetTrackingSpace;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetVulkanDeviceExtensionsRequired;
}
namespace OVR::OpenVR {
class __IVRCompositor___GetVulkanInstanceExtensionsRequired;
}
namespace OVR::OpenVR {
class __IVRCompositor___HideMirrorWindow;
}
namespace OVR::OpenVR {
class __IVRCompositor___IsFullscreen;
}
namespace OVR::OpenVR {
class __IVRCompositor___IsMirrorWindowVisible;
}
namespace OVR::OpenVR {
class __IVRCompositor___LockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class __IVRCompositor___PostPresentHandoff;
}
namespace OVR::OpenVR {
class __IVRCompositor___ReleaseMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRCompositor___ReleaseSharedGLTexture;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetExplicitTimingMode;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetSkyboxOverride;
}
namespace OVR::OpenVR {
class __IVRCompositor___SetTrackingSpace;
}
namespace OVR::OpenVR {
class __IVRCompositor___ShouldAppRenderWithLowResources;
}
namespace OVR::OpenVR {
class __IVRCompositor___ShowMirrorWindow;
}
namespace OVR::OpenVR {
class __IVRCompositor___Submit;
}
namespace OVR::OpenVR {
class __IVRCompositor___SubmitExplicitTimingData;
}
namespace OVR::OpenVR {
class __IVRCompositor___SuspendRendering;
}
namespace OVR::OpenVR {
class __IVRCompositor___UnlockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class __IVRCompositor___WaitGetPoses;
}
namespace OVR::OpenVR {
struct IVRCompositor;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___CanRenderScene);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___CompositorBringToFront);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___CompositorDumpImages);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___CompositorGoToBack);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___CompositorQuit);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___FadeGrid);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___FadeToColor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetCumulativeStats);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetFrameTiming);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetFrameTimings);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetLastPoses);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetTrackingSpace);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___HideMirrorWindow);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___IsFullscreen);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___PostPresentHandoff);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___Submit);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___SuspendRendering);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRCompositor___WaitGetPoses);
MARK_VAL_T(::OVR::OpenVR::IVRCompositor);
// Type: ::_SetTrackingSpace
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_SetTrackingSpace*
class CORDL_TYPE __IVRCompositor___SetTrackingSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a17c98, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a17d1c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a17c84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin);

  static inline ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a17bc0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___SetTrackingSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetTrackingSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___SetTrackingSpace(__IVRCompositor___SetTrackingSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetTrackingSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___SetTrackingSpace(__IVRCompositor___SetTrackingSpace const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTrackingSpace
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetTrackingSpace*
class CORDL_TYPE __IVRCompositor___GetTrackingSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a17df8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a17e18, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a17de4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a17d28, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetTrackingSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetTrackingSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetTrackingSpace(__IVRCompositor___GetTrackingSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetTrackingSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetTrackingSpace(__IVRCompositor___GetTrackingSpace const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_WaitGetPoses
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_WaitGetPoses*
class CORDL_TYPE __IVRCompositor___WaitGetPoses : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a17f2c, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                             ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a17fd8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a17f18, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                  ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount);

  static inline ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a17e40, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___WaitGetPoses();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___WaitGetPoses", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___WaitGetPoses(__IVRCompositor___WaitGetPoses&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___WaitGetPoses", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___WaitGetPoses(__IVRCompositor___WaitGetPoses const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___WaitGetPoses, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLastPoses
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetLastPoses*
class CORDL_TYPE __IVRCompositor___GetLastPoses : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a180ec, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                             ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18198, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a180d8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                  ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount);

  static inline ::OVR::OpenVR::__IVRCompositor___GetLastPoses* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a18000, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetLastPoses();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastPoses", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetLastPoses(__IVRCompositor___GetLastPoses&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastPoses", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetLastPoses(__IVRCompositor___GetLastPoses const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetLastPoses, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLastPoseForTrackedDeviceIndex
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*
class CORDL_TYPE __IVRCompositor___GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18298, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18370, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18284, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);

  static inline ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a181c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetLastPoseForTrackedDeviceIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetLastPoseForTrackedDeviceIndex(__IVRCompositor___GetLastPoseForTrackedDeviceIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetLastPoseForTrackedDeviceIndex(__IVRCompositor___GetLastPoseForTrackedDeviceIndex const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_Submit
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_Submit*
class CORDL_TYPE __IVRCompositor___Submit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1847c, size 0x11c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                             ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18598, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18468, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags);

  static inline ::OVR::OpenVR::__IVRCompositor___Submit* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a183a4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___Submit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___Submit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___Submit(__IVRCompositor___Submit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___Submit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___Submit(__IVRCompositor___Submit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___Submit, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ClearLastSubmittedFrame
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ClearLastSubmittedFrame*
class CORDL_TYPE __IVRCompositor___ClearLastSubmittedFrame : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1869c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a186bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18688, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a185cc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ClearLastSubmittedFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ClearLastSubmittedFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ClearLastSubmittedFrame(__IVRCompositor___ClearLastSubmittedFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ClearLastSubmittedFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ClearLastSubmittedFrame(__IVRCompositor___ClearLastSubmittedFrame const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PostPresentHandoff
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_PostPresentHandoff*
class CORDL_TYPE __IVRCompositor___PostPresentHandoff : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18798, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a187b8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18784, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a186c8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___PostPresentHandoff();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___PostPresentHandoff", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___PostPresentHandoff(__IVRCompositor___PostPresentHandoff&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___PostPresentHandoff", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___PostPresentHandoff(__IVRCompositor___PostPresentHandoff const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetFrameTiming
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetFrameTiming*
class CORDL_TYPE __IVRCompositor___GetFrameTiming : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a188b0, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18968, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1889c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo);

  static inline ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a187c4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetFrameTiming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetFrameTiming(__IVRCompositor___GetFrameTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetFrameTiming(__IVRCompositor___GetFrameTiming const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetFrameTiming, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetFrameTimings
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetFrameTimings*
class CORDL_TYPE __IVRCompositor___GetFrameTimings : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18a80, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18b38, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18a6c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames);

  static inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a18994, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetFrameTimings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTimings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetFrameTimings(__IVRCompositor___GetFrameTimings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTimings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetFrameTimings(__IVRCompositor___GetFrameTimings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetFrameTimings, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetFrameTimeRemaining
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetFrameTimeRemaining*
class CORDL_TYPE __IVRCompositor___GetFrameTimeRemaining : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18c34, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18c54, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18c20, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a18b64, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetFrameTimeRemaining();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTimeRemaining", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetFrameTimeRemaining(__IVRCompositor___GetFrameTimeRemaining&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetFrameTimeRemaining", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetFrameTimeRemaining(__IVRCompositor___GetFrameTimeRemaining const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCumulativeStats
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetCumulativeStats*
class CORDL_TYPE __IVRCompositor___GetCumulativeStats : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18d68, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a18e20, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18d54, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes);

  static inline ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a18c7c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetCumulativeStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCumulativeStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetCumulativeStats(__IVRCompositor___GetCumulativeStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCumulativeStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetCumulativeStats(__IVRCompositor___GetCumulativeStats const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_FadeToColor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_FadeToColor*
class CORDL_TYPE __IVRCompositor___FadeToColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a18f18, size 0x114, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1902c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a18f00, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground);

  static inline ::OVR::OpenVR::__IVRCompositor___FadeToColor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a18e3c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___FadeToColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___FadeToColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___FadeToColor(__IVRCompositor___FadeToColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___FadeToColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___FadeToColor(__IVRCompositor___FadeToColor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___FadeToColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCurrentFadeColor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetCurrentFadeColor*
class CORDL_TYPE __IVRCompositor___GetCurrentFadeColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19114, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bBackground, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1919c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a190fc, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t Invoke(bool bBackground);

  static inline ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19038, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetCurrentFadeColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentFadeColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetCurrentFadeColor(__IVRCompositor___GetCurrentFadeColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentFadeColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetCurrentFadeColor(__IVRCompositor___GetCurrentFadeColor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_FadeGrid
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_FadeGrid*
class CORDL_TYPE __IVRCompositor___FadeGrid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a192a4, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t fSeconds, bool bFadeIn, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19360, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1928c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(float_t fSeconds, bool bFadeIn);

  static inline ::OVR::OpenVR::__IVRCompositor___FadeGrid* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a191c8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___FadeGrid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___FadeGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___FadeGrid(__IVRCompositor___FadeGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___FadeGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___FadeGrid(__IVRCompositor___FadeGrid const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___FadeGrid, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCurrentGridAlpha
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetCurrentGridAlpha*
class CORDL_TYPE __IVRCompositor___GetCurrentGridAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1943c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1945c, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19428, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1936c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetCurrentGridAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentGridAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetCurrentGridAlpha(__IVRCompositor___GetCurrentGridAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentGridAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetCurrentGridAlpha(__IVRCompositor___GetCurrentGridAlpha const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetSkyboxOverride
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_SetSkyboxOverride*
class CORDL_TYPE __IVRCompositor___SetSkyboxOverride : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19570, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures, uint32_t unTextureCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19604, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1955c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures, uint32_t unTextureCount);

  static inline ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19484, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___SetSkyboxOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetSkyboxOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___SetSkyboxOverride(__IVRCompositor___SetSkyboxOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetSkyboxOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___SetSkyboxOverride(__IVRCompositor___SetSkyboxOverride const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ClearSkyboxOverride
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ClearSkyboxOverride*
class CORDL_TYPE __IVRCompositor___ClearSkyboxOverride : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a196fc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1971c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a196e8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1962c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ClearSkyboxOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ClearSkyboxOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ClearSkyboxOverride(__IVRCompositor___ClearSkyboxOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ClearSkyboxOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ClearSkyboxOverride(__IVRCompositor___ClearSkyboxOverride const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CompositorBringToFront
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_CompositorBringToFront*
class CORDL_TYPE __IVRCompositor___CompositorBringToFront : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a197f8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19818, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a197e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19728, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___CompositorBringToFront();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorBringToFront", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___CompositorBringToFront(__IVRCompositor___CompositorBringToFront&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorBringToFront", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___CompositorBringToFront(__IVRCompositor___CompositorBringToFront const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CompositorGoToBack
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_CompositorGoToBack*
class CORDL_TYPE __IVRCompositor___CompositorGoToBack : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a198f4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19914, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a198e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19824, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___CompositorGoToBack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorGoToBack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___CompositorGoToBack(__IVRCompositor___CompositorGoToBack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorGoToBack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___CompositorGoToBack(__IVRCompositor___CompositorGoToBack const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CompositorQuit
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_CompositorQuit*
class CORDL_TYPE __IVRCompositor___CompositorQuit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a199f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19a10, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a199dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___CompositorQuit* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19920, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___CompositorQuit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorQuit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___CompositorQuit(__IVRCompositor___CompositorQuit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorQuit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___CompositorQuit(__IVRCompositor___CompositorQuit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___CompositorQuit, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsFullscreen
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_IsFullscreen*
class CORDL_TYPE __IVRCompositor___IsFullscreen : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19aec, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19b0c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19ad8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___IsFullscreen* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19a1c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___IsFullscreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___IsFullscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___IsFullscreen(__IVRCompositor___IsFullscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___IsFullscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___IsFullscreen(__IVRCompositor___IsFullscreen const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___IsFullscreen, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetCurrentSceneFocusProcess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetCurrentSceneFocusProcess*
class CORDL_TYPE __IVRCompositor___GetCurrentSceneFocusProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19c04, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19c24, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19bf0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19b34, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetCurrentSceneFocusProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetCurrentSceneFocusProcess(__IVRCompositor___GetCurrentSceneFocusProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetCurrentSceneFocusProcess(__IVRCompositor___GetCurrentSceneFocusProcess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLastFrameRenderer
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetLastFrameRenderer*
class CORDL_TYPE __IVRCompositor___GetLastFrameRenderer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19d1c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19d3c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19d08, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19c4c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetLastFrameRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastFrameRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetLastFrameRenderer(__IVRCompositor___GetLastFrameRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetLastFrameRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetLastFrameRenderer(__IVRCompositor___GetLastFrameRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CanRenderScene
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_CanRenderScene*
class CORDL_TYPE __IVRCompositor___CanRenderScene : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19e34, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19e54, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19e20, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___CanRenderScene* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19d64, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___CanRenderScene();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CanRenderScene", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___CanRenderScene(__IVRCompositor___CanRenderScene&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CanRenderScene", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___CanRenderScene(__IVRCompositor___CanRenderScene const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___CanRenderScene, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowMirrorWindow
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ShowMirrorWindow*
class CORDL_TYPE __IVRCompositor___ShowMirrorWindow : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a19f4c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a19f6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a19f38, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19e7c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ShowMirrorWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ShowMirrorWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ShowMirrorWindow(__IVRCompositor___ShowMirrorWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ShowMirrorWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ShowMirrorWindow(__IVRCompositor___ShowMirrorWindow const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_HideMirrorWindow
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_HideMirrorWindow*
class CORDL_TYPE __IVRCompositor___HideMirrorWindow : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a048, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a068, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a034, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a19f78, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___HideMirrorWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___HideMirrorWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___HideMirrorWindow(__IVRCompositor___HideMirrorWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___HideMirrorWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___HideMirrorWindow(__IVRCompositor___HideMirrorWindow const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsMirrorWindowVisible
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_IsMirrorWindowVisible*
class CORDL_TYPE __IVRCompositor___IsMirrorWindowVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a144, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a164, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a130, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a074, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___IsMirrorWindowVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___IsMirrorWindowVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___IsMirrorWindowVisible(__IVRCompositor___IsMirrorWindowVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___IsMirrorWindowVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___IsMirrorWindowVisible(__IVRCompositor___IsMirrorWindowVisible const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CompositorDumpImages
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_CompositorDumpImages*
class CORDL_TYPE __IVRCompositor___CompositorDumpImages : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a25c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a27c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a248, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a18c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___CompositorDumpImages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorDumpImages", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___CompositorDumpImages(__IVRCompositor___CompositorDumpImages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___CompositorDumpImages", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___CompositorDumpImages(__IVRCompositor___CompositorDumpImages const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShouldAppRenderWithLowResources
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ShouldAppRenderWithLowResources*
class CORDL_TYPE __IVRCompositor___ShouldAppRenderWithLowResources : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a358, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a378, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a344, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a288, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ShouldAppRenderWithLowResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ShouldAppRenderWithLowResources(__IVRCompositor___ShouldAppRenderWithLowResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ShouldAppRenderWithLowResources(__IVRCompositor___ShouldAppRenderWithLowResources const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ForceInterleavedReprojectionOn
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ForceInterleavedReprojectionOn*
class CORDL_TYPE __IVRCompositor___ForceInterleavedReprojectionOn : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a47c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bOverride, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a504, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a464, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool bOverride);

  static inline ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a3a0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ForceInterleavedReprojectionOn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ForceInterleavedReprojectionOn(__IVRCompositor___ForceInterleavedReprojectionOn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ForceInterleavedReprojectionOn(__IVRCompositor___ForceInterleavedReprojectionOn const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ForceReconnectProcess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ForceReconnectProcess*
class CORDL_TYPE __IVRCompositor___ForceReconnectProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a5e0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a600, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a5cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a510, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ForceReconnectProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ForceReconnectProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ForceReconnectProcess(__IVRCompositor___ForceReconnectProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ForceReconnectProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ForceReconnectProcess(__IVRCompositor___ForceReconnectProcess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SuspendRendering
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_SuspendRendering*
class CORDL_TYPE __IVRCompositor___SuspendRendering : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a6e8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bSuspend, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a770, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a6d0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool bSuspend);

  static inline ::OVR::OpenVR::__IVRCompositor___SuspendRendering* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a60c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___SuspendRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SuspendRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___SuspendRendering(__IVRCompositor___SuspendRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SuspendRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___SuspendRendering(__IVRCompositor___SuspendRendering const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___SuspendRendering, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetMirrorTextureD3D11
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetMirrorTextureD3D11*
class CORDL_TYPE __IVRCompositor___GetMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1a854, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, void* pD3D11DeviceOrResource, ByRef<void*> ppD3D11ShaderResourceView, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1a924, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<void*> ppD3D11ShaderResourceView, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1a840, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, void* pD3D11DeviceOrResource, ByRef<void*> ppD3D11ShaderResourceView);

  static inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a77c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetMirrorTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetMirrorTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetMirrorTextureD3D11(__IVRCompositor___GetMirrorTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetMirrorTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetMirrorTextureD3D11(__IVRCompositor___GetMirrorTextureD3D11 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReleaseMirrorTextureD3D11
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ReleaseMirrorTextureD3D11*
class CORDL_TYPE __IVRCompositor___ReleaseMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1aa28, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pD3D11ShaderResourceView, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1aaac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1aa14, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* pD3D11ShaderResourceView);

  static inline ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1a950, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ReleaseMirrorTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ReleaseMirrorTextureD3D11(__IVRCompositor___ReleaseMirrorTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ReleaseMirrorTextureD3D11(__IVRCompositor___ReleaseMirrorTextureD3D11 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetMirrorTextureGL
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetMirrorTextureGL*
class CORDL_TYPE __IVRCompositor___GetMirrorTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1ab90, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, void* pglSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1ac78, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<uint32_t> pglTextureId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1ab7c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, void* pglSharedTextureHandle);

  static inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1aab8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetMirrorTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetMirrorTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetMirrorTextureGL(__IVRCompositor___GetMirrorTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetMirrorTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetMirrorTextureGL(__IVRCompositor___GetMirrorTextureGL const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReleaseSharedGLTexture
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_ReleaseSharedGLTexture*
class CORDL_TYPE __IVRCompositor___ReleaseSharedGLTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1ad7c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t glTextureId, void* glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1ae30, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1ad68, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t glTextureId, void* glSharedTextureHandle);

  static inline ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1aca4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___ReleaseSharedGLTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ReleaseSharedGLTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___ReleaseSharedGLTexture(__IVRCompositor___ReleaseSharedGLTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___ReleaseSharedGLTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___ReleaseSharedGLTexture(__IVRCompositor___ReleaseSharedGLTexture const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LockGLSharedTextureForAccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_LockGLSharedTextureForAccess*
class CORDL_TYPE __IVRCompositor___LockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1af30, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1afb4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1af1c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* glSharedTextureHandle);

  static inline ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1ae58, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___LockGLSharedTextureForAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___LockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___LockGLSharedTextureForAccess(__IVRCompositor___LockGLSharedTextureForAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___LockGLSharedTextureForAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___LockGLSharedTextureForAccess(__IVRCompositor___LockGLSharedTextureForAccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_UnlockGLSharedTextureForAccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_UnlockGLSharedTextureForAccess*
class CORDL_TYPE __IVRCompositor___UnlockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1b098, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1b11c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1b084, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* glSharedTextureHandle);

  static inline ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1afc0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___UnlockGLSharedTextureForAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___UnlockGLSharedTextureForAccess(__IVRCompositor___UnlockGLSharedTextureForAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___UnlockGLSharedTextureForAccess(__IVRCompositor___UnlockGLSharedTextureForAccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVulkanInstanceExtensionsRequired
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetVulkanInstanceExtensionsRequired*
class CORDL_TYPE __IVRCompositor___GetVulkanInstanceExtensionsRequired : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1b214, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1b2a8, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1b200, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1b128, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetVulkanInstanceExtensionsRequired();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetVulkanInstanceExtensionsRequired(__IVRCompositor___GetVulkanInstanceExtensionsRequired&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetVulkanInstanceExtensionsRequired(__IVRCompositor___GetVulkanInstanceExtensionsRequired const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetVulkanDeviceExtensionsRequired
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_GetVulkanDeviceExtensionsRequired*
class CORDL_TYPE __IVRCompositor___GetVulkanDeviceExtensionsRequired : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1b3a8, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1b464, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1b394, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(void* pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1b2d0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___GetVulkanDeviceExtensionsRequired();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___GetVulkanDeviceExtensionsRequired(__IVRCompositor___GetVulkanDeviceExtensionsRequired&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___GetVulkanDeviceExtensionsRequired(__IVRCompositor___GetVulkanDeviceExtensionsRequired const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetExplicitTimingMode
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_SetExplicitTimingMode*
class CORDL_TYPE __IVRCompositor___SetExplicitTimingMode : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1b564, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1b5e8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1b550, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode);

  static inline ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1b48c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___SetExplicitTimingMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetExplicitTimingMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___SetExplicitTimingMode(__IVRCompositor___SetExplicitTimingMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SetExplicitTimingMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___SetExplicitTimingMode(__IVRCompositor___SetExplicitTimingMode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SubmitExplicitTimingData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRCompositor::_SubmitExplicitTimingData*
class CORDL_TYPE __IVRCompositor___SubmitExplicitTimingData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a1b6c4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a1b6e4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a1b6b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke();

  static inline ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a1b5f4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRCompositor___SubmitExplicitTimingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SubmitExplicitTimingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRCompositor___SubmitExplicitTimingData(__IVRCompositor___SubmitExplicitTimingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRCompositor___SubmitExplicitTimingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRCompositor___SubmitExplicitTimingData(__IVRCompositor___SubmitExplicitTimingData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRCompositor
// SizeInfo { instance_size: 344, native_size: 344, calculated_instance_size: 344, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRCompositor
struct CORDL_TYPE IVRCompositor {
public:
  // Declarations
  using _CanRenderScene = ::OVR::OpenVR::__IVRCompositor___CanRenderScene;

  using _ClearLastSubmittedFrame = ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame;

  using _ClearSkyboxOverride = ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride;

  using _CompositorBringToFront = ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront;

  using _CompositorDumpImages = ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages;

  using _CompositorGoToBack = ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack;

  using _CompositorQuit = ::OVR::OpenVR::__IVRCompositor___CompositorQuit;

  using _FadeGrid = ::OVR::OpenVR::__IVRCompositor___FadeGrid;

  using _FadeToColor = ::OVR::OpenVR::__IVRCompositor___FadeToColor;

  using _ForceInterleavedReprojectionOn = ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn;

  using _ForceReconnectProcess = ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess;

  using _GetCumulativeStats = ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats;

  using _GetCurrentFadeColor = ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor;

  using _GetCurrentGridAlpha = ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha;

  using _GetCurrentSceneFocusProcess = ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess;

  using _GetFrameTimeRemaining = ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining;

  using _GetFrameTiming = ::OVR::OpenVR::__IVRCompositor___GetFrameTiming;

  using _GetFrameTimings = ::OVR::OpenVR::__IVRCompositor___GetFrameTimings;

  using _GetLastFrameRenderer = ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer;

  using _GetLastPoseForTrackedDeviceIndex = ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex;

  using _GetLastPoses = ::OVR::OpenVR::__IVRCompositor___GetLastPoses;

  using _GetMirrorTextureD3D11 = ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11;

  using _GetMirrorTextureGL = ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL;

  using _GetTrackingSpace = ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace;

  using _GetVulkanDeviceExtensionsRequired = ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired;

  using _GetVulkanInstanceExtensionsRequired = ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired;

  using _HideMirrorWindow = ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow;

  using _IsFullscreen = ::OVR::OpenVR::__IVRCompositor___IsFullscreen;

  using _IsMirrorWindowVisible = ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible;

  using _LockGLSharedTextureForAccess = ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess;

  using _PostPresentHandoff = ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff;

  using _ReleaseMirrorTextureD3D11 = ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11;

  using _ReleaseSharedGLTexture = ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture;

  using _SetExplicitTimingMode = ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode;

  using _SetSkyboxOverride = ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride;

  using _SetTrackingSpace = ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace;

  using _ShouldAppRenderWithLowResources = ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources;

  using _ShowMirrorWindow = ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow;

  using _Submit = ::OVR::OpenVR::__IVRCompositor___Submit;

  using _SubmitExplicitTimingData = ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData;

  using _SuspendRendering = ::OVR::OpenVR::__IVRCompositor___SuspendRendering;

  using _UnlockGLSharedTextureForAccess = ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess;

  using _WaitGetPoses = ::OVR::OpenVR::__IVRCompositor___WaitGetPoses;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor();

  // Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*", modifiers: "", def_value: None }, CppParam { name: "GetTrackingSpace", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*", modifiers: "", def_value: None }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::__IVRCompositor___WaitGetPoses*", modifiers: "",
  // def_value: None }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoses*", modifiers: "", def_value: None }, CppParam { name: "GetLastPoseForTrackedDeviceIndex",
  // ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: None }, CppParam { name: "Submit", ty: "::OVR::OpenVR::__IVRCompositor___Submit*", modifiers:
  // "", def_value: None }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*", modifiers: "", def_value: None }, CppParam { name:
  // "PostPresentHandoff", ty: "::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*", modifiers: "", def_value: None }, CppParam { name: "GetFrameTiming", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetFrameTiming*", modifiers: "", def_value: None }, CppParam { name: "GetFrameTimings", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTimings*", modifiers: "",
  // def_value: None }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*", modifiers: "", def_value: None }, CppParam { name:
  // "GetCumulativeStats", ty: "::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*", modifiers: "", def_value: None }, CppParam { name: "FadeToColor", ty:
  // "::OVR::OpenVR::__IVRCompositor___FadeToColor*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*", modifiers:
  // "", def_value: None }, CppParam { name: "FadeGrid", ty: "::OVR::OpenVR::__IVRCompositor___FadeGrid*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentGridAlpha", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*", modifiers: "", def_value: None }, CppParam { name: "SetSkyboxOverride", ty: "::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*",
  // modifiers: "", def_value: None }, CppParam { name: "ClearSkyboxOverride", ty: "::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*", modifiers: "", def_value: None }, CppParam { name:
  // "CompositorBringToFront", ty: "::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*", modifiers: "", def_value: None }, CppParam { name: "CompositorGoToBack", ty:
  // "::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*", modifiers: "", def_value: None }, CppParam { name: "CompositorQuit", ty: "::OVR::OpenVR::__IVRCompositor___CompositorQuit*", modifiers: "",
  // def_value: None }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::__IVRCompositor___IsFullscreen*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneFocusProcess", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*", modifiers: "", def_value: None }, CppParam { name: "GetLastFrameRenderer", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*", modifiers: "", def_value: None }, CppParam { name: "CanRenderScene", ty: "::OVR::OpenVR::__IVRCompositor___CanRenderScene*", modifiers:
  // "", def_value: None }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*", modifiers: "", def_value: None }, CppParam { name: "HideMirrorWindow", ty:
  // "::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*", modifiers: "", def_value: None }, CppParam { name: "IsMirrorWindowVisible", ty: "::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*",
  // modifiers: "", def_value: None }, CppParam { name: "CompositorDumpImages", ty: "::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*", modifiers: "", def_value: None }, CppParam { name:
  // "ShouldAppRenderWithLowResources", ty: "::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*", modifiers: "", def_value: None }, CppParam { name: "ForceInterleavedReprojectionOn",
  // ty: "::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*", modifiers: "", def_value: None }, CppParam { name: "ForceReconnectProcess", ty:
  // "::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*", modifiers: "", def_value: None }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::__IVRCompositor___SuspendRendering*",
  // modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*", modifiers: "", def_value: None }, CppParam { name:
  // "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureGL", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*", modifiers: "", def_value: None }, CppParam { name: "ReleaseSharedGLTexture", ty:
  // "::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*", modifiers: "", def_value: None }, CppParam { name: "LockGLSharedTextureForAccess", ty:
  // "::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*", modifiers: "", def_value: None }, CppParam { name: "UnlockGLSharedTextureForAccess", ty:
  // "::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*", modifiers: "", def_value: None }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: None }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty:
  // "::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: None }, CppParam { name: "SetExplicitTimingMode", ty:
  // "::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*", modifiers: "", def_value: None }, CppParam { name: "SubmitExplicitTimingData", ty:
  // "::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*", modifiers: "", def_value: None }]
  constexpr IVRCompositor(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* SetTrackingSpace, ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* GetTrackingSpace,
                          ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* WaitGetPoses, ::OVR::OpenVR::__IVRCompositor___GetLastPoses* GetLastPoses,
                          ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::__IVRCompositor___Submit* Submit,
                          ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* ClearLastSubmittedFrame, ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* PostPresentHandoff,
                          ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* GetFrameTiming, ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* GetFrameTimings,
                          ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* GetFrameTimeRemaining, ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* GetCumulativeStats,
                          ::OVR::OpenVR::__IVRCompositor___FadeToColor* FadeToColor, ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* GetCurrentFadeColor,
                          ::OVR::OpenVR::__IVRCompositor___FadeGrid* FadeGrid, ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* GetCurrentGridAlpha,
                          ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* SetSkyboxOverride, ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* ClearSkyboxOverride,
                          ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* CompositorBringToFront, ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* CompositorGoToBack,
                          ::OVR::OpenVR::__IVRCompositor___CompositorQuit* CompositorQuit, ::OVR::OpenVR::__IVRCompositor___IsFullscreen* IsFullscreen,
                          ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess, ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* GetLastFrameRenderer,
                          ::OVR::OpenVR::__IVRCompositor___CanRenderScene* CanRenderScene, ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* ShowMirrorWindow,
                          ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* HideMirrorWindow, ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* IsMirrorWindowVisible,
                          ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* CompositorDumpImages,
                          ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources,
                          ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn,
                          ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* ForceReconnectProcess, ::OVR::OpenVR::__IVRCompositor___SuspendRendering* SuspendRendering,
                          ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* GetMirrorTextureD3D11, ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11,
                          ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* GetMirrorTextureGL, ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* ReleaseSharedGLTexture,
                          ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* LockGLSharedTextureForAccess,
                          ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess,
                          ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired,
                          ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired,
                          ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* SetExplicitTimingMode, ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* SubmitExplicitTimingData) noexcept;

  /// @brief Field SetTrackingSpace, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* SetTrackingSpace;

  /// @brief Field GetTrackingSpace, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* GetTrackingSpace;

  /// @brief Field WaitGetPoses, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* WaitGetPoses;

  /// @brief Field GetLastPoses, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetLastPoses* GetLastPoses;

  /// @brief Field GetLastPoseForTrackedDeviceIndex, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;

  /// @brief Field Submit, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___Submit* Submit;

  /// @brief Field ClearLastSubmittedFrame, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* ClearLastSubmittedFrame;

  /// @brief Field PostPresentHandoff, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* PostPresentHandoff;

  /// @brief Field GetFrameTiming, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* GetFrameTiming;

  /// @brief Field GetFrameTimings, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* GetFrameTimings;

  /// @brief Field GetFrameTimeRemaining, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* GetFrameTimeRemaining;

  /// @brief Field GetCumulativeStats, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* GetCumulativeStats;

  /// @brief Field FadeToColor, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___FadeToColor* FadeToColor;

  /// @brief Field GetCurrentFadeColor, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* GetCurrentFadeColor;

  /// @brief Field FadeGrid, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___FadeGrid* FadeGrid;

  /// @brief Field GetCurrentGridAlpha, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* GetCurrentGridAlpha;

  /// @brief Field SetSkyboxOverride, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* SetSkyboxOverride;

  /// @brief Field ClearSkyboxOverride, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* ClearSkyboxOverride;

  /// @brief Field CompositorBringToFront, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* CompositorBringToFront;

  /// @brief Field CompositorGoToBack, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* CompositorGoToBack;

  /// @brief Field CompositorQuit, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___CompositorQuit* CompositorQuit;

  /// @brief Field IsFullscreen, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___IsFullscreen* IsFullscreen;

  /// @brief Field GetCurrentSceneFocusProcess, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;

  /// @brief Field GetLastFrameRenderer, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* GetLastFrameRenderer;

  /// @brief Field CanRenderScene, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___CanRenderScene* CanRenderScene;

  /// @brief Field ShowMirrorWindow, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* ShowMirrorWindow;

  /// @brief Field HideMirrorWindow, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* HideMirrorWindow;

  /// @brief Field IsMirrorWindowVisible, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* IsMirrorWindowVisible;

  /// @brief Field CompositorDumpImages, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* CompositorDumpImages;

  /// @brief Field ShouldAppRenderWithLowResources, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;

  /// @brief Field ForceInterleavedReprojectionOn, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;

  /// @brief Field ForceReconnectProcess, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* ForceReconnectProcess;

  /// @brief Field SuspendRendering, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___SuspendRendering* SuspendRendering;

  /// @brief Field GetMirrorTextureD3D11, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* GetMirrorTextureD3D11;

  /// @brief Field ReleaseMirrorTextureD3D11, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;

  /// @brief Field GetMirrorTextureGL, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* GetMirrorTextureGL;

  /// @brief Field ReleaseSharedGLTexture, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* ReleaseSharedGLTexture;

  /// @brief Field LockGLSharedTextureForAccess, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;

  /// @brief Field UnlockGLSharedTextureForAccess, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;

  /// @brief Field GetVulkanInstanceExtensionsRequired, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;

  /// @brief Field GetVulkanDeviceExtensionsRequired, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;

  /// @brief Field SetExplicitTimingMode, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* SetExplicitTimingMode;

  /// @brief Field SubmitExplicitTimingData, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* SubmitExplicitTimingData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor, 0x158>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetTrackingSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetTrackingSpace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, WaitGetPoses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastPoses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastPoseForTrackedDeviceIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, Submit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ClearLastSubmittedFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, PostPresentHandoff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTiming) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTimings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTimeRemaining) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCumulativeStats) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, FadeToColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentFadeColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, FadeGrid) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentGridAlpha) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetSkyboxOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ClearSkyboxOverride) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorBringToFront) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorGoToBack) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorQuit) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, IsFullscreen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentSceneFocusProcess) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastFrameRenderer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CanRenderScene) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ShowMirrorWindow) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, HideMirrorWindow) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, IsMirrorWindowVisible) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorDumpImages) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ShouldAppRenderWithLowResources) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ForceInterleavedReprojectionOn) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ForceReconnectProcess) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SuspendRendering) == 0x100, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetMirrorTextureD3D11) == 0x108, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ReleaseMirrorTextureD3D11) == 0x110, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetMirrorTextureGL) == 0x118, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ReleaseSharedGLTexture) == 0x120, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, LockGLSharedTextureForAccess) == 0x128, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, UnlockGLSharedTextureForAccess) == 0x130, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetVulkanInstanceExtensionsRequired) == 0x138, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetVulkanDeviceExtensionsRequired) == 0x140, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetExplicitTimingMode) == 0x148, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SubmitExplicitTimingData) == 0x150, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___CanRenderScene);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___CanRenderScene*, "OVR.OpenVR", "IVRCompositor/_CanRenderScene");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*, "OVR.OpenVR", "IVRCompositor/_ClearLastSubmittedFrame");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_ClearSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___CompositorBringToFront);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*, "OVR.OpenVR", "IVRCompositor/_CompositorBringToFront");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___CompositorDumpImages);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*, "OVR.OpenVR", "IVRCompositor/_CompositorDumpImages");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___CompositorGoToBack);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*, "OVR.OpenVR", "IVRCompositor/_CompositorGoToBack");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___CompositorQuit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___CompositorQuit*, "OVR.OpenVR", "IVRCompositor/_CompositorQuit");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___FadeGrid);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___FadeGrid*, "OVR.OpenVR", "IVRCompositor/_FadeGrid");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___FadeToColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___FadeToColor*, "OVR.OpenVR", "IVRCompositor/_FadeToColor");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*, "OVR.OpenVR", "IVRCompositor/_ForceReconnectProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetCumulativeStats);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*, "OVR.OpenVR", "IVRCompositor/_GetCumulativeStats");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*, "OVR.OpenVR", "IVRCompositor/_GetCurrentFadeColor");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*, "OVR.OpenVR", "IVRCompositor/_GetCurrentGridAlpha");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*, "OVR.OpenVR", "IVRCompositor/_GetCurrentSceneFocusProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimeRemaining");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetFrameTiming);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetFrameTiming*, "OVR.OpenVR", "IVRCompositor/_GetFrameTiming");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetFrameTimings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetFrameTimings*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimings");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*, "OVR.OpenVR", "IVRCompositor/_GetLastFrameRenderer");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*, "OVR.OpenVR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetLastPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetLastPoses*, "OVR.OpenVR", "IVRCompositor/_GetLastPoses");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureGL");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_GetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*, "OVR.OpenVR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*, "OVR.OpenVR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___HideMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*, "OVR.OpenVR", "IVRCompositor/_HideMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___IsFullscreen);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___IsFullscreen*, "OVR.OpenVR", "IVRCompositor/_IsFullscreen");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*, "OVR.OpenVR", "IVRCompositor/_IsMirrorWindowVisible");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*, "OVR.OpenVR", "IVRCompositor/_LockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___PostPresentHandoff);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*, "OVR.OpenVR", "IVRCompositor/_PostPresentHandoff");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*, "OVR.OpenVR", "IVRCompositor/_ReleaseSharedGLTexture");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*, "OVR.OpenVR", "IVRCompositor/_SetExplicitTimingMode");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_SetSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_SetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*, "OVR.OpenVR", "IVRCompositor/_ShouldAppRenderWithLowResources");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*, "OVR.OpenVR", "IVRCompositor/_ShowMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___Submit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___Submit*, "OVR.OpenVR", "IVRCompositor/_Submit");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*, "OVR.OpenVR", "IVRCompositor/_SubmitExplicitTimingData");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___SuspendRendering);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___SuspendRendering*, "OVR.OpenVR", "IVRCompositor/_SuspendRendering");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*, "OVR.OpenVR", "IVRCompositor/_UnlockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::__IVRCompositor___WaitGetPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRCompositor___WaitGetPoses*, "OVR.OpenVR", "IVRCompositor/_WaitGetPoses");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor, "OVR.OpenVR", "IVRCompositor");
