#pragma once
#include "Unity/Services/Vivox/zzzz__AudioFadeModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::AudioFadeModel::AudioFadeModel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::AudioFadeModel::AudioFadeModel() {}
constexpr ::Unity::Services::Vivox::AudioFadeModel Unity::Services::Vivox::AudioFadeModel::InverseByDistance{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::AudioFadeModel Unity::Services::Vivox::AudioFadeModel::LinearByDistance{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::AudioFadeModel Unity::Services::Vivox::AudioFadeModel::ExponentialByDistance{ static_cast<int32_t>(0x3) };
