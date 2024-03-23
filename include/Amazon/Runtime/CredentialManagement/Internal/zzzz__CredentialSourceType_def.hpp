#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialSourceType)
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialSourceType;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType);
// Type: Amazon.Runtime.CredentialManagement.Internal::CredentialSourceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: true
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::CredentialSourceType
struct CORDL_TYPE CredentialSourceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CredentialSourceType_Unwrapped
  enum struct __CredentialSourceType_Unwrapped : int32_t {
    __E_Ec2InstanceMetadata = static_cast<int32_t>(0x0),
    __E_Environment = static_cast<int32_t>(0x1),
    __E_EcsContainer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CredentialSourceType_Unwrapped() const noexcept {
    return static_cast<__CredentialSourceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialSourceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CredentialSourceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ec2InstanceMetadata value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType const Ec2InstanceMetadata;

  /// @brief Field EcsContainer value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType const EcsContainer;

  /// @brief Field Environment value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType const Environment;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType, "Amazon.Runtime.CredentialManagement.Internal", "CredentialSourceType");
