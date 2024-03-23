#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer)
namespace GlobalNamespace {
class __ScriptableRenderer__Profiling__RenderBlock;
}
namespace GlobalNamespace {
class __ScriptableRenderer__Profiling__RenderPass;
}
namespace GlobalNamespace {
struct __ScriptableRenderer__RenderBlocks__BlockRange;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__Profiling;
}
namespace UnityEngine::Rendering::Universal {
struct __ScriptableRenderer__RenderBlocks;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
struct __ScriptableRenderer__RenderPassDescriptor;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__RenderingFeatures;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class __ScriptableRenderer__Profiling__RenderBlock;
}
namespace GlobalNamespace {
class __ScriptableRenderer__Profiling__RenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__Profiling;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
class __ScriptableRenderer__RenderingFeatures;
}
namespace GlobalNamespace {
struct __ScriptableRenderer__RenderBlocks__BlockRange;
}
namespace UnityEngine::Rendering::Universal {
struct __ScriptableRenderer__RenderBlocks;
}
namespace UnityEngine::Rendering::Universal {
struct __ScriptableRenderer__RenderPassDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock);
MARK_REF_PTR_T(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures);
MARK_VAL_T(::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor);
// Type: ::RenderBlock
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScriptableRenderer::Profiling::RenderBlock*
class CORDL_TYPE __ScriptableRenderer__Profiling__RenderBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field afterRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_afterRendering, put = setStaticF_afterRendering))::UnityEngine::Rendering::ProfilingSampler* afterRendering;

  /// @brief Field beforeRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beforeRendering, put = setStaticF_beforeRendering))::UnityEngine::Rendering::ProfilingSampler* beforeRendering;

  /// @brief Field mainRenderingOpaque, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mainRenderingOpaque, put = setStaticF_mainRenderingOpaque))::UnityEngine::Rendering::ProfilingSampler* mainRenderingOpaque;

  /// @brief Field mainRenderingTransparent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mainRenderingTransparent, put = setStaticF_mainRenderingTransparent))::UnityEngine::Rendering::ProfilingSampler* mainRenderingTransparent;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_afterRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beforeRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingOpaque();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingTransparent();

  static inline void setStaticF_afterRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_beforeRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_mainRenderingOpaque(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_mainRenderingTransparent(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__Profiling__RenderBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling__RenderBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRenderer__Profiling__RenderBlock(__ScriptableRenderer__Profiling__RenderBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling__RenderBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRenderer__Profiling__RenderBlock(__ScriptableRenderer__Profiling__RenderBlock const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"RenderPassBlock" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RenderPass
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScriptableRenderer::Profiling::RenderPass*
class CORDL_TYPE __ScriptableRenderer__Profiling__RenderPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field configure, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_configure, put = setStaticF_configure))::UnityEngine::Rendering::ProfilingSampler* configure;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_configure();

  static inline void setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__Profiling__RenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling__RenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRenderer__Profiling__RenderPass(__ScriptableRenderer__Profiling__RenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling__RenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRenderer__Profiling__RenderPass(__ScriptableRenderer__Profiling__RenderPass const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderPass" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Profiling
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScriptableRenderer::Profiling*
class CORDL_TYPE __ScriptableRenderer__Profiling : public ::System::Object {
public:
  // Declarations
  using RenderBlock = ::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock;

  using RenderPass = ::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass;

  /// @brief Field addRenderPasses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_addRenderPasses, put = setStaticF_addRenderPasses))::UnityEngine::Rendering::ProfilingSampler* addRenderPasses;

  /// @brief Field clearRenderingState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clearRenderingState, put = setStaticF_clearRenderingState))::UnityEngine::Rendering::ProfilingSampler* clearRenderingState;

  /// @brief Field configure, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_configure, put = setStaticF_configure))::UnityEngine::Rendering::ProfilingSampler* configure;

  /// @brief Field drawGizmos, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_drawGizmos, put = setStaticF_drawGizmos))::UnityEngine::Rendering::ProfilingSampler* drawGizmos;

  /// @brief Field execute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_execute, put = setStaticF_execute))::UnityEngine::Rendering::ProfilingSampler* execute;

  /// @brief Field internalFinishRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_internalFinishRendering, put = setStaticF_internalFinishRendering))::UnityEngine::Rendering::ProfilingSampler* internalFinishRendering;

  /// @brief Field internalStartRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_internalStartRendering, put = setStaticF_internalStartRendering))::UnityEngine::Rendering::ProfilingSampler* internalStartRendering;

  /// @brief Field setAttachmentList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setAttachmentList, put = setStaticF_setAttachmentList))::UnityEngine::Rendering::ProfilingSampler* setAttachmentList;

  /// @brief Field setMRTAttachmentsList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setMRTAttachmentsList, put = setStaticF_setMRTAttachmentsList))::UnityEngine::Rendering::ProfilingSampler* setMRTAttachmentsList;

  /// @brief Field setPerCameraShaderVariables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setPerCameraShaderVariables, put = setStaticF_setPerCameraShaderVariables))::UnityEngine::Rendering::ProfilingSampler* setPerCameraShaderVariables;

  /// @brief Field setupCamera, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setupCamera, put = setStaticF_setupCamera))::UnityEngine::Rendering::ProfilingSampler* setupCamera;

  /// @brief Field setupFrameData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setupFrameData, put = setStaticF_setupFrameData))::UnityEngine::Rendering::ProfilingSampler* setupFrameData;

  /// @brief Field setupLights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setupLights, put = setStaticF_setupLights))::UnityEngine::Rendering::ProfilingSampler* setupLights;

  /// @brief Field sortRenderPasses, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sortRenderPasses, put = setStaticF_sortRenderPasses))::UnityEngine::Rendering::ProfilingSampler* sortRenderPasses;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_addRenderPasses();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_clearRenderingState();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_configure();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_drawGizmos();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_execute();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalFinishRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalStartRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setAttachmentList();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setMRTAttachmentsList();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setPerCameraShaderVariables();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCamera();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupFrameData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupLights();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_sortRenderPasses();

  static inline void setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_execute(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_internalFinishRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_internalStartRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setAttachmentList(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setMRTAttachmentsList(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupFrameData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupLights(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRenderer__Profiling(__ScriptableRenderer__Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRenderer__Profiling(__ScriptableRenderer__Profiling const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::RenderPassDescriptor
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ScriptableRenderer::RenderPassDescriptor
struct CORDL_TYPE __ScriptableRenderer__RenderPassDescriptor {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2e20114, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t sampleCount, int32_t rtID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__RenderPassDescriptor();

  // Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "samples", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "depthID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScriptableRenderer__RenderPassDescriptor(int32_t w, int32_t h, int32_t samples, int32_t depthID) noexcept;

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  int32_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  int32_t h;

  /// @brief Field samples, offset: 0x8, size: 0x4, def value: None
  int32_t samples;

  /// @brief Field depthID, offset: 0xc, size: 0x4, def value: None
  int32_t depthID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, h) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, depthID) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::RenderingFeatures
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScriptableRenderer::RenderingFeatures*
class CORDL_TYPE __ScriptableRenderer__RenderingFeatures : public ::System::Object {
public:
  // Declarations
  /// @brief Field <cameraStacking>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__cameraStacking_k__BackingField, put = __cordl_internal_set__cameraStacking_k__BackingField)) bool _cameraStacking_k__BackingField;

  /// @brief Field <msaa>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__msaa_k__BackingField, put = __cordl_internal_set__msaa_k__BackingField)) bool _msaa_k__BackingField;

  __declspec(property(get = get_cameraStacking, put = set_cameraStacking)) bool cameraStacking;

  __declspec(property(get = get_msaa, put = set_msaa)) bool msaa;

  static inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* New_ctor();

  constexpr bool const& __cordl_internal_get__cameraStacking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cameraStacking_k__BackingField();

  constexpr bool const& __cordl_internal_get__msaa_k__BackingField() const;

  constexpr bool& __cordl_internal_get__msaa_k__BackingField();

  constexpr void __cordl_internal_set__cameraStacking_k__BackingField(bool value);

  constexpr void __cordl_internal_set__msaa_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2e21964, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cameraStacking, addr 0x2e26e7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_cameraStacking();

  /// @brief Method get_msaa, addr 0x2e26e90, size 0x8, virtual false, abstract: false, final false
  inline bool get_msaa();

  /// @brief Method set_cameraStacking, addr 0x2e26e84, size 0xc, virtual false, abstract: false, final false
  inline void set_cameraStacking(bool value);

  /// @brief Method set_msaa, addr 0x2e26e98, size 0xc, virtual false, abstract: false, final false
  inline void set_msaa(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__RenderingFeatures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__RenderingFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRenderer__RenderingFeatures(__ScriptableRenderer__RenderingFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__RenderingFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRenderer__RenderingFeatures(__ScriptableRenderer__RenderingFeatures const&) = delete;

  /// @brief Field <cameraStacking>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____cameraStacking_k__BackingField;

  /// @brief Field <msaa>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____msaa_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures, ____cameraStacking_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures, ____msaa_k__BackingField) == 0x11, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::RenderPassBlock
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScriptableRenderer::RenderPassBlock*
class CORDL_TYPE __ScriptableRenderer__RenderPassBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field AfterRendering, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AfterRendering, put = setStaticF_AfterRendering)) int32_t AfterRendering;

  /// @brief Field BeforeRendering, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BeforeRendering, put = setStaticF_BeforeRendering)) int32_t BeforeRendering;

  /// @brief Field MainRenderingOpaque, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MainRenderingOpaque, put = setStaticF_MainRenderingOpaque)) int32_t MainRenderingOpaque;

  /// @brief Field MainRenderingTransparent, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MainRenderingTransparent, put = setStaticF_MainRenderingTransparent)) int32_t MainRenderingTransparent;

  static inline int32_t getStaticF_AfterRendering();

  static inline int32_t getStaticF_BeforeRendering();

  static inline int32_t getStaticF_MainRenderingOpaque();

  static inline int32_t getStaticF_MainRenderingTransparent();

  static inline void setStaticF_AfterRendering(int32_t value);

  static inline void setStaticF_BeforeRendering(int32_t value);

  static inline void setStaticF_MainRenderingOpaque(int32_t value);

  static inline void setStaticF_MainRenderingTransparent(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__RenderPassBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__RenderPassBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScriptableRenderer__RenderPassBlock(__ScriptableRenderer__RenderPassBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScriptableRenderer__RenderPassBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScriptableRenderer__RenderPassBlock(__ScriptableRenderer__RenderPassBlock const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::BlockRange
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScriptableRenderer::RenderBlocks::BlockRange
struct CORDL_TYPE __ScriptableRenderer__RenderBlocks__BlockRange {
public:
  // Declarations
  __declspec(property(get = get_Current)) int32_t Current;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2e27074, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x2e23d30, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange GetEnumerator();

  /// @brief Method MoveNext, addr 0x2e240d0, size 0x1c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x2e27050, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t begin, int32_t end);

  /// @brief Method get_Current, addr 0x2e2706c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Current();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__RenderBlocks__BlockRange();

  // Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScriptableRenderer__RenderBlocks__BlockRange(int32_t m_Current, int32_t m_End) noexcept;

  /// @brief Field m_Current, offset: 0x0, size: 0x4, def value: None
  int32_t m_Current;

  /// @brief Field m_End, offset: 0x4, size: 0x4, def value: None
  int32_t m_End;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, m_Current) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, m_End) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RenderBlocks
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ScriptableRenderer::RenderBlocks
struct CORDL_TYPE __ScriptableRenderer__RenderBlocks {
public:
  // Declarations
  using BlockRange = ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2e26ffc, size 0x54, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FillBlockRanges, addr 0x2e26ef4, size 0x108, virtual false, abstract: false, final false
  inline void FillBlockRanges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Method GetLength, addr 0x2e231ac, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetLength(int32_t index);

  /// @brief Method GetRange, addr 0x2e23d04, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange GetRange(int32_t index);

  /// @brief Method .ctor, addr 0x2e22ff8, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableRenderer__RenderBlocks();

  // Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: None }, CppParam
  // { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_BlockRangeLengths", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __ScriptableRenderer__RenderBlocks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits,
                                               ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges, ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths) noexcept;

  /// @brief Field m_BlockEventLimits, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits;

  /// @brief Field m_BlockRanges, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges;

  /// @brief Field m_BlockRangeLengths, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks, m_BlockEventLimits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks, m_BlockRanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks, m_BlockRangeLengths) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ScriptableRenderer
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 393, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScriptableRenderer*
class CORDL_TYPE ScriptableRenderer : public ::System::Object {
public:
  // Declarations
  using Profiling = ::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling;

  using RenderBlocks = ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks;

  using RenderPassBlock = ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock;

  using RenderPassDescriptor = ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor;

  using RenderingFeatures = ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures;

  __declspec(property(get = get_DebugHandler))::UnityEngine::Rendering::Universal::DebugHandler* DebugHandler;

  /// @brief Field <DebugHandler>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__DebugHandler_k__BackingField,
                      put = __cordl_internal_set__DebugHandler_k__BackingField))::UnityEngine::Rendering::Universal::DebugHandler* _DebugHandler_k__BackingField;

  /// @brief Field <profilingExecute>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__profilingExecute_k__BackingField,
                      put = __cordl_internal_set__profilingExecute_k__BackingField))::UnityEngine::Rendering::ProfilingSampler* _profilingExecute_k__BackingField;

  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField)) bool _stripAdditionalLightOffVariants_k__BackingField;

  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset 0x187, size 0x1
  __declspec(property(get = __cordl_internal_get__stripShadowsOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripShadowsOffVariants_k__BackingField)) bool _stripShadowsOffVariants_k__BackingField;

  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__supportedRenderingFeatures_k__BackingField,
      put = __cordl_internal_set__supportedRenderingFeatures_k__BackingField))::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* _supportedRenderingFeatures_k__BackingField;

  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField, put = __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField))::ArrayW<
      ::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> _unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field <useDepthPriming>k__BackingField, offset 0x186, size 0x1
  __declspec(property(get = __cordl_internal_get__useDepthPriming_k__BackingField, put = __cordl_internal_set__useDepthPriming_k__BackingField)) bool _useDepthPriming_k__BackingField;

  __declspec(property(get = get_activeRenderPassQueue))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue;

  __declspec(property(get = get_cameraColorTarget))::UnityEngine::Rendering::RenderTargetIdentifier cameraColorTarget;

  __declspec(property(get = get_cameraDepth))::UnityEngine::Rendering::RenderTargetIdentifier cameraDepth;

  __declspec(property(get = get_cameraDepthTarget))::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthTarget;

  /// @brief Field current, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_current, put = setStaticF_current))::UnityEngine::Rendering::Universal::ScriptableRenderer* current;

  /// @brief Field disableNativeRenderPassInFeatures, offset 0x184, size 0x1
  __declspec(property(get = __cordl_internal_get_disableNativeRenderPassInFeatures, put = __cordl_internal_set_disableNativeRenderPassInFeatures)) bool disableNativeRenderPassInFeatures;

  /// @brief Field isCameraColorTargetValid, offset 0x183, size 0x1
  __declspec(property(get = __cordl_internal_get_isCameraColorTargetValid, put = __cordl_internal_set_isCameraColorTargetValid)) bool isCameraColorTargetValid;

  /// @brief Field m_ActiveColorAttachmentDescriptors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveColorAttachmentDescriptors,
                      put = __cordl_internal_set_m_ActiveColorAttachmentDescriptors))::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor,
                                                                                              ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> m_ActiveColorAttachmentDescriptors;

  /// @brief Field m_ActiveColorAttachments, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_m_ActiveColorAttachments,
      put = setStaticF_m_ActiveColorAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_ActiveColorAttachments;

  /// @brief Field m_ActiveColorStoreActions, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_m_ActiveColorStoreActions,
      put = setStaticF_m_ActiveColorStoreActions))::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> m_ActiveColorStoreActions;

  /// @brief Field m_ActiveDepthAttachment, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_m_ActiveDepthAttachment, put = setStaticF_m_ActiveDepthAttachment))::UnityEngine::Rendering::RenderTargetIdentifier m_ActiveDepthAttachment;

  /// @brief Field m_ActiveDepthAttachmentDescriptor, offset 0x40, size 0x78
  __declspec(property(get = __cordl_internal_get_m_ActiveDepthAttachmentDescriptor,
                      put = __cordl_internal_set_m_ActiveDepthAttachmentDescriptor))::UnityEngine::Rendering::AttachmentDescriptor m_ActiveDepthAttachmentDescriptor;

  /// @brief Field m_ActiveDepthStoreAction, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_ActiveDepthStoreAction, put = setStaticF_m_ActiveDepthStoreAction))::UnityEngine::Rendering::RenderBufferStoreAction m_ActiveDepthStoreAction;

  /// @brief Field m_ActiveRenderPassQueue, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveRenderPassQueue,
                      put = __cordl_internal_set_m_ActiveRenderPassQueue))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* m_ActiveRenderPassQueue;

  /// @brief Field m_CameraColorTarget, offset 0x108, size 0x28
  __declspec(property(get = __cordl_internal_get_m_CameraColorTarget, put = __cordl_internal_set_m_CameraColorTarget))::UnityEngine::Rendering::RenderTargetIdentifier m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset 0x130, size 0x28
  __declspec(property(get = __cordl_internal_get_m_CameraDepthTarget, put = __cordl_internal_set_m_CameraDepthTarget))::UnityEngine::Rendering::RenderTargetIdentifier m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset 0x158, size 0x28
  __declspec(property(get = __cordl_internal_get_m_CameraResolveTarget, put = __cordl_internal_set_m_CameraResolveTarget))::UnityEngine::Rendering::RenderTargetIdentifier m_CameraResolveTarget;

  /// @brief Field m_FinalColorStoreAction, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalColorStoreAction,
                      put = __cordl_internal_set_m_FinalColorStoreAction))::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction,
                                                                                   ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> m_FinalColorStoreAction;

  /// @brief Field m_FinalDepthStoreAction, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FinalDepthStoreAction, put = __cordl_internal_set_m_FinalDepthStoreAction))::UnityEngine::Rendering::RenderBufferStoreAction m_FinalDepthStoreAction;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound)) bool m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset 0x181, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound)) bool m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsActiveColorAttachmentTransient, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsActiveColorAttachmentTransient,
                      put = __cordl_internal_set_m_IsActiveColorAttachmentTransient))::ArrayW<bool, ::Array<bool>*> m_IsActiveColorAttachmentTransient;

  /// @brief Field m_IsPipelineExecuting, offset 0x182, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPipelineExecuting, put = __cordl_internal_set_m_IsPipelineExecuting)) bool m_IsPipelineExecuting;

  /// @brief Field m_LastBeginSubpassPassIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastBeginSubpassPassIndex, put = __cordl_internal_set_m_LastBeginSubpassPassIndex)) int32_t m_LastBeginSubpassPassIndex;

  /// @brief Field m_MergeableRenderPassesMap, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MergeableRenderPassesMap,
      put = __cordl_internal_set_m_MergeableRenderPassesMap))::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* m_MergeableRenderPassesMap;

  /// @brief Field m_MergeableRenderPassesMapArrays, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MergeableRenderPassesMapArrays,
      put = __cordl_internal_set_m_MergeableRenderPassesMapArrays))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> m_MergeableRenderPassesMapArrays;

  /// @brief Field m_PassIndexToPassHash, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassIndexToPassHash,
                      put = __cordl_internal_set_m_PassIndexToPassHash))::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> m_PassIndexToPassHash;

  /// @brief Field m_RenderPassesAttachmentCount, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPassesAttachmentCount,
                      put = __cordl_internal_set_m_RenderPassesAttachmentCount))::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* m_RenderPassesAttachmentCount;

  /// @brief Field m_RendererFeatures, offset 0x100, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_RendererFeatures,
               put = __cordl_internal_set_m_RendererFeatures))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* m_RendererFeatures;

  /// @brief Field m_StoreActionsOptimizationSetting, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StoreActionsOptimizationSetting,
                      put = __cordl_internal_set_m_StoreActionsOptimizationSetting))::UnityEngine::Rendering::Universal::StoreActionsOptimization m_StoreActionsOptimizationSetting;

  /// @brief Field m_TrimmedColorAttachmentCopies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_TrimmedColorAttachmentCopies, put = setStaticF_m_TrimmedColorAttachmentCopies))::ArrayW<
      ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
      ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*> m_TrimmedColorAttachmentCopies;

  /// @brief Field m_UseOptimizedStoreActions, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_UseOptimizedStoreActions, put = setStaticF_m_UseOptimizedStoreActions)) bool m_UseOptimizedStoreActions;

  __declspec(property(get = get_profilingExecute, put = set_profilingExecute))::UnityEngine::Rendering::ProfilingSampler* profilingExecute;

  __declspec(property(get = get_rendererFeatures))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures;

  /// @brief Field s_Planes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Planes, put = setStaticF_s_Planes))::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> s_Planes;

  /// @brief Field s_VectorPlanes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorPlanes, put = setStaticF_s_VectorPlanes))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> s_VectorPlanes;

  __declspec(property(get = get_stripAdditionalLightOffVariants, put = set_stripAdditionalLightOffVariants)) bool stripAdditionalLightOffVariants;

  __declspec(property(get = get_stripShadowsOffVariants, put = set_stripShadowsOffVariants)) bool stripShadowsOffVariants;

  __declspec(property(get = get_supportedRenderingFeatures,
                      put = set_supportedRenderingFeatures))::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* supportedRenderingFeatures;

  __declspec(
      property(get = get_unsupportedGraphicsDeviceTypes,
               put = set_unsupportedGraphicsDeviceTypes))::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> unsupportedGraphicsDeviceTypes;

  __declspec(property(get = get_useDepthPriming, put = set_useDepthPriming)) bool useDepthPriming;

  /// @brief Field useRenderPassEnabled, offset 0x185, size 0x1
  __declspec(property(get = __cordl_internal_get_useRenderPassEnabled, put = __cordl_internal_set_useRenderPassEnabled)) bool useRenderPassEnabled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x2e239a0, size 0x364, virtual false, abstract: false, final false
  inline void AddRenderPasses(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method AreAttachmentIndicesCompatible, addr 0x2e1fddc, size 0xf4, virtual false, abstract: false, final false
  static inline bool AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lastSubPass, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* currentSubPass);

  /// @brief Method BeginXRRendering, addr 0x2e232c4, size 0xbc, virtual false, abstract: false, final false
  inline void BeginXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                               ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method CalculateBillboardProperties, addr 0x2e20e34, size 0x3dc, virtual false, abstract: false, final false
  static inline void CalculateBillboardProperties(ByRef<::UnityEngine::Matrix4x4> worldToCameraMatrix, ByRef<::UnityEngine::Vector3> billboardTangent, ByRef<::UnityEngine::Vector3> billboardNormal,
                                                  ByRef<float_t> cameraXZAngle);

  /// @brief Method Clear, addr 0x2e21974, size 0x23c, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::Universal::CameraRenderType cameraType);

  /// @brief Method ClearRenderingState, addr 0x2e22bb8, size 0x31c, virtual false, abstract: false, final false
  inline void ClearRenderingState(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method ConfigureActiveTarget, addr 0x2e2178c, size 0x19c, virtual false, abstract: false, final false
  static inline void ConfigureActiveTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);

  /// @brief Method ConfigureCameraColorTarget, addr 0x2e21d48, size 0x18, virtual false, abstract: false, final false
  inline void ConfigureCameraColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget);

  /// @brief Method ConfigureCameraTarget, addr 0x2e21ce4, size 0x28, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget);

  /// @brief Method ConfigureCameraTarget, addr 0x2e21d0c, size 0x3c, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier resolveTarget);

  /// @brief Method ConfigureNativeRenderPass, addr 0x2e1ef74, size 0x298, virtual false, abstract: false, final false
  inline void ConfigureNativeRenderPass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                        ::UnityEngine::Rendering::Universal::CameraData cameraData);

  /// @brief Method CreateRenderPassHash, addr 0x2e1d04c, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 CreateRenderPassHash(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor desc, uint32_t hashIndex);

  /// @brief Method CreateRenderPassHash, addr 0x2e200e8, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 CreateRenderPassHash(int32_t width, int32_t height, int32_t depthID, int32_t sample, uint32_t hashIndex);

  /// @brief Method Dispose, addr 0x2e21bb0, size 0x130, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2e21ce0, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawGizmos, addr 0x2e258f4, size 0x4, virtual false, abstract: false, final false
  inline void DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method DrawWireOverlay, addr 0x2e258f8, size 0x20, virtual false, abstract: false, final false
  inline void DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method EnableSwapBufferMSAA, addr 0x2e258f0, size 0x4, virtual true, abstract: false, final false
  inline void EnableSwapBufferMSAA(bool enable);

  /// @brief Method EndXRRendering, addr 0x2e23380, size 0xac, virtual false, abstract: false, final false
  inline void EndXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                             ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method EnqueuePass, addr 0x2e236cc, size 0xb4, virtual false, abstract: false, final false
  inline void EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method Execute, addr 0x2e21d6c, size 0xc74, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteBlock, addr 0x2e231b8, size 0x10c, virtual false, abstract: false, final false
  inline void ExecuteBlock(int32_t blockIndex, ByRef<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks> renderBlocks, ::UnityEngine::Rendering::ScriptableRenderContext context,
                           ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool submit);

  /// @brief Method ExecuteNativeRenderPass, addr 0x2e1f20c, size 0xa6c, virtual false, abstract: false, final false
  inline void ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                      ::UnityEngine::Rendering::Universal::CameraData cameraData, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteRenderPass, addr 0x2e23d38, size 0x398, virtual false, abstract: false, final false
  inline void ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FindAttachmentDescriptorIndexInList, addr 0x2e1ee48, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t FindAttachmentDescriptorIndexInList(int32_t attachmentIdx, ::UnityEngine::Rendering::AttachmentDescriptor attachmentDescriptor,
                                                            ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors);

  /// @brief Method FindAttachmentDescriptorIndexInList, addr 0x2e1de74, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t FindAttachmentDescriptorIndexInList(::UnityEngine::Rendering::RenderTargetIdentifier target,
                                                            ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors);

  /// @brief Method FinishRendering, addr 0x2e21d68, size 0x4, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraClearFlag, addr 0x2e23780, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method GetCameraColorFrontBuffer, addr 0x2e21694, size 0x3c, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetDefaultGraphicsFormat, addr 0x2e1dd8c, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultGraphicsFormat(::UnityEngine::Rendering::Universal::CameraData cameraData);

  /// @brief Method GetSubPassAttachmentIndicesCount, addr 0x2e1fc78, size 0x164, virtual false, abstract: false, final false
  static inline uint32_t GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method GetValidColorAttachmentCount, addr 0x2e1ffa0, size 0x148, virtual false, abstract: false, final false
  static inline uint32_t GetValidColorAttachmentCount(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> colorAttachments);

  /// @brief Method GetValidInputAttachmentCount, addr 0x2e1fed0, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method GetValidPassIndexCount, addr 0x2e1d0e8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetValidPassIndexCount(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method InitializeRenderPassDescriptor, addr 0x2e1cf60, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                                                                        ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method InternalFinishRendering, addr 0x2e2342c, size 0x2a0, virtual false, abstract: false, final false
  inline void InternalFinishRendering(::UnityEngine::Rendering::ScriptableRenderContext context, bool resolveFinalTarget);

  /// @brief Method InternalStartRendering, addr 0x2e229e0, size 0x1d8, virtual false, abstract: false, final false
  inline void InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method IsDepthOnlyRenderTexture, addr 0x2e1e2e4, size 0x58, virtual false, abstract: false, final false
  inline bool IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture* t);

  /// @brief Method IsRenderPassEnabled, addr 0x2e240ec, size 0x30, virtual false, abstract: false, final false
  inline bool IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  /// @brief Method OnPreCullRenderPasses, addr 0x2e238dc, size 0xc4, virtual false, abstract: false, final false
  inline void OnPreCullRenderPasses(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method PassHasInputAttachments, addr 0x2e1df58, size 0x90, virtual false, abstract: false, final false
  static inline bool PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method ResetNativeRenderPassFrameData, addr 0x2e1c6a0, size 0x150, virtual false, abstract: false, final false
  inline void ResetNativeRenderPassFrameData();

  /// @brief Method SetCameraMatrices, addr 0x2e20170, size 0x514, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool setInverseMatrices);

  /// @brief Method SetNativeRenderPassAttachmentList, addr 0x2e1e33c, size 0xb0c, virtual false, abstract: false, final false
  inline void SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                ::UnityEngine::Rendering::RenderTargetIdentifier passColorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier passDepthAttachment,
                                                ::UnityEngine::Rendering::ClearFlag finalClearFlag, ::UnityEngine::Color finalClearColor);

  /// @brief Method SetNativeRenderPassMRTAttachmentList, addr 0x2e1d358, size 0xa34, virtual false, abstract: false, final false
  inline void SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                   bool needCustomCameraColorClear, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetPerCameraBillboardProperties, addr 0x2e20c50, size 0x1e4, virtual false, abstract: false, final false
  inline void SetPerCameraBillboardProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetPerCameraClippingPlaneProperties, addr 0x2e21210, size 0x2a0, virtual false, abstract: false, final false
  inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetPerCameraShaderVariables, addr 0x2e20684, size 0x5cc, virtual false, abstract: false, final false
  inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetRenderPassAttachments, addr 0x2e2411c, size 0x10cc, virtual false, abstract: false, final false
  inline void SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                       ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetRenderTarget, addr 0x2e25808, size 0xe4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlags, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x2e25620, size 0x1e8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlags, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x2e1b460, size 0x2dc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x2e25308, size 0x318, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x2e251e8, size 0x120, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetShaderTimeValues, addr 0x2e214b0, size 0x1e4, virtual false, abstract: false, final false
  inline void SetShaderTimeValues(::UnityEngine::Rendering::CommandBuffer* cmd, float_t time, float_t deltaTime, float_t smoothDeltaTime);

  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x2e21d64, size 0x4, virtual true, abstract: false, final false
  inline void SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupInputAttachmentIndices, addr 0x2e1dfe8, size 0x1e8, virtual false, abstract: false, final false
  inline void SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method SetupLights, addr 0x2e21d60, size 0x4, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupNativeRenderPassFrameData, addr 0x2e1c7f0, size 0x770, virtual false, abstract: false, final false
  inline void SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::CameraData cameraData, bool isRenderPassEnabled);

  /// @brief Method SetupTransientInputAttachments, addr 0x2e1e1d0, size 0x114, virtual false, abstract: false, final false
  inline void SetupTransientInputAttachments(int32_t attachmentCount);

  /// @brief Method SortStable, addr 0x2e22ed4, size 0x124, virtual false, abstract: false, final false
  static inline void SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* list);

  /// @brief Method SupportedCameraStackingTypes, addr 0x2e20120, size 0x8, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SupportsCameraStackingType, addr 0x2e20128, size 0x30, virtual false, abstract: false, final false
  inline bool SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType cameraRenderType);

  /// @brief Method SwapColorBuffer, addr 0x2e258ec, size 0x4, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateFinalStoreActions, addr 0x2e1d13c, size 0x21c, virtual false, abstract: false, final false
  inline void UpdateFinalStoreActions(::ArrayW<int32_t, ::Array<int32_t>*> currentMergeablePasses, ::UnityEngine::Rendering::Universal::CameraData cameraData);

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get__DebugHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugHandler*> const& __cordl_internal_get__DebugHandler_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__profilingExecute_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get__profilingExecute_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() const;

  constexpr bool& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField();

  constexpr bool const& __cordl_internal_get__stripShadowsOffVariants_k__BackingField() const;

  constexpr bool& __cordl_internal_get__stripShadowsOffVariants_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*& __cordl_internal_get__supportedRenderingFeatures_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*> const&
  __cordl_internal_get__supportedRenderingFeatures_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> const&
  __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField();

  constexpr bool const& __cordl_internal_get__useDepthPriming_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useDepthPriming_k__BackingField();

  constexpr bool const& __cordl_internal_get_disableNativeRenderPassInFeatures() const;

  constexpr bool& __cordl_internal_get_disableNativeRenderPassInFeatures();

  constexpr bool const& __cordl_internal_get_isCameraColorTargetValid() const;

  constexpr bool& __cordl_internal_get_isCameraColorTargetValid();

  constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> const& __cordl_internal_get_m_ActiveColorAttachmentDescriptors() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>& __cordl_internal_get_m_ActiveColorAttachmentDescriptors();

  constexpr ::UnityEngine::Rendering::AttachmentDescriptor const& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor() const;

  constexpr ::UnityEngine::Rendering::AttachmentDescriptor& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*& __cordl_internal_get_m_ActiveRenderPassQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*> const&
  __cordl_internal_get_m_ActiveRenderPassQueue() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_CameraColorTarget() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_CameraColorTarget();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_CameraDepthTarget() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_CameraDepthTarget();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_CameraResolveTarget() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_CameraResolveTarget();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> const& __cordl_internal_get_m_FinalColorStoreAction() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>& __cordl_internal_get_m_FinalColorStoreAction();

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_m_FinalDepthStoreAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_m_FinalDepthStoreAction();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_IsActiveColorAttachmentTransient() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_IsActiveColorAttachmentTransient();

  constexpr bool const& __cordl_internal_get_m_IsPipelineExecuting() const;

  constexpr bool& __cordl_internal_get_m_IsPipelineExecuting();

  constexpr int32_t const& __cordl_internal_get_m_LastBeginSubpassPassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastBeginSubpassPassIndex();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>*& __cordl_internal_get_m_MergeableRenderPassesMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>*> const&
  __cordl_internal_get_m_MergeableRenderPassesMap() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_m_MergeableRenderPassesMapArrays() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_m_MergeableRenderPassesMapArrays();

  constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> const& __cordl_internal_get_m_PassIndexToPassHash() const;

  constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*>& __cordl_internal_get_m_PassIndexToPassHash();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>*& __cordl_internal_get_m_RenderPassesAttachmentCount();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>*> const& __cordl_internal_get_m_RenderPassesAttachmentCount() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*> const&
  __cordl_internal_get_m_RendererFeatures() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimizationSetting() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimizationSetting();

  constexpr bool const& __cordl_internal_get_useRenderPassEnabled() const;

  constexpr bool& __cordl_internal_get_useRenderPassEnabled();

  constexpr void __cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__supportedRenderingFeatures_k__BackingField(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* value);

  constexpr void
  __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value);

  constexpr void __cordl_internal_set__useDepthPriming_k__BackingField(bool value);

  constexpr void __cordl_internal_set_disableNativeRenderPassInFeatures(bool value);

  constexpr void __cordl_internal_set_isCameraColorTargetValid(bool value);

  constexpr void __cordl_internal_set_m_ActiveColorAttachmentDescriptors(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> value);

  constexpr void __cordl_internal_set_m_ActiveDepthAttachmentDescriptor(::UnityEngine::Rendering::AttachmentDescriptor value);

  constexpr void __cordl_internal_set_m_ActiveRenderPassQueue(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

  constexpr void __cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_FinalColorStoreAction(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  constexpr void __cordl_internal_set_m_FinalDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_IsActiveColorAttachmentTransient(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_IsPipelineExecuting(bool value);

  constexpr void __cordl_internal_set_m_LastBeginSubpassPassIndex(int32_t value);

  constexpr void __cordl_internal_set_m_MergeableRenderPassesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* value);

  constexpr void __cordl_internal_set_m_MergeableRenderPassesMapArrays(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_m_PassIndexToPassHash(::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> value);

  constexpr void __cordl_internal_set_m_RenderPassesAttachmentCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* value);

  constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value);

  constexpr void __cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  constexpr void __cordl_internal_set_useRenderPassEnabled(bool value);

  /// @brief Method .ctor, addr 0x2e1ba88, size 0x948, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* getStaticF_current();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> getStaticF_m_ActiveColorAttachments();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> getStaticF_m_ActiveColorStoreActions();

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_m_ActiveDepthAttachment();

  static inline ::UnityEngine::Rendering::RenderBufferStoreAction getStaticF_m_ActiveDepthStoreAction();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
  getStaticF_m_TrimmedColorAttachmentCopies();

  static inline bool getStaticF_m_UseOptimizedStoreActions();

  static inline ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> getStaticF_s_Planes();

  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> getStaticF_s_VectorPlanes();

  /// @brief Method get_DebugHandler, addr 0x2e20168, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler* get_DebugHandler();

  /// @brief Method get_activeRenderPassQueue, addr 0x2e21764, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* get_activeRenderPassQueue();

  /// @brief Method get_cameraColorTarget, addr 0x2e1b7e4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget();

  /// @brief Method get_cameraDepth, addr 0x2e1c68c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepth();

  /// @brief Method get_cameraDepthTarget, addr 0x2e216d0, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTarget();

  /// @brief Method get_profilingExecute, addr 0x2e20158, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute();

  /// @brief Method get_rendererFeatures, addr 0x2e2175c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures();

  /// @brief Method get_stripAdditionalLightOffVariants, addr 0x2e21950, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripAdditionalLightOffVariants();

  /// @brief Method get_stripShadowsOffVariants, addr 0x2e2193c, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripShadowsOffVariants();

  /// @brief Method get_supportedRenderingFeatures, addr 0x2e2176c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* get_supportedRenderingFeatures();

  /// @brief Method get_unsupportedGraphicsDeviceTypes, addr 0x2e2177c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> get_unsupportedGraphicsDeviceTypes();

  /// @brief Method get_useDepthPriming, addr 0x2e21928, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDepthPriming();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  static inline void setStaticF_m_ActiveColorAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  static inline void setStaticF_m_ActiveColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  static inline void setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RenderTargetIdentifier value);

  static inline void setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  static inline void
  setStaticF_m_TrimmedColorAttachmentCopies(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
                                                value);

  static inline void setStaticF_m_UseOptimizedStoreActions(bool value);

  static inline void setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value);

  static inline void setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method set_profilingExecute, addr 0x2e20160, size 0x8, virtual false, abstract: false, final false
  inline void set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_stripAdditionalLightOffVariants, addr 0x2e21958, size 0xc, virtual false, abstract: false, final false
  inline void set_stripAdditionalLightOffVariants(bool value);

  /// @brief Method set_stripShadowsOffVariants, addr 0x2e21944, size 0xc, virtual false, abstract: false, final false
  inline void set_stripShadowsOffVariants(bool value);

  /// @brief Method set_supportedRenderingFeatures, addr 0x2e21774, size 0x8, virtual false, abstract: false, final false
  inline void set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* value);

  /// @brief Method set_unsupportedGraphicsDeviceTypes, addr 0x2e21784, size 0x8, virtual false, abstract: false, final false
  inline void set_unsupportedGraphicsDeviceTypes(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value);

  /// @brief Method set_useDepthPriming, addr 0x2e21930, size 0xc, virtual false, abstract: false, final false
  inline void set_useDepthPriming(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer(ScriptableRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer(ScriptableRenderer const&) = delete;

  /// @brief Field m_LastBeginSubpassPassIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_LastBeginSubpassPassIndex;

  /// @brief Field m_MergeableRenderPassesMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* ___m_MergeableRenderPassesMap;

  /// @brief Field m_MergeableRenderPassesMapArrays, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___m_MergeableRenderPassesMapArrays;

  /// @brief Field m_PassIndexToPassHash, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> ___m_PassIndexToPassHash;

  /// @brief Field m_RenderPassesAttachmentCount, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* ___m_RenderPassesAttachmentCount;

  /// @brief Field m_ActiveColorAttachmentDescriptors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> ___m_ActiveColorAttachmentDescriptors;

  /// @brief Field m_ActiveDepthAttachmentDescriptor, offset: 0x40, size: 0x78, def value: None
  ::UnityEngine::Rendering::AttachmentDescriptor ___m_ActiveDepthAttachmentDescriptor;

  /// @brief Field m_IsActiveColorAttachmentTransient, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_IsActiveColorAttachmentTransient;

  /// @brief Field m_FinalColorStoreAction, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> ___m_FinalColorStoreAction;

  /// @brief Field m_FinalDepthStoreAction, offset: 0xc8, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction ___m_FinalDepthStoreAction;

  /// @brief Field <profilingExecute>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____profilingExecute_k__BackingField;

  /// @brief Field <DebugHandler>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ____DebugHandler_k__BackingField;

  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* ____supportedRenderingFeatures_k__BackingField;

  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> ____unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field m_StoreActionsOptimizationSetting, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::StoreActionsOptimization ___m_StoreActionsOptimizationSetting;

  /// @brief Field m_ActiveRenderPassQueue, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* ___m_ActiveRenderPassQueue;

  /// @brief Field m_RendererFeatures, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* ___m_RendererFeatures;

  /// @brief Field m_CameraColorTarget, offset: 0x108, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset: 0x130, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset: 0x158, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_CameraResolveTarget;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset: 0x180, size: 0x1, def value: None
  bool ___m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset: 0x181, size: 0x1, def value: None
  bool ___m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsPipelineExecuting, offset: 0x182, size: 0x1, def value: None
  bool ___m_IsPipelineExecuting;

  /// @brief Field isCameraColorTargetValid, offset: 0x183, size: 0x1, def value: None
  bool ___isCameraColorTargetValid;

  /// @brief Field disableNativeRenderPassInFeatures, offset: 0x184, size: 0x1, def value: None
  bool ___disableNativeRenderPassInFeatures;

  /// @brief Field useRenderPassEnabled, offset: 0x185, size: 0x1, def value: None
  bool ___useRenderPassEnabled;

  /// @brief Field <useDepthPriming>k__BackingField, offset: 0x186, size: 0x1, def value: None
  bool ____useDepthPriming_k__BackingField;

  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset: 0x187, size: 0x1, def value: None
  bool ____stripShadowsOffVariants_k__BackingField;

  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset: 0x188, size: 0x1, def value: None
  bool ____stripAdditionalLightOffVariants_k__BackingField;

  /// @brief Field kRenderPassMapSize offset 0xffffffff size 0x4
  static constexpr int32_t kRenderPassMapSize{ static_cast<int32_t>(0xa) };

  /// @brief Field kRenderPassMaxCount offset 0xffffffff size 0x4
  static constexpr int32_t kRenderPassMaxCount{ static_cast<int32_t>(0x14) };

  /// @brief Field k_RenderPassBlockCount offset 0xffffffff size 0x4
  static constexpr int32_t k_RenderPassBlockCount{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer, 0x190>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_LastBeginSubpassPassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMapArrays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_PassIndexToPassHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RenderPassesAttachmentCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveColorAttachmentDescriptors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveDepthAttachmentDescriptor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsActiveColorAttachmentTransient) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalColorStoreAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalDepthStoreAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____profilingExecute_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____DebugHandler_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____supportedRenderingFeatures_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____unsupportedGraphicsDeviceTypes_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_StoreActionsOptimizationSetting) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveRenderPassQueue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RendererFeatures) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraColorTarget) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraDepthTarget) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraResolveTarget) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraColorTargetIsBound) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraDepthTargetIsBound) == 0x181, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsPipelineExecuting) == 0x182, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___isCameraColorTargetValid) == 0x183, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___disableNativeRenderPassInFeatures) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___useRenderPassEnabled) == 0x185, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____useDepthPriming_k__BackingField) == 0x186, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripShadowsOffVariants_k__BackingField) == 0x187, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripAdditionalLightOffVariants_k__BackingField) == 0x188, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderBlock");
NEED_NO_BOX(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer*, "UnityEngine.Rendering.Universal", "ScriptableRenderer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassBlock");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderingFeatures");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks/BlockRange");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassDescriptor");
