#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ProjectionTypeValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues::ProjectionTypeValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues::ProjectionTypeValues() {}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues::All{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues::Include{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues::KeysOnly{ static_cast<int32_t>(0x2) };
