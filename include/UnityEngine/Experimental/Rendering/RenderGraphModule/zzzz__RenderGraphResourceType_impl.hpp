#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType::RenderGraphResourceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType::RenderGraphResourceType() {}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType::Texture{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType::ComputeBuffer{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType::Count{
  static_cast<int32_t>(0x2)
};
