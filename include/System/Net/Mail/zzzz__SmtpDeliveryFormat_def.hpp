#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmtpDeliveryFormat)
// Forward declare root types
namespace System::Net::Mail {
struct SmtpDeliveryFormat;
}
// Write type traits
MARK_VAL_T(::System::Net::Mail::SmtpDeliveryFormat);
// Type: System.Net.Mail::SmtpDeliveryFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: true
// CS Name: ::System.Net.Mail::SmtpDeliveryFormat
struct CORDL_TYPE SmtpDeliveryFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SmtpDeliveryFormat_Unwrapped
  enum struct __SmtpDeliveryFormat_Unwrapped : int32_t {
    __E_SevenBit = static_cast<int32_t>(0x0),
    __E_International = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SmtpDeliveryFormat_Unwrapped() const noexcept {
    return static_cast<__SmtpDeliveryFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SmtpDeliveryFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SmtpDeliveryFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field International value: static_cast<int32_t>(0x1)
  static ::System::Net::Mail::SmtpDeliveryFormat const International;

  /// @brief Field SevenBit value: static_cast<int32_t>(0x0)
  static ::System::Net::Mail::SmtpDeliveryFormat const SevenBit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::SmtpDeliveryFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Mail::SmtpDeliveryFormat, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Mail
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::SmtpDeliveryFormat, "System.Net.Mail", "SmtpDeliveryFormat");
