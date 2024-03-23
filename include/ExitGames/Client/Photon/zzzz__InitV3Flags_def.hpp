#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitV3Flags)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct InitV3Flags;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::InitV3Flags);
// Type: ExitGames.Client.Photon::InitV3Flags
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::InitV3Flags
struct CORDL_TYPE InitV3Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct __InitV3Flags_Unwrapped
  enum struct __InitV3Flags_Unwrapped : int16_t {
    __E_NoFlags = static_cast<int16_t>(0x0),
    __E_EncryptionFlag = static_cast<int16_t>(0x1),
    __E_IPv6Flag = static_cast<int16_t>(0x2),
    __E_ReleaseSdkFlag = static_cast<int16_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InitV3Flags_Unwrapped() const noexcept {
    return static_cast<__InitV3Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int16_t() const noexcept {
    return static_cast<int16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitV3Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr InitV3Flags(int16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  /// @brief Field EncryptionFlag value: static_cast<int16_t>(0x1)
  static ::ExitGames::Client::Photon::InitV3Flags const EncryptionFlag;

  /// @brief Field IPv6Flag value: static_cast<int16_t>(0x2)
  static ::ExitGames::Client::Photon::InitV3Flags const IPv6Flag;

  /// @brief Field NoFlags value: static_cast<int16_t>(0x0)
  static ::ExitGames::Client::Photon::InitV3Flags const NoFlags;

  /// @brief Field ReleaseSdkFlag value: static_cast<int16_t>(0x4)
  static ::ExitGames::Client::Photon::InitV3Flags const ReleaseSdkFlag;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::InitV3Flags, 0x2>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::InitV3Flags, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::InitV3Flags, "ExitGames.Client.Photon", "InitV3Flags");
