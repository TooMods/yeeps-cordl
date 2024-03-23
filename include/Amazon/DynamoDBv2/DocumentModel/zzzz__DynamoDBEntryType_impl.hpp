#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType::DynamoDBEntryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType::DynamoDBEntryType() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType::String{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType::Numeric{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType::Binary{ static_cast<int32_t>(0x2) };
