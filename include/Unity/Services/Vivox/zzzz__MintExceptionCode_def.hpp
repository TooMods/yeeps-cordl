#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MintExceptionCode)
// Forward declare root types
namespace Unity::Services::Vivox {
struct MintExceptionCode;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::MintExceptionCode);
// Type: Unity.Services.Vivox::MintExceptionCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::MintExceptionCode
struct CORDL_TYPE MintExceptionCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MintExceptionCode_Unwrapped
  enum struct __MintExceptionCode_Unwrapped : int32_t {
    __E_Unauthorized = static_cast<int32_t>(0x193),
    __E_FailedToDecodeToken = static_cast<int32_t>(0x196),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MintExceptionCode_Unwrapped() const noexcept {
    return static_cast<__MintExceptionCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MintExceptionCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MintExceptionCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FailedToDecodeToken value: static_cast<int32_t>(0x196)
  static ::Unity::Services::Vivox::MintExceptionCode const FailedToDecodeToken;

  /// @brief Field Unauthorized value: static_cast<int32_t>(0x193)
  static ::Unity::Services::Vivox::MintExceptionCode const Unauthorized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::MintExceptionCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::MintExceptionCode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::MintExceptionCode, "Unity.Services.Vivox", "MintExceptionCode");
