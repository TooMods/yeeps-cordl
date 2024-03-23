#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeDilationSettings_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__VirtualOffsetSettings_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "dilationSettings", ty: "::UnityEngine::Experimental::Rendering::ProbeDilationSettings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "virtualOffsetSettings", ty: "::UnityEngine::Experimental::Rendering::VirtualOffsetSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings::ProbeVolumeBakingProcessSettings(
    ::UnityEngine::Experimental::Rendering::ProbeDilationSettings dilationSettings, ::UnityEngine::Experimental::Rendering::VirtualOffsetSettings virtualOffsetSettings) noexcept {
  this->dilationSettings = dilationSettings;
  this->virtualOffsetSettings = virtualOffsetSettings;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings::ProbeVolumeBakingProcessSettings() {}
