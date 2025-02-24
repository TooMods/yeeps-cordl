#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pooling)
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
struct Pooling;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::StructWrapping::Pooling);
// Type: ExitGames.Client.Photon.StructWrapping::Pooling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon.StructWrapping::Pooling
struct CORDL_TYPE Pooling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Pooling_Unwrapped
  enum struct __Pooling_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connected = static_cast<int32_t>(0x1),
    __E_ReleaseOnUnwrap = static_cast<int32_t>(0x2),
    __E_Readonly = static_cast<int32_t>(0x4),
    __E_CheckedOut = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Pooling_Unwrapped() const noexcept {
    return static_cast<__Pooling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pooling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Pooling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CheckedOut value: static_cast<int32_t>(0x8)
  static ::ExitGames::Client::Photon::StructWrapping::Pooling const CheckedOut;

  /// @brief Field Connected value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::StructWrapping::Pooling const Connected;

  /// @brief Field Disconnected value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::StructWrapping::Pooling const Disconnected;

  /// @brief Field Readonly value: static_cast<int32_t>(0x4)
  static ::ExitGames::Client::Photon::StructWrapping::Pooling const Readonly;

  /// @brief Field ReleaseOnUnwrap value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::StructWrapping::Pooling const ReleaseOnUnwrap;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::Pooling, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::Pooling, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::Pooling, "ExitGames.Client.Photon.StructWrapping", "Pooling");
