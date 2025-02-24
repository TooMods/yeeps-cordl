#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PbeEncryptionAlgorithm)
// Forward declare root types
namespace System::Security::Cryptography {
struct PbeEncryptionAlgorithm;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::PbeEncryptionAlgorithm);
// Type: System.Security.Cryptography::PbeEncryptionAlgorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::PbeEncryptionAlgorithm
struct CORDL_TYPE PbeEncryptionAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PbeEncryptionAlgorithm_Unwrapped
  enum struct __PbeEncryptionAlgorithm_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Aes128Cbc = static_cast<int32_t>(0x1),
    __E_Aes192Cbc = static_cast<int32_t>(0x2),
    __E_Aes256Cbc = static_cast<int32_t>(0x3),
    __E_TripleDes3KeyPkcs12 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PbeEncryptionAlgorithm_Unwrapped() const noexcept {
    return static_cast<__PbeEncryptionAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeEncryptionAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PbeEncryptionAlgorithm(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aes128Cbc value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::PbeEncryptionAlgorithm const Aes128Cbc;

  /// @brief Field Aes192Cbc value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::PbeEncryptionAlgorithm const Aes192Cbc;

  /// @brief Field Aes256Cbc value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::PbeEncryptionAlgorithm const Aes256Cbc;

  /// @brief Field TripleDes3KeyPkcs12 value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::PbeEncryptionAlgorithm const TripleDes3KeyPkcs12;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::PbeEncryptionAlgorithm const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::PbeEncryptionAlgorithm, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PbeEncryptionAlgorithm, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PbeEncryptionAlgorithm, "System.Security.Cryptography", "PbeEncryptionAlgorithm");
