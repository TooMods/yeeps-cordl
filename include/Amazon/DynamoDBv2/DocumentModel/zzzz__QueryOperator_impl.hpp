#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator::QueryOperator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator::QueryOperator() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::Equal{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::LessThanOrEqual{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::LessThan{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::GreaterThanOrEqual{ static_cast<int32_t>(0x3) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::GreaterThan{ static_cast<int32_t>(0x4) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::BeginsWith{ static_cast<int32_t>(0x5) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator Amazon::DynamoDBv2::DocumentModel::QueryOperator::Between{ static_cast<int32_t>(0x6) };
