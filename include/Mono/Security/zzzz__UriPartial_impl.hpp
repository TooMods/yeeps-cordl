#pragma once
#include "Mono/Security/zzzz__UriPartial_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::UriPartial::UriPartial(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::UriPartial::UriPartial() {}
constexpr ::Mono::Security::UriPartial Mono::Security::UriPartial::Scheme{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Security::UriPartial Mono::Security::UriPartial::Authority{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Security::UriPartial Mono::Security::UriPartial::Path{ static_cast<int32_t>(0x2) };
