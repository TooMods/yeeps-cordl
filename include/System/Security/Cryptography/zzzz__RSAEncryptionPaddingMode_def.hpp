#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSAEncryptionPaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSAEncryptionPaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSAEncryptionPaddingMode);
// Type: System.Security.Cryptography::RSAEncryptionPaddingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::RSAEncryptionPaddingMode
struct CORDL_TYPE RSAEncryptionPaddingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RSAEncryptionPaddingMode_Unwrapped
  enum struct __RSAEncryptionPaddingMode_Unwrapped : int32_t {
    __E_Pkcs1 = static_cast<int32_t>(0x0),
    __E_Oaep = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RSAEncryptionPaddingMode_Unwrapped() const noexcept {
    return static_cast<__RSAEncryptionPaddingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAEncryptionPaddingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RSAEncryptionPaddingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Oaep value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::RSAEncryptionPaddingMode const Oaep;

  /// @brief Field Pkcs1 value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::RSAEncryptionPaddingMode const Pkcs1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAEncryptionPaddingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPaddingMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAEncryptionPaddingMode, "System.Security.Cryptography", "RSAEncryptionPaddingMode");
