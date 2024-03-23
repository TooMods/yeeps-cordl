#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAuthenticationType)
// Forward declare root types
namespace Photon::Realtime {
struct CustomAuthenticationType;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::CustomAuthenticationType);
// Type: Photon.Realtime::CustomAuthenticationType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::CustomAuthenticationType
struct CORDL_TYPE CustomAuthenticationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __CustomAuthenticationType_Unwrapped
  enum struct __CustomAuthenticationType_Unwrapped : uint8_t {
    __E_Custom = static_cast<uint8_t>(0x0u),
    __E_Steam = static_cast<uint8_t>(0x1u),
    __E_Facebook = static_cast<uint8_t>(0x2u),
    __E_Oculus = static_cast<uint8_t>(0x3u),
    __E_PlayStation4 = static_cast<uint8_t>(0x4u),
    __E_PlayStation = static_cast<uint8_t>(0x4u),
    __E_Xbox = static_cast<uint8_t>(0x5u),
    __E_Viveport = static_cast<uint8_t>(0xau),
    __E_NintendoSwitch = static_cast<uint8_t>(0xbu),
    __E_PlayStation5 = static_cast<uint8_t>(0xcu),
    __E_Playstation5 = static_cast<uint8_t>(0xcu),
    __E_Epic = static_cast<uint8_t>(0xdu),
    __E_FacebookGaming = static_cast<uint8_t>(0xfu),
    __E_None = static_cast<uint8_t>(0xffu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CustomAuthenticationType_Unwrapped() const noexcept {
    return static_cast<__CustomAuthenticationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAuthenticationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CustomAuthenticationType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Custom value: static_cast<uint8_t>(0x0u)
  static ::Photon::Realtime::CustomAuthenticationType const Custom;

  /// @brief Field Epic value: static_cast<uint8_t>(0xdu)
  static ::Photon::Realtime::CustomAuthenticationType const Epic;

  /// @brief Field Facebook value: static_cast<uint8_t>(0x2u)
  static ::Photon::Realtime::CustomAuthenticationType const Facebook;

  /// @brief Field FacebookGaming value: static_cast<uint8_t>(0xfu)
  static ::Photon::Realtime::CustomAuthenticationType const FacebookGaming;

  /// @brief Field NintendoSwitch value: static_cast<uint8_t>(0xbu)
  static ::Photon::Realtime::CustomAuthenticationType const NintendoSwitch;

  /// @brief Field None value: static_cast<uint8_t>(0xffu)
  static ::Photon::Realtime::CustomAuthenticationType const None;

  /// @brief Field Oculus value: static_cast<uint8_t>(0x3u)
  static ::Photon::Realtime::CustomAuthenticationType const Oculus;

  /// @brief Field PlayStation value: static_cast<uint8_t>(0x4u)
  static ::Photon::Realtime::CustomAuthenticationType const PlayStation;

  /// @brief Field PlayStation4 value: static_cast<uint8_t>(0x4u)
  static ::Photon::Realtime::CustomAuthenticationType const PlayStation4;

  /// @brief Field PlayStation5 value: static_cast<uint8_t>(0xcu)
  static ::Photon::Realtime::CustomAuthenticationType const PlayStation5;

  /// @brief Field Playstation5 value: static_cast<uint8_t>(0xcu)
  static ::Photon::Realtime::CustomAuthenticationType const Playstation5;

  /// @brief Field Steam value: static_cast<uint8_t>(0x1u)
  static ::Photon::Realtime::CustomAuthenticationType const Steam;

  /// @brief Field Viveport value: static_cast<uint8_t>(0xau)
  static ::Photon::Realtime::CustomAuthenticationType const Viveport;

  /// @brief Field Xbox value: static_cast<uint8_t>(0x5u)
  static ::Photon::Realtime::CustomAuthenticationType const Xbox;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::CustomAuthenticationType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::CustomAuthenticationType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::CustomAuthenticationType, "Photon.Realtime", "CustomAuthenticationType");
