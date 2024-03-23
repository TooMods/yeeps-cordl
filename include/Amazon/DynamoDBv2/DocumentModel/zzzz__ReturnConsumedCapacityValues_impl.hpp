#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ReturnConsumedCapacityValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues::ReturnConsumedCapacityValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues::ReturnConsumedCapacityValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues::None{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues::Total{ static_cast<int32_t>(0x1) };
