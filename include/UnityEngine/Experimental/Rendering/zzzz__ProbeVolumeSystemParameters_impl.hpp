#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSystemParameters_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "memoryBudget", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "probeDebugMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "probeDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "sceneData", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "shBands", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters::ProbeVolumeSystemParameters(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                                           ::UnityW<::UnityEngine::Mesh> probeDebugMesh,
                                                                                                           ::UnityW<::UnityEngine::Shader> probeDebugShader,
                                                                                                           ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData,
                                                                                                           ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) noexcept {
  this->memoryBudget = memoryBudget;
  this->probeDebugMesh = probeDebugMesh;
  this->probeDebugShader = probeDebugShader;
  this->sceneData = sceneData;
  this->shBands = shBands;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters::ProbeVolumeSystemParameters() {}
