#pragma once
#include "ThirdParty/Json/LitJson/zzzz__JsonToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ThirdParty::Json::LitJson::JsonToken::JsonToken(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::JsonToken::JsonToken() {}
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::None{ static_cast<int32_t>(0x0) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::ObjectStart{ static_cast<int32_t>(0x1) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::PropertyName{ static_cast<int32_t>(0x2) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::ObjectEnd{ static_cast<int32_t>(0x3) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::ArrayStart{ static_cast<int32_t>(0x4) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::ArrayEnd{ static_cast<int32_t>(0x5) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::Int{ static_cast<int32_t>(0x6) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::UInt{ static_cast<int32_t>(0x7) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::Long{ static_cast<int32_t>(0x8) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::ULong{ static_cast<int32_t>(0x9) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::Double{ static_cast<int32_t>(0xa) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::String{ static_cast<int32_t>(0xb) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::Boolean{ static_cast<int32_t>(0xc) };
constexpr ::ThirdParty::Json::LitJson::JsonToken ThirdParty::Json::LitJson::JsonToken::Null{ static_cast<int32_t>(0xd) };
