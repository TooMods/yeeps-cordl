#pragma once
#include "System/ComponentModel/zzzz__DataObjectMethodType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::DataObjectMethodType::DataObjectMethodType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DataObjectMethodType::DataObjectMethodType() {}
constexpr ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodType::Fill{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodType::Select{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodType::Update{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodType::Insert{ static_cast<int32_t>(0x3) };
constexpr ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodType::Delete{ static_cast<int32_t>(0x4) };
