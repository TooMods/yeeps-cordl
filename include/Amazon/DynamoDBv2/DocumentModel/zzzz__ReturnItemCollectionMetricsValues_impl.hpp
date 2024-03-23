#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ReturnItemCollectionMetricsValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues::ReturnItemCollectionMetricsValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues::ReturnItemCollectionMetricsValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues::None{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues::All{ static_cast<int32_t>(0x1) };
