#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess::DepthAccess(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess::DepthAccess() {}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess::Read{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess::Write{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess::ReadWrite{ static_cast<int32_t>(0x3) };
