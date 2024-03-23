#pragma once
#include "System/Net/Mail/zzzz__SmtpDeliveryMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Mail::SmtpDeliveryMethod::SmtpDeliveryMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Mail::SmtpDeliveryMethod::SmtpDeliveryMethod() {}
constexpr ::System::Net::Mail::SmtpDeliveryMethod System::Net::Mail::SmtpDeliveryMethod::Network{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Mail::SmtpDeliveryMethod System::Net::Mail::SmtpDeliveryMethod::SpecifiedPickupDirectory{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Mail::SmtpDeliveryMethod System::Net::Mail::SmtpDeliveryMethod::PickupDirectoryFromIis{ static_cast<int32_t>(0x2) };
