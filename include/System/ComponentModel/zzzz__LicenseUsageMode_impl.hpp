#pragma once
#include "System/ComponentModel/zzzz__LicenseUsageMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::LicenseUsageMode::LicenseUsageMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicenseUsageMode::LicenseUsageMode() {}
constexpr ::System::ComponentModel::LicenseUsageMode System::ComponentModel::LicenseUsageMode::Runtime{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::LicenseUsageMode System::ComponentModel::LicenseUsageMode::Designtime{ static_cast<int32_t>(0x1) };
