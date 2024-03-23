#pragma once
#include "ThirdParty/Json/LitJson/zzzz__ParserToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ThirdParty::Json::LitJson::ParserToken::ParserToken(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::ParserToken::ParserToken() {}
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::None{ static_cast<int32_t>(0x10000) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Number{ static_cast<int32_t>(0x10001) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::True{ static_cast<int32_t>(0x10002) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::False{ static_cast<int32_t>(0x10003) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Null{ static_cast<int32_t>(0x10004) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::CharSeq{ static_cast<int32_t>(0x10005) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Char{ static_cast<int32_t>(0x10006) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Text{ static_cast<int32_t>(0x10007) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Object{ static_cast<int32_t>(0x10008) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::ObjectPrime{ static_cast<int32_t>(0x10009) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Pair{ static_cast<int32_t>(0x1000a) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::PairRest{ static_cast<int32_t>(0x1000b) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Array{ static_cast<int32_t>(0x1000c) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::ArrayPrime{ static_cast<int32_t>(0x1000d) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Value{ static_cast<int32_t>(0x1000e) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::ValueRest{ static_cast<int32_t>(0x1000f) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::String{ static_cast<int32_t>(0x10010) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::End{ static_cast<int32_t>(0x10011) };
constexpr ::ThirdParty::Json::LitJson::ParserToken ThirdParty::Json::LitJson::ParserToken::Epsilon{ static_cast<int32_t>(0x10012) };
