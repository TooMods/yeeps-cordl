#pragma once
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus::RendererListStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus::RendererListStatus() {}
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus UnityEngine::Rendering::RendererUtils::RendererListStatus::kRendererListInvalid{ static_cast<int32_t>(0xfffffffe) };
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus UnityEngine::Rendering::RendererUtils::RendererListStatus::kRendererListProcessing{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus UnityEngine::Rendering::RendererUtils::RendererListStatus::kRendererListEmpty{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListStatus UnityEngine::Rendering::RendererUtils::RendererListStatus::kRendererListPopulated{ static_cast<int32_t>(0x1) };
