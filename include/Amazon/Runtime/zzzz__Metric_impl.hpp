#pragma once
#include "Amazon/Runtime/zzzz__Metric_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Metric::Metric(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Metric::Metric() {}
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AWSErrorCode{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AWSRequestID{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AmzId2{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::BytesProcessed{ static_cast<int32_t>(0x3) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::Exception{ static_cast<int32_t>(0x4) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::RedirectLocation{ static_cast<int32_t>(0x5) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ResponseProcessingTime{ static_cast<int32_t>(0x6) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ResponseUnmarshallTime{ static_cast<int32_t>(0x7) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ResponseReadTime{ static_cast<int32_t>(0x8) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::StatusCode{ static_cast<int32_t>(0x9) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AttemptCount{ static_cast<int32_t>(0xa) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::CredentialsRequestTime{ static_cast<int32_t>(0xb) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::HttpRequestTime{ static_cast<int32_t>(0xc) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ProxyHost{ static_cast<int32_t>(0xd) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ProxyPort{ static_cast<int32_t>(0xe) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::RequestSigningTime{ static_cast<int32_t>(0xf) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::RetryPauseTime{ static_cast<int32_t>(0x10) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::StringToSign{ static_cast<int32_t>(0x11) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::CanonicalRequest{ static_cast<int32_t>(0x12) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::CSMAttemptLatency{ static_cast<int32_t>(0x13) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AsyncCall{ static_cast<int32_t>(0x14) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ClientExecuteTime{ static_cast<int32_t>(0x15) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::MethodName{ static_cast<int32_t>(0x16) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ServiceEndpoint{ static_cast<int32_t>(0x17) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::ServiceName{ static_cast<int32_t>(0x18) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::RequestSize{ static_cast<int32_t>(0x19) };
constexpr ::Amazon::Runtime::Metric Amazon::Runtime::Metric::AmzCfId{ static_cast<int32_t>(0x1a) };
