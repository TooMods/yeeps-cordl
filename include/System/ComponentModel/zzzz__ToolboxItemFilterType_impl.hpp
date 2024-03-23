#pragma once
#include "System/ComponentModel/zzzz__ToolboxItemFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::ToolboxItemFilterType::ToolboxItemFilterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ToolboxItemFilterType::ToolboxItemFilterType() {}
constexpr ::System::ComponentModel::ToolboxItemFilterType System::ComponentModel::ToolboxItemFilterType::Allow{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::ToolboxItemFilterType System::ComponentModel::ToolboxItemFilterType::Custom{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::ToolboxItemFilterType System::ComponentModel::ToolboxItemFilterType::Prevent{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::ToolboxItemFilterType System::ComponentModel::ToolboxItemFilterType::Require{ static_cast<int32_t>(0x3) };
