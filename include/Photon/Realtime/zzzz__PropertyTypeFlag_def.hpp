#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyTypeFlag)
// Forward declare root types
namespace Photon::Realtime {
struct PropertyTypeFlag;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::PropertyTypeFlag);
// Type: Photon.Realtime::PropertyTypeFlag
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::PropertyTypeFlag
struct CORDL_TYPE PropertyTypeFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __PropertyTypeFlag_Unwrapped
  enum struct __PropertyTypeFlag_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Game = static_cast<uint8_t>(0x1u),
    __E_Actor = static_cast<uint8_t>(0x2u),
    __E_GameAndActor = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropertyTypeFlag_Unwrapped() const noexcept {
    return static_cast<__PropertyTypeFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyTypeFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr PropertyTypeFlag(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Actor value: static_cast<uint8_t>(0x2u)
  static ::Photon::Realtime::PropertyTypeFlag const Actor;

  /// @brief Field Game value: static_cast<uint8_t>(0x1u)
  static ::Photon::Realtime::PropertyTypeFlag const Game;

  /// @brief Field GameAndActor value: static_cast<uint8_t>(0x3u)
  static ::Photon::Realtime::PropertyTypeFlag const GameAndActor;

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::Photon::Realtime::PropertyTypeFlag const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::PropertyTypeFlag, 0x1>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::PropertyTypeFlag, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::PropertyTypeFlag, "Photon.Realtime", "PropertyTypeFlag");
