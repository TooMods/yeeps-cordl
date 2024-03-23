#pragma once
#include "System/Net/Cache/zzzz__HttpRequestCacheLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Cache::HttpRequestCacheLevel::HttpRequestCacheLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Cache::HttpRequestCacheLevel::HttpRequestCacheLevel() {}
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::Default{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::BypassCache{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::CacheOnly{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::CacheIfAvailable{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::Revalidate{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::Reload{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::NoCacheNoStore{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::CacheOrNextCacheOnly{ static_cast<int32_t>(0x7) };
constexpr ::System::Net::Cache::HttpRequestCacheLevel System::Net::Cache::HttpRequestCacheLevel::Refresh{ static_cast<int32_t>(0x8) };
