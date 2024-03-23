#pragma once
#include "System/ComponentModel/zzzz__PropertyTabScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::PropertyTabScope::PropertyTabScope(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyTabScope::PropertyTabScope() {}
constexpr ::System::ComponentModel::PropertyTabScope System::ComponentModel::PropertyTabScope::Static{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::PropertyTabScope System::ComponentModel::PropertyTabScope::Global{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::PropertyTabScope System::ComponentModel::PropertyTabScope::Document{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::PropertyTabScope System::ComponentModel::PropertyTabScope::Component{ static_cast<int32_t>(0x3) };
