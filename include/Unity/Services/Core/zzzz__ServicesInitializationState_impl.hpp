#pragma once
#include "Unity/Services/Core/zzzz__ServicesInitializationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::ServicesInitializationState::ServicesInitializationState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::ServicesInitializationState::ServicesInitializationState() {}
constexpr ::Unity::Services::Core::ServicesInitializationState Unity::Services::Core::ServicesInitializationState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Core::ServicesInitializationState Unity::Services::Core::ServicesInitializationState::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Core::ServicesInitializationState Unity::Services::Core::ServicesInitializationState::Initialized{ static_cast<int32_t>(0x2) };
