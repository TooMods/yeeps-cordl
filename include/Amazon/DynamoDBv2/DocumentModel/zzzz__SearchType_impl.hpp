#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SearchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType::SearchType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType::SearchType() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType Amazon::DynamoDBv2::DocumentModel::SearchType::Scan{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType Amazon::DynamoDBv2::DocumentModel::SearchType::Query{ static_cast<int32_t>(0x1) };
