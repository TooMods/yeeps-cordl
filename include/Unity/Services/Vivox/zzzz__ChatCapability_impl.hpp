#pragma once
#include "Unity/Services/Vivox/zzzz__ChatCapability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ChatCapability::ChatCapability(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ChatCapability::ChatCapability() {}
constexpr ::Unity::Services::Vivox::ChatCapability Unity::Services::Vivox::ChatCapability::TextOnly{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ChatCapability Unity::Services::Vivox::ChatCapability::AudioOnly{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::ChatCapability Unity::Services::Vivox::ChatCapability::TextAndAudio{ static_cast<int32_t>(0x2) };
