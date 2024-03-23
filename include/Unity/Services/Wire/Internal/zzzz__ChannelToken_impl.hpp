#pragma once
#include "Unity/Services/Wire/Internal/zzzz__ChannelToken_def.hpp"
// Ctor Parameters [CppParam { name: "ChannelName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }]
constexpr ::Unity::Services::Wire::Internal::ChannelToken::ChannelToken(::StringW ChannelName, ::StringW Token) noexcept {
  this->ChannelName = ChannelName;
  this->Token = Token;
}
// Ctor Parameters []
constexpr ::Unity::Services::Wire::Internal::ChannelToken::ChannelToken() {}
