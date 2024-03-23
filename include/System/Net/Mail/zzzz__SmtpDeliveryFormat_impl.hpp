#pragma once
#include "System/Net/Mail/zzzz__SmtpDeliveryFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Mail::SmtpDeliveryFormat::SmtpDeliveryFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Mail::SmtpDeliveryFormat::SmtpDeliveryFormat() {}
constexpr ::System::Net::Mail::SmtpDeliveryFormat System::Net::Mail::SmtpDeliveryFormat::SevenBit{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Mail::SmtpDeliveryFormat System::Net::Mail::SmtpDeliveryFormat::International{ static_cast<int32_t>(0x1) };
