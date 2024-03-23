#pragma once
#include "ThirdParty/Json/LitJson/zzzz__Condition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ThirdParty::Json::LitJson::Condition::Condition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::Condition::Condition() {}
constexpr ::ThirdParty::Json::LitJson::Condition ThirdParty::Json::LitJson::Condition::InArray{ static_cast<int32_t>(0x0) };
constexpr ::ThirdParty::Json::LitJson::Condition ThirdParty::Json::LitJson::Condition::InObject{ static_cast<int32_t>(0x1) };
constexpr ::ThirdParty::Json::LitJson::Condition ThirdParty::Json::LitJson::Condition::NotAProperty{ static_cast<int32_t>(0x2) };
constexpr ::ThirdParty::Json::LitJson::Condition ThirdParty::Json::LitJson::Condition::Property{ static_cast<int32_t>(0x3) };
constexpr ::ThirdParty::Json::LitJson::Condition ThirdParty::Json::LitJson::Condition::Value{ static_cast<int32_t>(0x4) };
