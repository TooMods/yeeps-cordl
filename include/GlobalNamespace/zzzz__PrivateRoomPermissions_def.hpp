#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomPermissions)
// Forward declare root types
namespace GlobalNamespace {
struct PrivateRoomPermissions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PrivateRoomPermissions);
// Type: ::PrivateRoomPermissions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PrivateRoomPermissions
struct CORDL_TYPE PrivateRoomPermissions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PrivateRoomPermissions_Unwrapped
  enum struct __PrivateRoomPermissions_Unwrapped : int32_t {
    __E_closed = static_cast<int32_t>(0x0),
    __E_openToFriends = static_cast<int32_t>(0x1),
    __E_openToAll = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PrivateRoomPermissions_Unwrapped() const noexcept {
    return static_cast<__PrivateRoomPermissions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomPermissions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PrivateRoomPermissions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field closed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::PrivateRoomPermissions const closed;

  /// @brief Field openToAll value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::PrivateRoomPermissions const openToAll;

  /// @brief Field openToFriends value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::PrivateRoomPermissions const openToFriends;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomPermissions, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomPermissions, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomPermissions, "", "PrivateRoomPermissions");
