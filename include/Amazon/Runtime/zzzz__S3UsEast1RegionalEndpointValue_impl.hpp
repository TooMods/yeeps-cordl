#pragma once
#include "Amazon/Runtime/zzzz__S3UsEast1RegionalEndpointValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::S3UsEast1RegionalEndpointValue::S3UsEast1RegionalEndpointValue(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::S3UsEast1RegionalEndpointValue::S3UsEast1RegionalEndpointValue() {}
constexpr ::Amazon::Runtime::S3UsEast1RegionalEndpointValue Amazon::Runtime::S3UsEast1RegionalEndpointValue::Legacy{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::S3UsEast1RegionalEndpointValue Amazon::Runtime::S3UsEast1RegionalEndpointValue::Regional{ static_cast<int32_t>(0x1) };
