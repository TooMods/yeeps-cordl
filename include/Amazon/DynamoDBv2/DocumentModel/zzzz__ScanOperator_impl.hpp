#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator::ScanOperator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator::ScanOperator() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::Equal{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::NotEqual{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::LessThanOrEqual{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::LessThan{ static_cast<int32_t>(0x3) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::GreaterThanOrEqual{ static_cast<int32_t>(0x4) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::GreaterThan{ static_cast<int32_t>(0x5) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::IsNotNull{ static_cast<int32_t>(0x6) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::IsNull{ static_cast<int32_t>(0x7) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::Contains{ static_cast<int32_t>(0x8) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::NotContains{ static_cast<int32_t>(0x9) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::BeginsWith{ static_cast<int32_t>(0xa) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::In{ static_cast<int32_t>(0xb) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ScanOperator::Between{ static_cast<int32_t>(0xc) };
