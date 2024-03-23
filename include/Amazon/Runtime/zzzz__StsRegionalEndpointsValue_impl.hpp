#pragma once
#include "Amazon/Runtime/zzzz__StsRegionalEndpointsValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::StsRegionalEndpointsValue::StsRegionalEndpointsValue(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::StsRegionalEndpointsValue::StsRegionalEndpointsValue() {}
constexpr ::Amazon::Runtime::StsRegionalEndpointsValue Amazon::Runtime::StsRegionalEndpointsValue::Legacy{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::StsRegionalEndpointsValue Amazon::Runtime::StsRegionalEndpointsValue::Regional{ static_cast<int32_t>(0x1) };
