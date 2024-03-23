#pragma once
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::ConversionSchema::ConversionSchema(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ConversionSchema::ConversionSchema() {}
constexpr ::Amazon::DynamoDBv2::ConversionSchema Amazon::DynamoDBv2::ConversionSchema::V1{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::ConversionSchema Amazon::DynamoDBv2::ConversionSchema::V2{ static_cast<int32_t>(0x1) };
