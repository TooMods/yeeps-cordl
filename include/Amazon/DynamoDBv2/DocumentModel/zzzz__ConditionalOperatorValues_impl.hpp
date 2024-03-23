#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues::ConditionalOperatorValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues::ConditionalOperatorValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues::And{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues::Or{ static_cast<int32_t>(0x1) };
