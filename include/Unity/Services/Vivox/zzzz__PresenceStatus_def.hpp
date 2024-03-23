#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceStatus)
// Forward declare root types
namespace Unity::Services::Vivox {
struct PresenceStatus;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::PresenceStatus);
// Type: Unity.Services.Vivox::PresenceStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::PresenceStatus
struct CORDL_TYPE PresenceStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PresenceStatus_Unwrapped
  enum struct __PresenceStatus_Unwrapped : int32_t {
    __E_Available = static_cast<int32_t>(0x2),
    __E_DoNotDisturb = static_cast<int32_t>(0x3),
    __E_Away = static_cast<int32_t>(0x5),
    __E_InACall = static_cast<int32_t>(0x6),
    __E_Unavailable = static_cast<int32_t>(0x0),
    __E_Chat = static_cast<int32_t>(0xa),
    __E_ExtendedAway = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PresenceStatus_Unwrapped() const noexcept {
    return static_cast<__PresenceStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PresenceStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PresenceStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Available value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::PresenceStatus const Available;

  /// @brief Field Away value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::PresenceStatus const Away;

  /// @brief Field Chat value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::PresenceStatus const Chat;

  /// @brief Field DoNotDisturb value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::PresenceStatus const DoNotDisturb;

  /// @brief Field ExtendedAway value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::PresenceStatus const ExtendedAway;

  /// @brief Field InACall value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::PresenceStatus const InACall;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::PresenceStatus const Unavailable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::PresenceStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::PresenceStatus, "Unity.Services.Vivox", "PresenceStatus");
