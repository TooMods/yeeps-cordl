#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipeline)
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__Context;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__Renderer;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__XR;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class __Lightmapping__RequestLightsDelegate;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsUI;
}
namespace UnityEngine::Rendering::Universal {
struct ImageUpscalingFilter;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class XRSystem;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderPipeline__Profiling;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderPipeline____c;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__Context;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__Renderer;
}
namespace GlobalNamespace {
class __UniversalRenderPipeline__Profiling__Pipeline__XR;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderPipeline__Profiling;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderPipeline____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline);
MARK_REF_PTR_T(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Context);
MARK_REF_PTR_T(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Renderer);
MARK_REF_PTR_T(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__XR);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline__Profiling);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c);
// Type: ::Renderer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::Profiling::Pipeline::Renderer*
class CORDL_TYPE __UniversalRenderPipeline__Profiling__Pipeline__Renderer : public ::System::Object {
public:
  // Declarations
  /// @brief Field setup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setup, put = setStaticF_setup))::UnityEngine::Rendering::ProfilingSampler* setup;

  /// @brief Field setupCullingParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setupCullingParameters, put = setStaticF_setupCullingParameters))::UnityEngine::Rendering::ProfilingSampler* setupCullingParameters;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setup();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCullingParameters();

  static inline void setStaticF_setup(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupCullingParameters(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline__Profiling__Pipeline__Renderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__Renderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline__Profiling__Pipeline__Renderer(__UniversalRenderPipeline__Profiling__Pipeline__Renderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__Renderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline__Profiling__Pipeline__Renderer(__UniversalRenderPipeline__Profiling__Pipeline__Renderer const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Renderer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Context
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::Profiling::Pipeline::Context*
class CORDL_TYPE __UniversalRenderPipeline__Profiling__Pipeline__Context : public ::System::Object {
public:
  // Declarations
  /// @brief Field submit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_submit, put = setStaticF_submit))::UnityEngine::Rendering::ProfilingSampler* submit;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_submit();

  static inline void setStaticF_submit(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline__Profiling__Pipeline__Context();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__Context", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline__Profiling__Pipeline__Context(__UniversalRenderPipeline__Profiling__Pipeline__Context&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__Context", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline__Profiling__Pipeline__Context(__UniversalRenderPipeline__Profiling__Pipeline__Context const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderContext" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Context, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::XR
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::Profiling::Pipeline::XR*
class CORDL_TYPE __UniversalRenderPipeline__Profiling__Pipeline__XR : public ::System::Object {
public:
  // Declarations
  /// @brief Field mirrorView, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mirrorView, put = setStaticF_mirrorView))::UnityEngine::Rendering::ProfilingSampler* mirrorView;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mirrorView();

  static inline void setStaticF_mirrorView(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline__Profiling__Pipeline__XR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__XR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline__Profiling__Pipeline__XR(__UniversalRenderPipeline__Profiling__Pipeline__XR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline__XR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline__Profiling__Pipeline__XR(__UniversalRenderPipeline__Profiling__Pipeline__XR const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__XR, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pipeline
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::Profiling::Pipeline*
class CORDL_TYPE __UniversalRenderPipeline__Profiling__Pipeline : public ::System::Object {
public:
  // Declarations
  using Context = ::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Context;

  using Renderer = ::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Renderer;

  using XR = ::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__XR;

  /// @brief Field beginCameraRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beginCameraRendering, put = setStaticF_beginCameraRendering))::UnityEngine::Rendering::ProfilingSampler* beginCameraRendering;

  /// @brief Field beginContextRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beginContextRendering, put = setStaticF_beginContextRendering))::UnityEngine::Rendering::ProfilingSampler* beginContextRendering;

  /// @brief Field endCameraRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_endCameraRendering, put = setStaticF_endCameraRendering))::UnityEngine::Rendering::ProfilingSampler* endCameraRendering;

  /// @brief Field endContextRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_endContextRendering, put = setStaticF_endContextRendering))::UnityEngine::Rendering::ProfilingSampler* endContextRendering;

  /// @brief Field getMainLightIndex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_getMainLightIndex, put = setStaticF_getMainLightIndex))::UnityEngine::Rendering::ProfilingSampler* getMainLightIndex;

  /// @brief Field getPerObjectLightFlags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_getPerObjectLightFlags, put = setStaticF_getPerObjectLightFlags))::UnityEngine::Rendering::ProfilingSampler* getPerObjectLightFlags;

  /// @brief Field initializeAdditionalCameraData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeAdditionalCameraData,
                             put = setStaticF_initializeAdditionalCameraData))::UnityEngine::Rendering::ProfilingSampler* initializeAdditionalCameraData;

  /// @brief Field initializeCameraData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeCameraData, put = setStaticF_initializeCameraData))::UnityEngine::Rendering::ProfilingSampler* initializeCameraData;

  /// @brief Field initializeLightData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeLightData, put = setStaticF_initializeLightData))::UnityEngine::Rendering::ProfilingSampler* initializeLightData;

  /// @brief Field initializeRenderingData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeRenderingData, put = setStaticF_initializeRenderingData))::UnityEngine::Rendering::ProfilingSampler* initializeRenderingData;

  /// @brief Field initializeShadowData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeShadowData, put = setStaticF_initializeShadowData))::UnityEngine::Rendering::ProfilingSampler* initializeShadowData;

  /// @brief Field initializeStackedCameraData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_initializeStackedCameraData, put = setStaticF_initializeStackedCameraData))::UnityEngine::Rendering::ProfilingSampler* initializeStackedCameraData;

  /// @brief Field setupPerFrameShaderConstants, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setupPerFrameShaderConstants, put = setStaticF_setupPerFrameShaderConstants))::UnityEngine::Rendering::ProfilingSampler* setupPerFrameShaderConstants;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginCameraRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginContextRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endCameraRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endContextRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getMainLightIndex();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getPerObjectLightFlags();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeAdditionalCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeLightData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeRenderingData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeShadowData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeStackedCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupPerFrameShaderConstants();

  static inline void setStaticF_beginCameraRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_beginContextRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endCameraRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endContextRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_getMainLightIndex(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_getPerObjectLightFlags(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeAdditionalCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeLightData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeRenderingData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeShadowData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeStackedCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupPerFrameShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline__Profiling__Pipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline__Profiling__Pipeline(__UniversalRenderPipeline__Profiling__Pipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling__Pipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline__Profiling__Pipeline(__UniversalRenderPipeline__Profiling__Pipeline const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"UniversalRenderPipeline" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Profiling
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::Profiling*
class CORDL_TYPE __UniversalRenderPipeline__Profiling : public ::System::Object {
public:
  // Declarations
  using Pipeline = ::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline;

  /// @brief Field s_HashSamplerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HashSamplerCache,
                             put = setStaticF_s_HashSamplerCache))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* s_HashSamplerCache;

  /// @brief Field unknownSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unknownSampler, put = setStaticF_unknownSampler))::UnityEngine::Rendering::ProfilingSampler* unknownSampler;

  /// @brief Method TryGetOrAddCameraSampler, addr 0x2886d74, size 0x174, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ProfilingSampler* TryGetOrAddCameraSampler(::UnityEngine::Camera* camera);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* getStaticF_s_HashSamplerCache();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_unknownSampler();

  static inline void setStaticF_s_HashSamplerCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value);

  static inline void setStaticF_unknownSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline__Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline__Profiling(__UniversalRenderPipeline__Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline__Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline__Profiling(__UniversalRenderPipeline__Profiling const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRenderPipeline__Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UniversalRenderPipeline::<>c*
class CORDL_TYPE __UniversalRenderPipeline____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0))::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* __9__29_0;

  static inline ::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c* New_ctor();

  /// @brief Method <.cctor>b__74_0, addr 0x288c3ec, size 0x2c0, virtual false, abstract: false, final false
  inline void __cctor_b__74_0(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> requests,
                              ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  /// @brief Method <.ctor>b__29_0, addr 0x288c384, size 0x68, virtual false, abstract: false, final false
  inline int32_t __ctor_b__29_0(::UnityEngine::Camera* camera1, ::UnityEngine::Camera* camera2);

  /// @brief Method .ctor, addr 0x288c37c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__29_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c* value);

  static inline void setStaticF___9__29_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderPipeline____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderPipeline____c(__UniversalRenderPipeline____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderPipeline____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderPipeline____c(__UniversalRenderPipeline____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::UniversalRenderPipeline
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::UniversalRenderPipeline*
class CORDL_TYPE UniversalRenderPipeline : public ::UnityEngine::Rendering::RenderPipeline {
public:
  // Declarations
  using Profiling = ::UnityEngine::Rendering::Universal::__UniversalRenderPipeline__Profiling;

  using __c = ::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c;

  /// @brief Field cameraComparison, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraComparison, put = __cordl_internal_set_cameraComparison))::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* cameraComparison;

  __declspec(property(get = get_defaultSettings))::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> defaultSettings;

  /// @brief Field k_DefaultLightAttenuation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultLightAttenuation, put = setStaticF_k_DefaultLightAttenuation))::UnityEngine::Vector4 k_DefaultLightAttenuation;

  /// @brief Field k_DefaultLightColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultLightColor, put = setStaticF_k_DefaultLightColor))::UnityEngine::Vector4 k_DefaultLightColor;

  /// @brief Field k_DefaultLightPosition, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultLightPosition, put = setStaticF_k_DefaultLightPosition))::UnityEngine::Vector4 k_DefaultLightPosition;

  /// @brief Field k_DefaultLightSpotDirection, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultLightSpotDirection, put = setStaticF_k_DefaultLightSpotDirection))::UnityEngine::Vector4 k_DefaultLightSpotDirection;

  /// @brief Field k_DefaultLightsProbeChannel, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultLightsProbeChannel, put = setStaticF_k_DefaultLightsProbeChannel))::UnityEngine::Vector4 k_DefaultLightsProbeChannel;

  /// @brief Field lightsDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lightsDelegate, put = setStaticF_lightsDelegate))::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* lightsDelegate;

  /// @brief Field m_DebugDisplaySettingsUI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugDisplaySettingsUI,
                      put = __cordl_internal_set_m_DebugDisplaySettingsUI))::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* m_DebugDisplaySettingsUI;

  /// @brief Field m_GlobalSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalSettings,
                      put = __cordl_internal_set_m_GlobalSettings))::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> m_GlobalSettings;

  /// @brief Field m_ShadowBiasData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ShadowBiasData, put = setStaticF_m_ShadowBiasData))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_ShadowBiasData;

  /// @brief Field m_ShadowResolutionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ShadowResolutionData, put = setStaticF_m_ShadowResolutionData))::System::Collections::Generic::List_1<int32_t>* m_ShadowResolutionData;

  /// @brief Field m_XRSystem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_XRSystem, put = setStaticF_m_XRSystem))::UnityEngine::Rendering::Universal::XRSystem* m_XRSystem;

  /// @brief Field pipelineAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pipelineAsset, put = __cordl_internal_set_pipelineAsset))::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> pipelineAsset;

  /// @brief Method CheckAndApplyDebugSettings, addr 0x288ad34, size 0x10c, virtual false, abstract: false, final false
  static inline void CheckAndApplyDebugSettings(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method CheckPostProcessForDepth, addr 0x2888f8c, size 0xec, virtual false, abstract: false, final false
  static inline bool CheckPostProcessForDepth(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method CleanupLightData, addr 0x2887348, size 0x48, virtual false, abstract: false, final false
  static inline void CleanupLightData(ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method CreateRenderTextureDescriptor, addr 0x28896dc, size 0x324, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor CreateRenderTextureDescriptor(::UnityEngine::Camera* camera, float_t renderScale, bool isHdrEnabled, int32_t msaaSamples, bool needsAlpha,
                                                                                     bool requiresOpaqueTexture);

  /// @brief Method Dispose, addr 0x288366c, size 0x1b8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetLightAttenuationAndSpotDirection, addr 0x288b2b8, size 0x210, virtual false, abstract: false, final false
  static inline void GetLightAttenuationAndSpotDirection(::UnityEngine::LightType lightType, float_t lightRange, ::UnityEngine::Matrix4x4 lightLocalToWorldMatrix, float_t spotAngle,
                                                         ::System::Nullable_1<float_t> innerSpotAngle, ByRef<::UnityEngine::Vector4> lightAttenuation, ByRef<::UnityEngine::Vector4> lightSpotDir);

  /// @brief Method GetMainLightIndex, addr 0x2889db4, size 0x268, virtual false, abstract: false, final false
  static inline int32_t GetMainLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights);

  /// @brief Method GetPerObjectLightFlags, addr 0x288abf8, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::PerObjectData GetPerObjectLightFlags(int32_t additionalLightsCount);

  /// @brief Method InitializeAdditionalCameraData, addr 0x2888124, size 0x574, virtual false, abstract: false, final false
  static inline void InitializeAdditionalCameraData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget,
                                                    ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method InitializeCameraData, addr 0x28860b0, size 0x3c4, virtual false, abstract: false, final false
  static inline void InitializeCameraData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget,
                                          ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method InitializeLightConstants_Common, addr 0x288b4c8, size 0x480, virtual false, abstract: false, final false
  static inline void InitializeLightConstants_Common(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, ByRef<::UnityEngine::Vector4> lightPos,
                                                     ByRef<::UnityEngine::Vector4> lightColor, ByRef<::UnityEngine::Vector4> lightAttenuation, ByRef<::UnityEngine::Vector4> lightSpotDir,
                                                     ByRef<::UnityEngine::Vector4> lightOcclusionProbeChannel);

  /// @brief Method InitializeLightData, addr 0x288a01c, size 0x2cc, virtual false, abstract: false, final false
  static inline void InitializeLightData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex,
                                         ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method InitializePostProcessingData, addr 0x288abc4, size 0x34, virtual false, abstract: false, final false
  static inline void InitializePostProcessingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                  ByRef<::UnityEngine::Rendering::Universal::PostProcessingData> postProcessingData);

  /// @brief Method InitializeRenderingData, addr 0x2886ee8, size 0x460, virtual false, abstract: false, final false
  static inline void InitializeRenderingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                             ByRef<::UnityEngine::Rendering::CullingResults> cullResults, bool anyPostProcessingEnabled,
                                             ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method InitializeShadowData, addr 0x288a2e8, size 0x8dc, virtual false, abstract: false, final false
  static inline void InitializeShadowData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, bool mainLightCastShadows, bool additionalLightsCastShadows,
                                          ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData);

  /// @brief Method InitializeStackedCameraData, addr 0x2889078, size 0x664, virtual false, abstract: false, final false
  static inline void InitializeStackedCameraData(::UnityEngine::Camera* baseCamera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData,
                                                 ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method IsGameCamera, addr 0x288437c, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsGameCamera(::UnityEngine::Camera* camera);

  /// @brief Method IsMultiPassStereoEnabled, addr 0x288b198, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsMultiPassStereoEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsStereoEnabled, addr 0x288b094, size 0x104, virtual false, abstract: false, final false
  static inline bool IsStereoEnabled(::UnityEngine::Camera* camera);

  /// @brief Method MakeRenderTextureGraphicsFormat, addr 0x288afd8, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat MakeRenderTextureGraphicsFormat(bool isHdrEnabled, bool needsAlpha);

  /// @brief Method MakeUnormRenderTextureGraphicsFormat, addr 0x288b24c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat MakeUnormRenderTextureGraphicsFormat();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline* New_ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset);

  /// @brief Method Render, addr 0x288388c, size 0x98, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method Render, addr 0x2883924, size 0x5f4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method RenderCameraStack, addr 0x288445c, size 0x17d4, virtual false, abstract: false, final false
  static inline void RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* baseCamera);

  /// @brief Method RenderSingleCamera, addr 0x2885f10, size 0x1a0, virtual false, abstract: false, final false
  static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method RenderSingleCamera, addr 0x2886474, size 0x74c, virtual false, abstract: false, final false
  static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::CameraData cameraData, bool anyPostProcessingEnabled);

  /// @brief Method ResolveUpscalingFilterSelection, addr 0x2889c60, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ImageUpscalingFilter ResolveUpscalingFilterSelection(::UnityEngine::Vector2 imageSize, float_t renderScale,
                                                                                                          ::UnityEngine::Rendering::Universal::UpscalingFilterSelection selection);

  /// @brief Method SetSupportedRenderingFeatures, addr 0x2883438, size 0x4, virtual false, abstract: false, final false
  static inline void SetSupportedRenderingFeatures();

  /// @brief Method SetupPerFrameShaderConstants, addr 0x2883f8c, size 0x374, virtual false, abstract: false, final false
  static inline void SetupPerFrameShaderConstants();

  /// @brief Method SortCameras, addr 0x2884300, size 0x7c, virtual false, abstract: false, final false
  inline void SortCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method ToString, addr 0x2882f34, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetCullingParameters, addr 0x2886bc0, size 0x154, virtual false, abstract: false, final false
  static inline bool TryGetCullingParameters(::UnityEngine::Rendering::Universal::CameraData cameraData, ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParams);

  /// @brief Method UpdateCameraStereoMatrices, addr 0x2887734, size 0x170, virtual false, abstract: false, final false
  static inline void UpdateCameraStereoMatrices(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xr);

  /// @brief Method UpdateVolumeFramework, addr 0x2885c30, size 0x2e0, virtual false, abstract: false, final false
  static inline void UpdateVolumeFramework(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);

  constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_cameraComparison();

  constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*> const& __cordl_internal_get_cameraComparison() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*& __cordl_internal_get_m_DebugDisplaySettingsUI();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*> const& __cordl_internal_get_m_DebugDisplaySettingsUI() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> const& __cordl_internal_get_m_GlobalSettings() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>& __cordl_internal_get_m_GlobalSettings();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& __cordl_internal_get_pipelineAsset() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& __cordl_internal_get_pipelineAsset();

  constexpr void __cordl_internal_set_cameraComparison(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_m_DebugDisplaySettingsUI(::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* value);

  constexpr void __cordl_internal_set_m_GlobalSettings(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> value);

  constexpr void __cordl_internal_set_pipelineAsset(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> value);

  /// @brief Method .ctor, addr 0x2882f4c, size 0x3c0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset);

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightAttenuation();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightColor();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightPosition();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightSpotDirection();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightsProbeChannel();

  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* getStaticF_lightsDelegate();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* getStaticF_m_ShadowBiasData();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_m_ShadowResolutionData();

  static inline ::UnityEngine::Rendering::Universal::XRSystem* getStaticF_m_XRSystem();

  /// @brief Method get_asset, addr 0x2883f18, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> get_asset();

  /// @brief Method get_defaultSettings, addr 0x2882f2c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> get_defaultSettings();

  /// @brief Method get_lightsPerTile, addr 0x2882eb8, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_lightsPerTile();

  /// @brief Method get_maxPerObjectLights, addr 0x2882dd0, size 0x24, virtual false, abstract: false, final false
  static inline int32_t get_maxPerObjectLights();

  /// @brief Method get_maxRenderScale, addr 0x2882dc8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxRenderScale();

  /// @brief Method get_maxShadowBias, addr 0x2882db4, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxShadowBias();

  /// @brief Method get_maxTileVec4s, addr 0x2882f24, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_maxTileVec4s();

  /// @brief Method get_maxVisibleAdditionalLights, addr 0x2882df4, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t get_maxVisibleAdditionalLights();

  /// @brief Method get_maxZBins, addr 0x2882f1c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_maxZBins();

  /// @brief Method get_minRenderScale, addr 0x2882dbc, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_minRenderScale();

  static inline void setStaticF_k_DefaultLightAttenuation(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightColor(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightPosition(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightSpotDirection(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightsProbeChannel(::UnityEngine::Vector4 value);

  static inline void setStaticF_lightsDelegate(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* value);

  static inline void setStaticF_m_ShadowBiasData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  static inline void setStaticF_m_ShadowResolutionData(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_m_XRSystem(::UnityEngine::Rendering::Universal::XRSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline(UniversalRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline(UniversalRenderPipeline const&) = delete;

  /// @brief Field m_DebugDisplaySettingsUI, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* ___m_DebugDisplaySettingsUI;

  /// @brief Field m_GlobalSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> ___m_GlobalSettings;

  /// @brief Field pipelineAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> ___pipelineAsset;

  /// @brief Field cameraComparison, offset: 0x30, size: 0x8, def value: None
  ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* ___cameraComparison;

  /// @brief Field k_DefaultRenderingLayerMask offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultRenderingLayerMask{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MaxVisibleAdditionalLightsMobile offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxVisibleAdditionalLightsMobile{ static_cast<int32_t>(0x20) };

  /// @brief Field k_MaxVisibleAdditionalLightsMobileShaderLevelLessThan45 offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxVisibleAdditionalLightsMobileShaderLevelLessThan45{ static_cast<int32_t>(0x10) };

  /// @brief Field k_MaxVisibleAdditionalLightsNonMobile offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxVisibleAdditionalLightsNonMobile{ static_cast<int32_t>(0x100) };

  /// @brief Field k_ShaderTagName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShaderTagName{ u"UniversalPipeline" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipeline, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_DebugDisplaySettingsUI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_GlobalSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___pipelineAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___cameraComparison) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline");
NEED_NO_BOX(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Context);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Context*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/Context");
NEED_NO_BOX(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Renderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__Renderer*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/Renderer");
NEED_NO_BOX(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__XR);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UniversalRenderPipeline__Profiling__Pipeline__XR*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/XR");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline__Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline__Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRenderPipeline____c*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/<>c");
