#pragma once
#include "ThirdParty/Json/LitJson/zzzz__JsonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ThirdParty::Json::LitJson::JsonType::JsonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::JsonType::JsonType() {}
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::None{ static_cast<int32_t>(0x0) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Object{ static_cast<int32_t>(0x1) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Array{ static_cast<int32_t>(0x2) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::String{ static_cast<int32_t>(0x3) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Int{ static_cast<int32_t>(0x4) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::UInt{ static_cast<int32_t>(0x5) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Long{ static_cast<int32_t>(0x6) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::ULong{ static_cast<int32_t>(0x7) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Double{ static_cast<int32_t>(0x8) };
constexpr ::ThirdParty::Json::LitJson::JsonType ThirdParty::Json::LitJson::JsonType::Boolean{ static_cast<int32_t>(0x9) };
