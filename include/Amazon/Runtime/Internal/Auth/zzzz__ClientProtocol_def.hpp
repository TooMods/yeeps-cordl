#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientProtocol)
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
struct ClientProtocol;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Auth::ClientProtocol);
// Type: Amazon.Runtime.Internal.Auth::ClientProtocol
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: true
// CS Name: ::Amazon.Runtime.Internal.Auth::ClientProtocol
struct CORDL_TYPE ClientProtocol {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClientProtocol_Unwrapped
  enum struct __ClientProtocol_Unwrapped : int32_t {
    __E_QueryStringProtocol = static_cast<int32_t>(0x0),
    __E_RestProtocol = static_cast<int32_t>(0x1),
    __E_Unknown = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClientProtocol_Unwrapped() const noexcept {
    return static_cast<__ClientProtocol_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientProtocol();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClientProtocol(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field QueryStringProtocol value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::Auth::ClientProtocol const QueryStringProtocol;

  /// @brief Field RestProtocol value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Auth::ClientProtocol const RestProtocol;

  /// @brief Field Unknown value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Internal::Auth::ClientProtocol const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::ClientProtocol, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::ClientProtocol, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::ClientProtocol, "Amazon.Runtime.Internal.Auth", "ClientProtocol");
