#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "useVirtualOffset", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "outOfGeoOffset", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "searchMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::VirtualOffsetSettings::VirtualOffsetSettings(bool useVirtualOffset, float_t outOfGeoOffset, float_t searchMultiplier) noexcept {
  this->useVirtualOffset = useVirtualOffset;
  this->outOfGeoOffset = outOfGeoOffset;
  this->searchMultiplier = searchMultiplier;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::VirtualOffsetSettings::VirtualOffsetSettings() {}
