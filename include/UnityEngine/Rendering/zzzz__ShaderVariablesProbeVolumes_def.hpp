#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderVariablesProbeVolumes)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderVariablesProbeVolumes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderVariablesProbeVolumes);
// Type: UnityEngine.Rendering::ShaderVariablesProbeVolumes
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShaderVariablesProbeVolumes
struct CORDL_TYPE ShaderVariablesProbeVolumes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariablesProbeVolumes();

  // Ctor Parameters [CppParam { name: "_PoolDim", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_ViewBias", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "_MinCellPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_PVSamplingNoise", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "_CellIndicesDim", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_CellInMeters", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_CellInMinBricks", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_MinBrickSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_IndexChunkSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_NormalBias", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ShaderVariablesProbeVolumes(::UnityEngine::Vector3 _PoolDim, float_t _ViewBias, ::UnityEngine::Vector3 _MinCellPosition, float_t _PVSamplingNoise, ::UnityEngine::Vector3 _CellIndicesDim,
                                        float_t _CellInMeters, float_t _CellInMinBricks, float_t _MinBrickSize, int32_t _IndexChunkSize, float_t _NormalBias) noexcept;

  /// @brief Field _PoolDim, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _PoolDim;

  /// @brief Field _ViewBias, offset: 0xc, size: 0x4, def value: None
  float_t _ViewBias;

  /// @brief Field _MinCellPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 _MinCellPosition;

  /// @brief Field _PVSamplingNoise, offset: 0x1c, size: 0x4, def value: None
  float_t _PVSamplingNoise;

  /// @brief Field _CellIndicesDim, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 _CellIndicesDim;

  /// @brief Field _CellInMeters, offset: 0x2c, size: 0x4, def value: None
  float_t _CellInMeters;

  /// @brief Field _CellInMinBricks, offset: 0x30, size: 0x4, def value: None
  float_t _CellInMinBricks;

  /// @brief Field _MinBrickSize, offset: 0x34, size: 0x4, def value: None
  float_t _MinBrickSize;

  /// @brief Field _IndexChunkSize, offset: 0x38, size: 0x4, def value: None
  int32_t _IndexChunkSize;

  /// @brief Field _NormalBias, offset: 0x3c, size: 0x4, def value: None
  float_t _NormalBias;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderVariablesProbeVolumes, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _PoolDim) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _ViewBias) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _MinCellPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _PVSamplingNoise) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _CellIndicesDim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _CellInMeters) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _CellInMinBricks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _MinBrickSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _IndexChunkSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _NormalBias) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, "UnityEngine.Rendering", "ShaderVariablesProbeVolumes");
