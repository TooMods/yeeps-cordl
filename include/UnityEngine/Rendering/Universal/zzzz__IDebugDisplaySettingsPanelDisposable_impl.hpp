#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanel_def.hpp"
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
constexpr UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*
UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanel() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
