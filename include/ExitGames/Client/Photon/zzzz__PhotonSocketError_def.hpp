#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonSocketError)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::PhotonSocketError);
// Type: ExitGames.Client.Photon::PhotonSocketError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::PhotonSocketError
struct CORDL_TYPE PhotonSocketError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhotonSocketError_Unwrapped
  enum struct __PhotonSocketError_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Skipped = static_cast<int32_t>(0x1),
    __E_NoData = static_cast<int32_t>(0x2),
    __E_Exception = static_cast<int32_t>(0x3),
    __E_Busy = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhotonSocketError_Unwrapped() const noexcept {
    return static_cast<__PhotonSocketError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonSocketError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhotonSocketError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Busy value: static_cast<int32_t>(0x4)
  static ::ExitGames::Client::Photon::PhotonSocketError const Busy;

  /// @brief Field Exception value: static_cast<int32_t>(0x3)
  static ::ExitGames::Client::Photon::PhotonSocketError const Exception;

  /// @brief Field NoData value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::PhotonSocketError const NoData;

  /// @brief Field Skipped value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::PhotonSocketError const Skipped;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::PhotonSocketError const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::PhotonSocketError, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonSocketError, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PhotonSocketError, "ExitGames.Client.Photon", "PhotonSocketError");
