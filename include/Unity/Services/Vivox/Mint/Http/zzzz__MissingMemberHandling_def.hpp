#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissingMemberHandling)
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
struct MissingMemberHandling;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::MissingMemberHandling);
// Type: Unity.Services.Vivox.Mint.Http::MissingMemberHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::Unity.Services.Vivox.Mint.Http::MissingMemberHandling
struct CORDL_TYPE MissingMemberHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MissingMemberHandling_Unwrapped
  enum struct __MissingMemberHandling_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Ignore = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MissingMemberHandling_Unwrapped() const noexcept {
    return static_cast<__MissingMemberHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMemberHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MissingMemberHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling const Error;

  /// @brief Field Ignore value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::Mint::Http::MissingMemberHandling const Ignore;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::MissingMemberHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::MissingMemberHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::MissingMemberHandling, "Unity.Services.Vivox.Mint.Http", "MissingMemberHandling");
