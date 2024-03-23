#pragma once
#include "GlobalNamespace/zzzz__VoteType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VoteType::VoteType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoteType::VoteType() {}
constexpr ::GlobalNamespace::VoteType GlobalNamespace::VoteType::unspecified{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::VoteType GlobalNamespace::VoteType::kick{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::VoteType GlobalNamespace::VoteType::switchModes{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::VoteType GlobalNamespace::VoteType::transformMap{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::VoteType GlobalNamespace::VoteType::loadMap{ static_cast<int32_t>(0x4) };
