#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget::ProbeVolumeTextureMemoryBudget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget::ProbeVolumeTextureMemoryBudget() {}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetLow{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetMedium{ static_cast<int32_t>(
    0x400) };
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetHigh{ static_cast<int32_t>(0x800) };
