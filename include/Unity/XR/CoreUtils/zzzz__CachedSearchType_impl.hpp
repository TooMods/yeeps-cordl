#pragma once
#include "Unity/XR/CoreUtils/zzzz__CachedSearchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::CoreUtils::CachedSearchType::CachedSearchType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::CachedSearchType::CachedSearchType() {}
constexpr ::Unity::XR::CoreUtils::CachedSearchType Unity::XR::CoreUtils::CachedSearchType::Children{ static_cast<int32_t>(0x1) };
constexpr ::Unity::XR::CoreUtils::CachedSearchType Unity::XR::CoreUtils::CachedSearchType::Self{ static_cast<int32_t>(0x2) };
constexpr ::Unity::XR::CoreUtils::CachedSearchType Unity::XR::CoreUtils::CachedSearchType::Parents{ static_cast<int32_t>(0x4) };
