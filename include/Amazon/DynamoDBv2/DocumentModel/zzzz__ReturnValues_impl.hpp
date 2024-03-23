#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ReturnValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues::ReturnValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues::ReturnValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues Amazon::DynamoDBv2::DocumentModel::ReturnValues::None{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues Amazon::DynamoDBv2::DocumentModel::ReturnValues::AllOldAttributes{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues Amazon::DynamoDBv2::DocumentModel::ReturnValues::AllNewAttributes{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues Amazon::DynamoDBv2::DocumentModel::ReturnValues::UpdatedOldAttributes{ static_cast<int32_t>(0x3) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnValues Amazon::DynamoDBv2::DocumentModel::ReturnValues::UpdatedNewAttributes{ static_cast<int32_t>(0x4) };
