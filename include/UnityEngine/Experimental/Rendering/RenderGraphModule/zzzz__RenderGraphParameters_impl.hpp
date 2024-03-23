#pragma once
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
// Ctor Parameters [CppParam { name: "executionName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "rendererListCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scriptableRenderContext", ty:
// "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters(::StringW executionName, int32_t currentFrameIndex, bool rendererListCulling,
                                                                                                                  ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext,
                                                                                                                  ::UnityEngine::Rendering::CommandBuffer* commandBuffer) noexcept {
  this->executionName = executionName;
  this->currentFrameIndex = currentFrameIndex;
  this->rendererListCulling = rendererListCulling;
  this->scriptableRenderContext = scriptableRenderContext;
  this->commandBuffer = commandBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters() {}
