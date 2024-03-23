#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphProfileId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphProfileId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphProfileId() {}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::CompileRenderGraph{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::ExecuteRenderGraph{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphClear{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphClearDebug{
  static_cast<int32_t>(0x3)
};
