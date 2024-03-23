#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomOptionBit)
// Forward declare root types
namespace Photon::Realtime {
struct RoomOptionBit;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::RoomOptionBit);
// Type: Photon.Realtime::RoomOptionBit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::RoomOptionBit
struct CORDL_TYPE RoomOptionBit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoomOptionBit_Unwrapped
  enum struct __RoomOptionBit_Unwrapped : int32_t {
    __E_CheckUserOnJoin = static_cast<int32_t>(0x1),
    __E_DeleteCacheOnLeave = static_cast<int32_t>(0x2),
    __E_SuppressRoomEvents = static_cast<int32_t>(0x4),
    __E_PublishUserId = static_cast<int32_t>(0x8),
    __E_DeleteNullProps = static_cast<int32_t>(0x10),
    __E_BroadcastPropsChangeToAll = static_cast<int32_t>(0x20),
    __E_SuppressPlayerInfo = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoomOptionBit_Unwrapped() const noexcept {
    return static_cast<__RoomOptionBit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomOptionBit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoomOptionBit(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BroadcastPropsChangeToAll value: static_cast<int32_t>(0x20)
  static ::Photon::Realtime::RoomOptionBit const BroadcastPropsChangeToAll;

  /// @brief Field CheckUserOnJoin value: static_cast<int32_t>(0x1)
  static ::Photon::Realtime::RoomOptionBit const CheckUserOnJoin;

  /// @brief Field DeleteCacheOnLeave value: static_cast<int32_t>(0x2)
  static ::Photon::Realtime::RoomOptionBit const DeleteCacheOnLeave;

  /// @brief Field DeleteNullProps value: static_cast<int32_t>(0x10)
  static ::Photon::Realtime::RoomOptionBit const DeleteNullProps;

  /// @brief Field PublishUserId value: static_cast<int32_t>(0x8)
  static ::Photon::Realtime::RoomOptionBit const PublishUserId;

  /// @brief Field SuppressPlayerInfo value: static_cast<int32_t>(0x40)
  static ::Photon::Realtime::RoomOptionBit const SuppressPlayerInfo;

  /// @brief Field SuppressRoomEvents value: static_cast<int32_t>(0x4)
  static ::Photon::Realtime::RoomOptionBit const SuppressRoomEvents;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RoomOptionBit, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptionBit, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RoomOptionBit, "Photon.Realtime", "RoomOptionBit");
