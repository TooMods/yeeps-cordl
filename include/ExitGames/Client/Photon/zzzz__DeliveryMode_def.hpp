#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeliveryMode)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct DeliveryMode;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::DeliveryMode);
// Type: ExitGames.Client.Photon::DeliveryMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::DeliveryMode
struct CORDL_TYPE DeliveryMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DeliveryMode_Unwrapped
  enum struct __DeliveryMode_Unwrapped : int32_t {
    __E_Unreliable = static_cast<int32_t>(0x0),
    __E_Reliable = static_cast<int32_t>(0x1),
    __E_UnreliableUnsequenced = static_cast<int32_t>(0x2),
    __E_ReliableUnsequenced = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DeliveryMode_Unwrapped() const noexcept {
    return static_cast<__DeliveryMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeliveryMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DeliveryMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Reliable value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::DeliveryMode const Reliable;

  /// @brief Field ReliableUnsequenced value: static_cast<int32_t>(0x3)
  static ::ExitGames::Client::Photon::DeliveryMode const ReliableUnsequenced;

  /// @brief Field Unreliable value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::DeliveryMode const Unreliable;

  /// @brief Field UnreliableUnsequenced value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::DeliveryMode const UnreliableUnsequenced;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::DeliveryMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::DeliveryMode, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DeliveryMode, "ExitGames.Client.Photon", "DeliveryMode");
