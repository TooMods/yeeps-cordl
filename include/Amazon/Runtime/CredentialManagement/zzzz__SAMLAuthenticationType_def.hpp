#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SAMLAuthenticationType)
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
struct SAMLAuthenticationType;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType);
// Type: Amazon.Runtime.CredentialManagement::SAMLAuthenticationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: true
// CS Name: ::Amazon.Runtime.CredentialManagement::SAMLAuthenticationType
struct CORDL_TYPE SAMLAuthenticationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SAMLAuthenticationType_Unwrapped
  enum struct __SAMLAuthenticationType_Unwrapped : int32_t {
    __E_NTLM = static_cast<int32_t>(0x0),
    __E_Digest = static_cast<int32_t>(0x1),
    __E_Kerberos = static_cast<int32_t>(0x2),
    __E_Negotiate = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SAMLAuthenticationType_Unwrapped() const noexcept {
    return static_cast<__SAMLAuthenticationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLAuthenticationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SAMLAuthenticationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Digest value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const Digest;

  /// @brief Field Kerberos value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const Kerberos;

  /// @brief Field NTLM value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const NTLM;

  /// @brief Field Negotiate value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const Negotiate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType, "Amazon.Runtime.CredentialManagement", "SAMLAuthenticationType");
