#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareComponentSRP)
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LensFlareComponentSRP;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareComponentSRP);
// Type: UnityEngine.Rendering::LensFlareComponentSRP
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 101, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::LensFlareComponentSRP*
class CORDL_TYPE LensFlareComponentSRP : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field allowOffScreen, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_allowOffScreen, put = __cordl_internal_set_allowOffScreen)) bool allowOffScreen;

  /// @brief Field attenuationByLightShape, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_attenuationByLightShape, put = __cordl_internal_set_attenuationByLightShape)) bool attenuationByLightShape;

  /// @brief Field distanceAttenuationCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_distanceAttenuationCurve, put = __cordl_internal_set_distanceAttenuationCurve))::UnityEngine::AnimationCurve* distanceAttenuationCurve;

  /// @brief Field intensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  __declspec(property(get = get_lensFlareData, put = set_lensFlareData))::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> lensFlareData;

  /// @brief Field m_LensFlareData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensFlareData, put = __cordl_internal_set_m_LensFlareData))::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> m_LensFlareData;

  /// @brief Field maxAttenuationDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAttenuationDistance, put = __cordl_internal_set_maxAttenuationDistance)) float_t maxAttenuationDistance;

  /// @brief Field maxAttenuationScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAttenuationScale, put = __cordl_internal_set_maxAttenuationScale)) float_t maxAttenuationScale;

  /// @brief Field occlusionOffset, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_occlusionOffset, put = __cordl_internal_set_occlusionOffset)) float_t occlusionOffset;

  /// @brief Field occlusionRadius, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_occlusionRadius, put = __cordl_internal_set_occlusionRadius)) float_t occlusionRadius;

  /// @brief Field radialScreenAttenuationCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_radialScreenAttenuationCurve, put = __cordl_internal_set_radialScreenAttenuationCurve))::UnityEngine::AnimationCurve* radialScreenAttenuationCurve;

  /// @brief Field sCelestialAngularRadius, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_sCelestialAngularRadius, put = setStaticF_sCelestialAngularRadius)) float_t sCelestialAngularRadius;

  /// @brief Field sampleCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_sampleCount, put = __cordl_internal_set_sampleCount)) uint32_t sampleCount;

  /// @brief Field scale, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) float_t scale;

  /// @brief Field scaleByDistanceCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleByDistanceCurve, put = __cordl_internal_set_scaleByDistanceCurve))::UnityEngine::AnimationCurve* scaleByDistanceCurve;

  /// @brief Field useOcclusion, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_useOcclusion, put = __cordl_internal_set_useOcclusion)) bool useOcclusion;

  static inline ::UnityEngine::Rendering::LensFlareComponentSRP* New_ctor();

  /// @brief Method OnDisable, addr 0x1a03b4c, size 0x60, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1a03aa0, size 0xac, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x1a039cc, size 0xd4, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get_allowOffScreen() const;

  constexpr bool& __cordl_internal_get_allowOffScreen();

  constexpr bool const& __cordl_internal_get_attenuationByLightShape() const;

  constexpr bool& __cordl_internal_get_attenuationByLightShape();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_distanceAttenuationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_distanceAttenuationCurve() const;

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> const& __cordl_internal_get_m_LensFlareData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP>& __cordl_internal_get_m_LensFlareData();

  constexpr float_t const& __cordl_internal_get_maxAttenuationDistance() const;

  constexpr float_t& __cordl_internal_get_maxAttenuationDistance();

  constexpr float_t const& __cordl_internal_get_maxAttenuationScale() const;

  constexpr float_t& __cordl_internal_get_maxAttenuationScale();

  constexpr float_t const& __cordl_internal_get_occlusionOffset() const;

  constexpr float_t& __cordl_internal_get_occlusionOffset();

  constexpr float_t const& __cordl_internal_get_occlusionRadius() const;

  constexpr float_t& __cordl_internal_get_occlusionRadius();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_radialScreenAttenuationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_radialScreenAttenuationCurve() const;

  constexpr uint32_t const& __cordl_internal_get_sampleCount() const;

  constexpr uint32_t& __cordl_internal_get_sampleCount();

  constexpr float_t const& __cordl_internal_get_scale() const;

  constexpr float_t& __cordl_internal_get_scale();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleByDistanceCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_scaleByDistanceCurve() const;

  constexpr bool const& __cordl_internal_get_useOcclusion() const;

  constexpr bool& __cordl_internal_get_useOcclusion();

  constexpr void __cordl_internal_set_allowOffScreen(bool value);

  constexpr void __cordl_internal_set_attenuationByLightShape(bool value);

  constexpr void __cordl_internal_set_distanceAttenuationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_m_LensFlareData(::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> value);

  constexpr void __cordl_internal_set_maxAttenuationDistance(float_t value);

  constexpr void __cordl_internal_set_maxAttenuationScale(float_t value);

  constexpr void __cordl_internal_set_occlusionOffset(float_t value);

  constexpr void __cordl_internal_set_occlusionRadius(float_t value);

  constexpr void __cordl_internal_set_radialScreenAttenuationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_sampleCount(uint32_t value);

  constexpr void __cordl_internal_set_scale(float_t value);

  constexpr void __cordl_internal_set_scaleByDistanceCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_useOcclusion(bool value);

  /// @brief Method .ctor, addr 0x1a03bac, size 0x314, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method celestialProjectedOcclusionRadius, addr 0x1a00fd4, size 0xc8, virtual false, abstract: false, final false
  inline float_t celestialProjectedOcclusionRadius(::UnityEngine::Camera* mainCam);

  static inline float_t getStaticF_sCelestialAngularRadius();

  /// @brief Method get_lensFlareData, addr 0x1a039bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> get_lensFlareData();

  static inline void setStaticF_sCelestialAngularRadius(float_t value);

  /// @brief Method set_lensFlareData, addr 0x1a039c4, size 0x8, virtual false, abstract: false, final false
  inline void set_lensFlareData(::UnityEngine::Rendering::LensFlareDataSRP* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareComponentSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareComponentSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareComponentSRP(LensFlareComponentSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareComponentSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareComponentSRP(LensFlareComponentSRP const&) = delete;

  /// @brief Field m_LensFlareData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> ___m_LensFlareData;

  /// @brief Field intensity, offset: 0x20, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field maxAttenuationDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___maxAttenuationDistance;

  /// @brief Field maxAttenuationScale, offset: 0x28, size: 0x4, def value: None
  float_t ___maxAttenuationScale;

  /// @brief Field distanceAttenuationCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___distanceAttenuationCurve;

  /// @brief Field scaleByDistanceCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleByDistanceCurve;

  /// @brief Field attenuationByLightShape, offset: 0x40, size: 0x1, def value: None
  bool ___attenuationByLightShape;

  /// @brief Field radialScreenAttenuationCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___radialScreenAttenuationCurve;

  /// @brief Field useOcclusion, offset: 0x50, size: 0x1, def value: None
  bool ___useOcclusion;

  /// @brief Field occlusionRadius, offset: 0x54, size: 0x4, def value: None
  float_t ___occlusionRadius;

  /// @brief Field sampleCount, offset: 0x58, size: 0x4, def value: None
  uint32_t ___sampleCount;

  /// @brief Field occlusionOffset, offset: 0x5c, size: 0x4, def value: None
  float_t ___occlusionOffset;

  /// @brief Field scale, offset: 0x60, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field allowOffScreen, offset: 0x64, size: 0x1, def value: None
  bool ___allowOffScreen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareComponentSRP, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___m_LensFlareData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___intensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___maxAttenuationDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___maxAttenuationScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___distanceAttenuationCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___scaleByDistanceCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___attenuationByLightShape) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___radialScreenAttenuationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___useOcclusion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___occlusionRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___sampleCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___occlusionOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___scale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___allowOffScreen) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareComponentSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareComponentSRP*, "UnityEngine.Rendering", "LensFlareComponentSRP");
