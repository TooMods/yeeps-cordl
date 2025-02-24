#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CspAlgorithmType)
// Forward declare root types
namespace System::Security::Cryptography {
struct CspAlgorithmType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CspAlgorithmType);
// Type: System.Security.Cryptography::CspAlgorithmType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::CspAlgorithmType
struct CORDL_TYPE CspAlgorithmType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CspAlgorithmType_Unwrapped
  enum struct __CspAlgorithmType_Unwrapped : int32_t {
    __E_Rsa = static_cast<int32_t>(0x0),
    __E_Dss = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CspAlgorithmType_Unwrapped() const noexcept {
    return static_cast<__CspAlgorithmType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CspAlgorithmType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CspAlgorithmType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Dss value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::CspAlgorithmType const Dss;

  /// @brief Field Rsa value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::CspAlgorithmType const Rsa;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspAlgorithmType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspAlgorithmType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspAlgorithmType, "System.Security.Cryptography", "CspAlgorithmType");
