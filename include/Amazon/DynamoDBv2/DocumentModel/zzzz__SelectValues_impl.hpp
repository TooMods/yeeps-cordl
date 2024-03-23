#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues::SelectValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues::SelectValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues Amazon::DynamoDBv2::DocumentModel::SelectValues::Count{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues Amazon::DynamoDBv2::DocumentModel::SelectValues::SpecificAttributes{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues Amazon::DynamoDBv2::DocumentModel::SelectValues::AllAttributes{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues Amazon::DynamoDBv2::DocumentModel::SelectValues::AllProjectedAttributes{ static_cast<int32_t>(0x3) };
