#pragma once
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariablesProbeVolumes_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "_PoolDim", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViewBias", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_MinCellPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PVSamplingNoise", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_CellIndicesDim", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CellInMeters", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_CellInMinBricks", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MinBrickSize", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_IndexChunkSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NormalBias", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderVariablesProbeVolumes::ShaderVariablesProbeVolumes(::UnityEngine::Vector3 _PoolDim, float_t _ViewBias, ::UnityEngine::Vector3 _MinCellPosition,
                                                                                             float_t _PVSamplingNoise, ::UnityEngine::Vector3 _CellIndicesDim, float_t _CellInMeters,
                                                                                             float_t _CellInMinBricks, float_t _MinBrickSize, int32_t _IndexChunkSize, float_t _NormalBias) noexcept {
  this->_PoolDim = _PoolDim;
  this->_ViewBias = _ViewBias;
  this->_MinCellPosition = _MinCellPosition;
  this->_PVSamplingNoise = _PVSamplingNoise;
  this->_CellIndicesDim = _CellIndicesDim;
  this->_CellInMeters = _CellInMeters;
  this->_CellInMinBricks = _CellInMinBricks;
  this->_MinBrickSize = _MinBrickSize;
  this->_IndexChunkSize = _IndexChunkSize;
  this->_NormalBias = _NormalBias;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderVariablesProbeVolumes::ShaderVariablesProbeVolumes() {}
