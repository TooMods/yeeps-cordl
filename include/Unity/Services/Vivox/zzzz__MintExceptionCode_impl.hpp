#pragma once
#include "Unity/Services/Vivox/zzzz__MintExceptionCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::MintExceptionCode::MintExceptionCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::MintExceptionCode::MintExceptionCode() {}
constexpr ::Unity::Services::Vivox::MintExceptionCode Unity::Services::Vivox::MintExceptionCode::Unauthorized{ static_cast<int32_t>(0x193) };
constexpr ::Unity::Services::Vivox::MintExceptionCode Unity::Services::Vivox::MintExceptionCode::FailedToDecodeToken{ static_cast<int32_t>(0x196) };
