#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationProtocol)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::SerializationProtocol);
// Type: ExitGames.Client.Photon::SerializationProtocol
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::SerializationProtocol
struct CORDL_TYPE SerializationProtocol {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SerializationProtocol_Unwrapped
  enum struct __SerializationProtocol_Unwrapped : int32_t {
    __E_GpBinaryV16 = static_cast<int32_t>(0x0),
    __E_GpBinaryV18 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SerializationProtocol_Unwrapped() const noexcept {
    return static_cast<__SerializationProtocol_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationProtocol();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SerializationProtocol(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field GpBinaryV16 value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::SerializationProtocol const GpBinaryV16;

  /// @brief Field GpBinaryV18 value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::SerializationProtocol const GpBinaryV18;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SerializationProtocol, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SerializationProtocol, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SerializationProtocol, "ExitGames.Client.Photon", "SerializationProtocol");
