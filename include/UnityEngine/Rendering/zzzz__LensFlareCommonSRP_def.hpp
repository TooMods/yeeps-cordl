#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareCommonSRP)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class LensFlareComponentSRP;
}
namespace UnityEngine::Rendering {
class LensFlareDataElementSRP;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct __LensFlareCommonSRP____c__DisplayClass32_0;
}
namespace UnityEngine::Rendering {
struct __LensFlareCommonSRP____c__DisplayClass32_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
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
class LensFlareCommonSRP;
}
namespace UnityEngine::Rendering {
struct __LensFlareCommonSRP____c__DisplayClass32_0;
}
namespace UnityEngine::Rendering {
struct __LensFlareCommonSRP____c__DisplayClass32_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareCommonSRP);
MARK_VAL_T(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0);
MARK_VAL_T(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1);
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::LensFlareCommonSRP::<>c__DisplayClass32_0
struct CORDL_TYPE __LensFlareCommonSRP____c__DisplayClass32_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LensFlareCommonSRP____c__DisplayClass32_0();

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::Rendering::LensFlareDataElementSRP*", modifiers: "", def_value: None }]
  constexpr __LensFlareCommonSRP____c__DisplayClass32_0(::UnityEngine::Rendering::LensFlareDataElementSRP* element) noexcept;

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::LensFlareDataElementSRP* element;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0, element) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c__DisplayClass32_1
// SizeInfo { instance_size: 28, native_size: -1, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::LensFlareCommonSRP::<>c__DisplayClass32_1
struct CORDL_TYPE __LensFlareCommonSRP____c__DisplayClass32_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LensFlareCommonSRP____c__DisplayClass32_1();

  // Ctor Parameters [CppParam { name: "screenPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "position", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "globalCos0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "globalSin0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "combinedScale",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usedAspectRatio", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __LensFlareCommonSRP____c__DisplayClass32_1(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0, float_t combinedScale,
                                                        float_t usedAspectRatio) noexcept;

  /// @brief Field screenPos, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 screenPos;

  /// @brief Field position, offset: 0x8, size: 0x4, def value: None
  float_t position;

  /// @brief Field globalCos0, offset: 0xc, size: 0x4, def value: None
  float_t globalCos0;

  /// @brief Field globalSin0, offset: 0x10, size: 0x4, def value: None
  float_t globalSin0;

  /// @brief Field combinedScale, offset: 0x14, size: 0x4, def value: None
  float_t combinedScale;

  /// @brief Field usedAspectRatio, offset: 0x18, size: 0x4, def value: None
  float_t usedAspectRatio;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, screenPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, globalCos0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, globalSin0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, combinedScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, usedAspectRatio) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::LensFlareCommonSRP
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::LensFlareCommonSRP*
class CORDL_TYPE LensFlareCommonSRP : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass32_0 = ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0;

  using __c__DisplayClass32_1 = ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1;

  __declspec(property(get = get_Data))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* Data;

  /// @brief Field frameIdx, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_frameIdx, put = setStaticF_frameIdx)) int32_t frameIdx;

  /// @brief Field m_Data, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Data, put = setStaticF_m_Data))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* m_Data;

  /// @brief Field m_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Instance, put = setStaticF_m_Instance))::UnityEngine::Rendering::LensFlareCommonSRP* m_Instance;

  /// @brief Field m_Padlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Padlock, put = setStaticF_m_Padlock))::System::Object* m_Padlock;

  /// @brief Field maxLensFlareWithOcclusion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxLensFlareWithOcclusion, put = setStaticF_maxLensFlareWithOcclusion)) int32_t maxLensFlareWithOcclusion;

  /// @brief Field maxLensFlareWithOcclusionTemporalSample, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxLensFlareWithOcclusionTemporalSample, put = setStaticF_maxLensFlareWithOcclusionTemporalSample)) int32_t maxLensFlareWithOcclusionTemporalSample;

  /// @brief Field mergeNeeded, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mergeNeeded, put = setStaticF_mergeNeeded)) int32_t mergeNeeded;

  /// @brief Field occlusionRT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_occlusionRT, put = setStaticF_occlusionRT))::UnityEngine::Rendering::RTHandle* occlusionRT;

  /// @brief Method AddData, addr 0x19ff1bc, size 0x114, virtual false, abstract: false, final false
  inline void AddData(::UnityEngine::Rendering::LensFlareComponentSRP* newData);

  /// @brief Method CalcCropExtents, addr 0x1a03780, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcCropExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t d);

  /// @brief Method CalcViewExtents, addr 0x1a03740, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcViewExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView);

  /// @brief Method ComputeOcclusion, addr 0x19fff9c, size 0xed8, virtual false, abstract: false, final false
  static inline void ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Rendering::LensFlareCommonSRP* lensFlares, ::UnityEngine::Camera* cam, float_t actualWidth,
                                      float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                      ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex,
                                      int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4);

  /// @brief Method Dispose, addr 0x19feddc, size 0xac, virtual false, abstract: false, final false
  static inline void Dispose();

  /// @brief Method DoLensFlareDataDrivenCommon, addr 0x1a0109c, size 0x2404, virtual false, abstract: false, final false
  static inline void DoLensFlareDataDrivenCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Rendering::LensFlareCommonSRP* lensFlares, ::UnityEngine::Camera* cam, float_t actualWidth,
                                                 float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                                 ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                 ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation,
                                                 int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1,
                                                 int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4, bool debugView);

  /// @brief Method DoPaniniProjection, addr 0x1a00e74, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DoPaniniProjection(::UnityEngine::Vector2 screenPos, float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t paniniProjectionCropToFit,
                                                          float_t paniniProjectionDistance);

  /// @brief Method GetData, addr 0x19ff0e8, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* GetData();

  /// @brief Method GetFlareData0, addr 0x19ffab8, size 0x20c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetFlareData0(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 translationScale, ::UnityEngine::Vector2 rayOff0,
                                                     ::UnityEngine::Vector2 vLocalScreenRatio, float_t angleDeg, float_t position, float_t angularOffset, ::UnityEngine::Vector2 positionOffset,
                                                     bool autoRotate);

  /// @brief Method GetLensFlareRayOffset, addr 0x19ffcc4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetLensFlareRayOffset(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0);

  /// @brief Method Initialize, addr 0x19feb10, size 0x180, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsEmpty, addr 0x19ff138, size 0x84, virtual false, abstract: false, final false
  inline bool IsEmpty();

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* New_ctor();

  /// @brief Method Panini_Generic_Inv, addr 0x1a03844, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Panini_Generic_Inv(::UnityEngine::Vector2 projPos, float_t d);

  /// @brief Method RemoveData, addr 0x1a03670, size 0xd0, virtual false, abstract: false, final false
  inline void RemoveData(::UnityEngine::Rendering::LensFlareComponentSRP* data);

  /// @brief Method ShapeAttenuationAreaDiscLight, addr 0x19ffa20, size 0x98, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaDiscLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationAreaRectangleLight, addr 0x19ff988, size 0x98, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaRectangleLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationAreaTubeLight, addr 0x19ff46c, size 0x234, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaTubeLight(::UnityEngine::Vector3 lightPositionWS, ::UnityEngine::Vector3 lightSide, float_t lightWidth, ::UnityEngine::Camera* cam);

  /// @brief Method ShapeAttenuationDirLight, addr 0x19ff2d8, size 0x20, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationDirLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationPointLight, addr 0x19ff2d0, size 0x8, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationPointLight();

  /// @brief Method ShapeAttenuationSpotBoxLight, addr 0x19ff3a4, size 0x28, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotBoxLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationSpotConeLight, addr 0x19ff2f8, size 0xac, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotConeLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo, float_t spotAngle, float_t innerSpotPercent01);

  /// @brief Method ShapeAttenuationSpotPyramidLight, addr 0x19ff3cc, size 0xa0, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotPyramidLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method WorldToViewport, addr 0x19ffcfc, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewport(::UnityEngine::Camera* camera, bool isLocalLight, bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                       ::UnityEngine::Vector3 positionWS);

  /// @brief Method WorldToViewportDistance, addr 0x19ffeac, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewportDistance(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 positionWS);

  /// @brief Method WorldToViewportLocal, addr 0x19ffe30, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewportLocal(bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 cameraPosWS, ::UnityEngine::Vector3 positionWS);

  /// @brief Method <DoLensFlareDataDrivenCommon>g__ComputeLocalSize|32_0, addr 0x1a034cc, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2
  _DoLensFlareDataDrivenCommon_g__ComputeLocalSize_32_0(::UnityEngine::Vector2 rayOff, ::UnityEngine::Vector2 rayOff0, ::UnityEngine::Vector2 curSize, ::UnityEngine::AnimationCurve* distortionCurve,
                                                        ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0> _cordl_fixed_empty_name_whitespace,
                                                        ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <DoLensFlareDataDrivenCommon>g__RandomRange|32_1, addr 0x1a03668, size 0x8, virtual false, abstract: false, final false
  static inline float_t _DoLensFlareDataDrivenCommon_g__RandomRange_32_1(float_t min, float_t max);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|23_2, addr 0x19ff6a0, size 0x2e8, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_23_2(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__Fpo|23_0, addr 0x1a03964, size 0x40, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__Fpo_23_0(float_t d, float_t l);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__Fwt|23_1, addr 0x1a039a4, size 0x18, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__Fwt_23_1(float_t d, float_t l);

  /// @brief Method .ctor, addr 0x19feb08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_frameIdx();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* getStaticF_m_Data();

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* getStaticF_m_Instance();

  static inline ::System::Object* getStaticF_m_Padlock();

  static inline int32_t getStaticF_maxLensFlareWithOcclusion();

  static inline int32_t getStaticF_maxLensFlareWithOcclusionTemporalSample();

  static inline int32_t getStaticF_mergeNeeded();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_occlusionRT();

  /// @brief Method get_Data, addr 0x19ff090, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* get_Data();

  /// @brief Method get_Instance, addr 0x19fef00, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* get_Instance();

  static inline void setStaticF_frameIdx(int32_t value);

  static inline void setStaticF_m_Data(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* value);

  static inline void setStaticF_m_Instance(::UnityEngine::Rendering::LensFlareCommonSRP* value);

  static inline void setStaticF_m_Padlock(::System::Object* value);

  static inline void setStaticF_maxLensFlareWithOcclusion(int32_t value);

  static inline void setStaticF_maxLensFlareWithOcclusionTemporalSample(int32_t value);

  static inline void setStaticF_mergeNeeded(int32_t value);

  static inline void setStaticF_occlusionRT(::UnityEngine::Rendering::RTHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareCommonSRP(LensFlareCommonSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareCommonSRP(LensFlareCommonSRP const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP*, "UnityEngine.Rendering", "LensFlareCommonSRP");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass32_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass32_1");
