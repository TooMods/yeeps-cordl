#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DebugProbeShadingMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeDebug)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeDebug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug);
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeDebug
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeDebug*
class CORDL_TYPE ProbeVolumeDebug : public ::System::Object {
public:
  // Declarations
  /// @brief Field drawBricks, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_drawBricks, put = __cordl_internal_set_drawBricks)) bool drawBricks;

  /// @brief Field drawCells, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_drawCells, put = __cordl_internal_set_drawCells)) bool drawCells;

  /// @brief Field drawProbes, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_drawProbes, put = __cordl_internal_set_drawProbes)) bool drawProbes;

  /// @brief Field exposureCompensation, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_exposureCompensation, put = __cordl_internal_set_exposureCompensation)) float_t exposureCompensation;

  /// @brief Field maxSubdivToVisualize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSubdivToVisualize, put = __cordl_internal_set_maxSubdivToVisualize)) int32_t maxSubdivToVisualize;

  /// @brief Field probeCullingDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_probeCullingDistance, put = __cordl_internal_set_probeCullingDistance)) float_t probeCullingDistance;

  /// @brief Field probeShading, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_probeShading, put = __cordl_internal_set_probeShading))::UnityEngine::Experimental::Rendering::DebugProbeShadingMode probeShading;

  /// @brief Field probeSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_probeSize, put = __cordl_internal_set_probeSize)) float_t probeSize;

  /// @brief Field realtimeSubdivision, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_realtimeSubdivision, put = __cordl_internal_set_realtimeSubdivision)) bool realtimeSubdivision;

  /// @brief Field subdivisionCellUpdatePerFrame, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionCellUpdatePerFrame, put = __cordl_internal_set_subdivisionCellUpdatePerFrame)) int32_t subdivisionCellUpdatePerFrame;

  /// @brief Field subdivisionDelayInSeconds, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionDelayInSeconds, put = __cordl_internal_set_subdivisionDelayInSeconds)) float_t subdivisionDelayInSeconds;

  /// @brief Field subdivisionViewCullingDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionViewCullingDistance, put = __cordl_internal_set_subdivisionViewCullingDistance)) float_t subdivisionViewCullingDistance;

  static inline ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* New_ctor();

  constexpr bool const& __cordl_internal_get_drawBricks() const;

  constexpr bool& __cordl_internal_get_drawBricks();

  constexpr bool const& __cordl_internal_get_drawCells() const;

  constexpr bool& __cordl_internal_get_drawCells();

  constexpr bool const& __cordl_internal_get_drawProbes() const;

  constexpr bool& __cordl_internal_get_drawProbes();

  constexpr float_t const& __cordl_internal_get_exposureCompensation() const;

  constexpr float_t& __cordl_internal_get_exposureCompensation();

  constexpr int32_t const& __cordl_internal_get_maxSubdivToVisualize() const;

  constexpr int32_t& __cordl_internal_get_maxSubdivToVisualize();

  constexpr float_t const& __cordl_internal_get_probeCullingDistance() const;

  constexpr float_t& __cordl_internal_get_probeCullingDistance();

  constexpr ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const& __cordl_internal_get_probeShading() const;

  constexpr ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode& __cordl_internal_get_probeShading();

  constexpr float_t const& __cordl_internal_get_probeSize() const;

  constexpr float_t& __cordl_internal_get_probeSize();

  constexpr bool const& __cordl_internal_get_realtimeSubdivision() const;

  constexpr bool& __cordl_internal_get_realtimeSubdivision();

  constexpr int32_t const& __cordl_internal_get_subdivisionCellUpdatePerFrame() const;

  constexpr int32_t& __cordl_internal_get_subdivisionCellUpdatePerFrame();

  constexpr float_t const& __cordl_internal_get_subdivisionDelayInSeconds() const;

  constexpr float_t& __cordl_internal_get_subdivisionDelayInSeconds();

  constexpr float_t const& __cordl_internal_get_subdivisionViewCullingDistance() const;

  constexpr float_t& __cordl_internal_get_subdivisionViewCullingDistance();

  constexpr void __cordl_internal_set_drawBricks(bool value);

  constexpr void __cordl_internal_set_drawCells(bool value);

  constexpr void __cordl_internal_set_drawProbes(bool value);

  constexpr void __cordl_internal_set_exposureCompensation(float_t value);

  constexpr void __cordl_internal_set_maxSubdivToVisualize(int32_t value);

  constexpr void __cordl_internal_set_probeCullingDistance(float_t value);

  constexpr void __cordl_internal_set_probeShading(::UnityEngine::Experimental::Rendering::DebugProbeShadingMode value);

  constexpr void __cordl_internal_set_probeSize(float_t value);

  constexpr void __cordl_internal_set_realtimeSubdivision(bool value);

  constexpr void __cordl_internal_set_subdivisionCellUpdatePerFrame(int32_t value);

  constexpr void __cordl_internal_set_subdivisionDelayInSeconds(float_t value);

  constexpr void __cordl_internal_set_subdivisionViewCullingDistance(float_t value);

  /// @brief Method .ctor, addr 0x23c3f84, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebug(ProbeVolumeDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebug(ProbeVolumeDebug const&) = delete;

  /// @brief Field drawProbes, offset: 0x10, size: 0x1, def value: None
  bool ___drawProbes;

  /// @brief Field drawBricks, offset: 0x11, size: 0x1, def value: None
  bool ___drawBricks;

  /// @brief Field drawCells, offset: 0x12, size: 0x1, def value: None
  bool ___drawCells;

  /// @brief Field realtimeSubdivision, offset: 0x13, size: 0x1, def value: None
  bool ___realtimeSubdivision;

  /// @brief Field subdivisionCellUpdatePerFrame, offset: 0x14, size: 0x4, def value: None
  int32_t ___subdivisionCellUpdatePerFrame;

  /// @brief Field subdivisionDelayInSeconds, offset: 0x18, size: 0x4, def value: None
  float_t ___subdivisionDelayInSeconds;

  /// @brief Field probeShading, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode ___probeShading;

  /// @brief Field probeSize, offset: 0x20, size: 0x4, def value: None
  float_t ___probeSize;

  /// @brief Field subdivisionViewCullingDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___subdivisionViewCullingDistance;

  /// @brief Field probeCullingDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___probeCullingDistance;

  /// @brief Field maxSubdivToVisualize, offset: 0x2c, size: 0x4, def value: None
  int32_t ___maxSubdivToVisualize;

  /// @brief Field exposureCompensation, offset: 0x30, size: 0x4, def value: None
  float_t ___exposureCompensation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___drawProbes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___drawBricks) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___drawCells) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___realtimeSubdivision) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___subdivisionCellUpdatePerFrame) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___subdivisionDelayInSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___probeShading) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___probeSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___subdivisionViewCullingDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___probeCullingDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___maxSubdivToVisualize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug, ___exposureCompensation) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*, "UnityEngine.Experimental.Rendering", "ProbeVolumeDebug");
