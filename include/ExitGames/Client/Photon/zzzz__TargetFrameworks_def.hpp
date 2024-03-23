#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetFrameworks)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct TargetFrameworks;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::TargetFrameworks);
// Type: ExitGames.Client.Photon::TargetFrameworks
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::TargetFrameworks
struct CORDL_TYPE TargetFrameworks {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TargetFrameworks_Unwrapped
  enum struct __TargetFrameworks_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Net35 = static_cast<int32_t>(0x1),
    __E_NetStandard20 = static_cast<int32_t>(0x2),
    __E_Metro = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TargetFrameworks_Unwrapped() const noexcept {
    return static_cast<__TargetFrameworks_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetFrameworks();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TargetFrameworks(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Metro value: static_cast<int32_t>(0x3)
  static ::ExitGames::Client::Photon::TargetFrameworks const Metro;

  /// @brief Field Net35 value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::TargetFrameworks const Net35;

  /// @brief Field NetStandard20 value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::TargetFrameworks const NetStandard20;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::TargetFrameworks const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::TargetFrameworks, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TargetFrameworks, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TargetFrameworks, "ExitGames.Client.Photon", "TargetFrameworks");
