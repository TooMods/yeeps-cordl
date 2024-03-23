#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__ApplicationSettingsMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode::ApplicationSettingsMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode::ApplicationSettingsMode() {}
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode::None{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode::Local{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode::Roaming{ static_cast<int32_t>(0x2) };
