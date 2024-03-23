#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolume)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeVolume;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeVolume);
// Type: UnityEngine.Experimental.Rendering::ProbeVolume
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolume*
class CORDL_TYPE ProbeVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cachedHashCode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedHashCode, put = __cordl_internal_set_cachedHashCode)) int32_t cachedHashCode;

  /// @brief Field cachedTransform, offset 0x3c, size 0x40
  __declspec(property(get = __cordl_internal_get_cachedTransform, put = __cordl_internal_set_cachedTransform))::UnityEngine::Matrix4x4 cachedTransform;

  /// @brief Field geometryDistanceOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_geometryDistanceOffset, put = __cordl_internal_set_geometryDistanceOffset)) float_t geometryDistanceOffset;

  /// @brief Field globalVolume, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_globalVolume, put = __cordl_internal_set_globalVolume)) bool globalVolume;

  /// @brief Field highestSubdivLevelOverride, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_highestSubdivLevelOverride, put = __cordl_internal_set_highestSubdivLevelOverride)) int32_t highestSubdivLevelOverride;

  /// @brief Field lowestSubdivLevelOverride, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_lowestSubdivLevelOverride, put = __cordl_internal_set_lowestSubdivLevelOverride)) int32_t lowestSubdivLevelOverride;

  /// @brief Field mightNeedRebaking, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_mightNeedRebaking, put = __cordl_internal_set_mightNeedRebaking)) bool mightNeedRebaking;

  /// @brief Field objectLayerMask, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_objectLayerMask, put = __cordl_internal_set_objectLayerMask))::UnityEngine::LayerMask objectLayerMask;

  /// @brief Field overridesSubdivLevels, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_overridesSubdivLevels, put = __cordl_internal_set_overridesSubdivLevels)) bool overridesSubdivLevels;

  /// @brief Field size, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size))::UnityEngine::Vector3 size;

  static inline ::UnityEngine::Experimental::Rendering::ProbeVolume* New_ctor();

  constexpr int32_t const& __cordl_internal_get_cachedHashCode() const;

  constexpr int32_t& __cordl_internal_get_cachedHashCode();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cachedTransform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cachedTransform();

  constexpr float_t const& __cordl_internal_get_geometryDistanceOffset() const;

  constexpr float_t& __cordl_internal_get_geometryDistanceOffset();

  constexpr bool const& __cordl_internal_get_globalVolume() const;

  constexpr bool& __cordl_internal_get_globalVolume();

  constexpr int32_t const& __cordl_internal_get_highestSubdivLevelOverride() const;

  constexpr int32_t& __cordl_internal_get_highestSubdivLevelOverride();

  constexpr int32_t const& __cordl_internal_get_lowestSubdivLevelOverride() const;

  constexpr int32_t& __cordl_internal_get_lowestSubdivLevelOverride();

  constexpr bool const& __cordl_internal_get_mightNeedRebaking() const;

  constexpr bool& __cordl_internal_get_mightNeedRebaking();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_objectLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_objectLayerMask();

  constexpr bool const& __cordl_internal_get_overridesSubdivLevels() const;

  constexpr bool& __cordl_internal_get_overridesSubdivLevels();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_cachedHashCode(int32_t value);

  constexpr void __cordl_internal_set_cachedTransform(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_geometryDistanceOffset(float_t value);

  constexpr void __cordl_internal_set_globalVolume(bool value);

  constexpr void __cordl_internal_set_highestSubdivLevelOverride(int32_t value);

  constexpr void __cordl_internal_set_lowestSubdivLevelOverride(int32_t value);

  constexpr void __cordl_internal_set_mightNeedRebaking(bool value);

  constexpr void __cordl_internal_set_objectLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_overridesSubdivLevels(bool value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x23c79a0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolume(ProbeVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolume(ProbeVolume const&) = delete;

  /// @brief Field globalVolume, offset: 0x18, size: 0x1, def value: None
  bool ___globalVolume;

  /// @brief Field size, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___size;

  /// @brief Field geometryDistanceOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___geometryDistanceOffset;

  /// @brief Field objectLayerMask, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___objectLayerMask;

  /// @brief Field lowestSubdivLevelOverride, offset: 0x30, size: 0x4, def value: None
  int32_t ___lowestSubdivLevelOverride;

  /// @brief Field highestSubdivLevelOverride, offset: 0x34, size: 0x4, def value: None
  int32_t ___highestSubdivLevelOverride;

  /// @brief Field overridesSubdivLevels, offset: 0x38, size: 0x1, def value: None
  bool ___overridesSubdivLevels;

  /// @brief Field mightNeedRebaking, offset: 0x39, size: 0x1, def value: None
  bool ___mightNeedRebaking;

  /// @brief Field cachedTransform, offset: 0x3c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cachedTransform;

  /// @brief Field cachedHashCode, offset: 0x7c, size: 0x4, def value: None
  int32_t ___cachedHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolume, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___globalVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___size) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___geometryDistanceOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___objectLayerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___lowestSubdivLevelOverride) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___highestSubdivLevelOverride) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___overridesSubdivLevels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___mightNeedRebaking) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___cachedTransform) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolume, ___cachedHashCode) == 0x7c, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolume*, "UnityEngine.Experimental.Rendering", "ProbeVolume");
