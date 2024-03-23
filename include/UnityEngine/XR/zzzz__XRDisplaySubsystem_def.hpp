#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
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
// Forward declare root types
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__LateLatchNode;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__TextureLayout;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRBlitParams;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderParameter;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass);
// Type: ::LateLatchNode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::LateLatchNode
struct CORDL_TYPE __XRDisplaySubsystem__LateLatchNode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped
  enum struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_LeftHand = static_cast<int32_t>(0x1),
    __E_RightHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDisplaySubsystem__LateLatchNode_Unwrapped() const noexcept {
    return static_cast<____XRDisplaySubsystem__LateLatchNode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__LateLatchNode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Head value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const Head;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const LeftHand;

  /// @brief Field RightHand value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const RightHand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: ::TextureLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::TextureLayout
struct CORDL_TYPE __XRDisplaySubsystem__TextureLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDisplaySubsystem__TextureLayout_Unwrapped
  enum struct ____XRDisplaySubsystem__TextureLayout_Unwrapped : int32_t {
    __E_Texture2DArray = static_cast<int32_t>(0x1),
    __E_SingleTexture2D = static_cast<int32_t>(0x2),
    __E_SeparateTexture2Ds = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDisplaySubsystem__TextureLayout_Unwrapped() const noexcept {
    return static_cast<____XRDisplaySubsystem__TextureLayout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__TextureLayout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__TextureLayout(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field SeparateTexture2Ds value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout const SeparateTexture2Ds;

  /// @brief Field SingleTexture2D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout const SingleTexture2D;

  /// @brief Field Texture2DArray value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout const Texture2DArray;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRRenderParameter
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 237, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::XRRenderParameter
struct CORDL_TYPE __XRDisplaySubsystem__XRRenderParameter {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRRenderParameter();

  // Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "",
  // def_value: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "previousView", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__XRRenderParameter(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 projection, ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh,
                                                    int32_t textureArraySlice, ::UnityEngine::Matrix4x4 previousView, bool isPreviousViewValid) noexcept;

  /// @brief Field view, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 view;

  /// @brief Field projection, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projection;

  /// @brief Field viewport, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field occlusionMesh, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> occlusionMesh;

  /// @brief Field textureArraySlice, offset: 0x98, size: 0x4, def value: None
  int32_t textureArraySlice;

  /// @brief Field previousView, offset: 0x9c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 previousView;

  /// @brief Field isPreviousViewValid, offset: 0xdc, size: 0x1, def value: None
  bool isPreviousViewValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, 0xe0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, view) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, projection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, viewport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, occlusionMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, textureArraySlice) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, previousView) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, isPreviousViewValid) == 0xdc, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRRenderPass
// SizeInfo { instance_size: 216, native_size: 216, calculated_instance_size: 216, calculated_native_size: 228, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::XRRenderPass
struct CORDL_TYPE __XRDisplaySubsystem__XRRenderPass {
public:
  // Declarations
  /// @brief Method GetRenderParameter, addr 0x18f8714, size 0x5c, virtual false, abstract: false, final false
  inline void GetRenderParameter(::UnityEngine::Camera* camera, int32_t renderParameterIndex, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter> renderParameter);

  /// @brief Method GetRenderParameterCount, addr 0x18f87cc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRenderParameterCount();

  /// @brief Method GetRenderParameterCount_Injected, addr 0x18f8808, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderParameterCount_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass> _unity_self);

  /// @brief Method GetRenderParameter_Injected, addr 0x18f8770, size 0x5c, virtual false, abstract: false, final false
  static inline void GetRenderParameter_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass> _unity_self, ::UnityEngine::Camera* camera, int32_t renderParameterIndex,
                                                 ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter> renderParameter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRRenderPass();

  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__XRRenderPass(void* displaySubsystemInstance, int32_t renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                               ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                               ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc,
                                               bool shouldFillOutDepth, int32_t cullingPassIndex) noexcept;

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  void* displaySubsystemInstance;

  /// @brief Field renderPassIndex, offset: 0x8, size: 0x4, def value: None
  int32_t renderPassIndex;

  /// @brief Field renderTarget, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  /// @brief Field renderTargetDesc, offset: 0x38, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  /// @brief Field hasMotionVectorPass, offset: 0x6c, size: 0x1, def value: None
  bool hasMotionVectorPass;

  /// @brief Field motionVectorRenderTarget, offset: 0x70, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  /// @brief Field motionVectorRenderTargetDesc, offset: 0x98, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  /// @brief Field shouldFillOutDepth, offset: 0xcc, size: 0x1, def value: None
  bool shouldFillOutDepth;

  /// @brief Field cullingPassIndex, offset: 0xd0, size: 0x4, def value: None
  int32_t cullingPassIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, renderPassIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, renderTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, renderTargetDesc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, hasMotionVectorPass) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, motionVectorRenderTarget) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, motionVectorRenderTargetDesc) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, shouldFillOutDepth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, cullingPassIndex) == 0xd0, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRBlitParams
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::XRBlitParams
struct CORDL_TYPE __XRDisplaySubsystem__XRBlitParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRBlitParams();

  // Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None
  // }]
  constexpr __XRDisplaySubsystem__XRBlitParams(::UnityW<::UnityEngine::RenderTexture> srcTex, int32_t srcTexArraySlice, ::UnityEngine::Rect srcRect, ::UnityEngine::Rect destRect) noexcept;

  /// @brief Field srcTex, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> srcTex;

  /// @brief Field srcTexArraySlice, offset: 0x8, size: 0x4, def value: None
  int32_t srcTexArraySlice;

  /// @brief Field srcRect, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Rect srcRect;

  /// @brief Field destRect, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rect destRect;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, srcTex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, srcTexArraySlice) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, srcRect) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, destRect) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRMirrorViewBlitDesc
// SizeInfo { instance_size: 16, native_size: 24, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::XRDisplaySubsystem::XRMirrorViewBlitDesc
struct CORDL_TYPE __XRDisplaySubsystem__XRMirrorViewBlitDesc {
public:
  // Declarations
  /// @brief Method GetBlitParameter, addr 0x18f8844, size 0x54, virtual false, abstract: false, final false
  inline void GetBlitParameter(int32_t blitParameterIndex, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams> blitParameter);

  /// @brief Method GetBlitParameter_Injected, addr 0x18f8898, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlitParameter_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc> _unity_self, int32_t blitParameterIndex,
                                               ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams> blitParameter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRMirrorViewBlitDesc();

  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__XRMirrorViewBlitDesc(void* displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept;

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  void* displaySubsystemInstance;

  /// @brief Field nativeBlitAvailable, offset: 0x8, size: 0x1, def value: None
  bool nativeBlitAvailable;

  /// @brief Field nativeBlitInvalidStates, offset: 0x9, size: 0x1, def value: None
  bool nativeBlitInvalidStates;

  /// @brief Field blitParamsCount, offset: 0xc, size: 0x4, def value: None
  int32_t blitParamsCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, nativeBlitAvailable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, nativeBlitInvalidStates) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, blitParamsCount) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout, "UnityEngine.XR", "XRDisplaySubsystem/TextureLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams, "UnityEngine.XR", "XRDisplaySubsystem/XRBlitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
