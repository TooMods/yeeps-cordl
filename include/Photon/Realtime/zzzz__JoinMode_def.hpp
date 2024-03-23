#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinMode)
// Forward declare root types
namespace Photon::Realtime {
struct JoinMode;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::JoinMode);
// Type: Photon.Realtime::JoinMode
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::JoinMode
struct CORDL_TYPE JoinMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __JoinMode_Unwrapped
  enum struct __JoinMode_Unwrapped : uint8_t {
    __E_Default = static_cast<uint8_t>(0x0u),
    __E_CreateIfNotExists = static_cast<uint8_t>(0x1u),
    __E_JoinOrRejoin = static_cast<uint8_t>(0x2u),
    __E_RejoinOnly = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JoinMode_Unwrapped() const noexcept {
    return static_cast<__JoinMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JoinMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr JoinMode(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field CreateIfNotExists value: static_cast<uint8_t>(0x1u)
  static ::Photon::Realtime::JoinMode const CreateIfNotExists;

  /// @brief Field Default value: static_cast<uint8_t>(0x0u)
  static ::Photon::Realtime::JoinMode const Default;

  /// @brief Field JoinOrRejoin value: static_cast<uint8_t>(0x2u)
  static ::Photon::Realtime::JoinMode const JoinOrRejoin;

  /// @brief Field RejoinOnly value: static_cast<uint8_t>(0x3u)
  static ::Photon::Realtime::JoinMode const RejoinOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::JoinMode, 0x1>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::JoinMode, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::JoinMode, "Photon.Realtime", "JoinMode");
