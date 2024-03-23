#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialProfileType)
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType);
// Type: Amazon.Runtime.CredentialManagement.Internal::CredentialProfileType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: true
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::CredentialProfileType
struct CORDL_TYPE CredentialProfileType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CredentialProfileType_Unwrapped
  enum struct __CredentialProfileType_Unwrapped : int32_t {
    __E_AssumeRole = static_cast<int32_t>(0x0),
    __E_AssumeRoleCredentialSource = static_cast<int32_t>(0x1),
    __E_AssumeRoleExternal = static_cast<int32_t>(0x2),
    __E_AssumeRoleExternalMFA = static_cast<int32_t>(0x3),
    __E_AssumeRoleMFA = static_cast<int32_t>(0x4),
    __E_Basic = static_cast<int32_t>(0x5),
    __E_SAMLRole = static_cast<int32_t>(0x6),
    __E_SAMLRoleUserIdentity = static_cast<int32_t>(0x7),
    __E_Session = static_cast<int32_t>(0x8),
    __E_CredentialProcess = static_cast<int32_t>(0x9),
    __E_AssumeRoleWithWebIdentity = static_cast<int32_t>(0xa),
    __E_AssumeRoleWithWebIdentitySessionName = static_cast<int32_t>(0xb),
    __E_AssumeRoleSessionName = static_cast<int32_t>(0xc),
    __E_AssumeRoleCredentialSourceSessionName = static_cast<int32_t>(0xd),
    __E_AssumeRoleExternalSessionName = static_cast<int32_t>(0xe),
    __E_AssumeRoleExternalMFASessionName = static_cast<int32_t>(0xf),
    __E_AssumeRoleMFASessionName = static_cast<int32_t>(0x10),
    __E_SSO = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CredentialProfileType_Unwrapped() const noexcept {
    return static_cast<__CredentialProfileType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfileType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CredentialProfileType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AssumeRole value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRole;

  /// @brief Field AssumeRoleCredentialSource value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleCredentialSource;

  /// @brief Field AssumeRoleCredentialSourceSessionName value: static_cast<int32_t>(0xd)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleCredentialSourceSessionName;

  /// @brief Field AssumeRoleExternal value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleExternal;

  /// @brief Field AssumeRoleExternalMFA value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleExternalMFA;

  /// @brief Field AssumeRoleExternalMFASessionName value: static_cast<int32_t>(0xf)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleExternalMFASessionName;

  /// @brief Field AssumeRoleExternalSessionName value: static_cast<int32_t>(0xe)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleExternalSessionName;

  /// @brief Field AssumeRoleMFA value: static_cast<int32_t>(0x4)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleMFA;

  /// @brief Field AssumeRoleMFASessionName value: static_cast<int32_t>(0x10)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleMFASessionName;

  /// @brief Field AssumeRoleSessionName value: static_cast<int32_t>(0xc)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleSessionName;

  /// @brief Field AssumeRoleWithWebIdentity value: static_cast<int32_t>(0xa)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleWithWebIdentity;

  /// @brief Field AssumeRoleWithWebIdentitySessionName value: static_cast<int32_t>(0xb)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const AssumeRoleWithWebIdentitySessionName;

  /// @brief Field Basic value: static_cast<int32_t>(0x5)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const Basic;

  /// @brief Field CredentialProcess value: static_cast<int32_t>(0x9)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const CredentialProcess;

  /// @brief Field SAMLRole value: static_cast<int32_t>(0x6)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const SAMLRole;

  /// @brief Field SAMLRoleUserIdentity value: static_cast<int32_t>(0x7)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const SAMLRoleUserIdentity;

  /// @brief Field SSO value: static_cast<int32_t>(0x11)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const SSO;

  /// @brief Field Session value: static_cast<int32_t>(0x8)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType const Session;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType, "Amazon.Runtime.CredentialManagement.Internal", "CredentialProfileType");
