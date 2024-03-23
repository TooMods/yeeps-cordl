#pragma once
#include "Photon/Pun/zzzz__OwnershipOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::OwnershipOption::OwnershipOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::OwnershipOption::OwnershipOption() {}
constexpr ::Photon::Pun::OwnershipOption Photon::Pun::OwnershipOption::Fixed{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::OwnershipOption Photon::Pun::OwnershipOption::Takeover{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::OwnershipOption Photon::Pun::OwnershipOption::Request{ static_cast<int32_t>(0x2) };
