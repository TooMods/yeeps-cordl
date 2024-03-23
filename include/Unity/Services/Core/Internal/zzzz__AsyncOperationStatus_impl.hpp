#pragma once
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus::AsyncOperationStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus::AsyncOperationStatus() {}
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationStatus::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationStatus::InProgress{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationStatus::Succeeded{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationStatus::Failed{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationStatus::Cancelled{ static_cast<int32_t>(0x4) };
