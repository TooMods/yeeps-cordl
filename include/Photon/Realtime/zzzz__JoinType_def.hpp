#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinType)
// Forward declare root types
namespace Photon::Realtime {
struct JoinType;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::JoinType);
// Type: Photon.Realtime::JoinType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::JoinType
struct CORDL_TYPE JoinType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JoinType_Unwrapped
  enum struct __JoinType_Unwrapped : int32_t {
    __E_CreateRoom = static_cast<int32_t>(0x0),
    __E_JoinRoom = static_cast<int32_t>(0x1),
    __E_JoinRandomRoom = static_cast<int32_t>(0x2),
    __E_JoinRandomOrCreateRoom = static_cast<int32_t>(0x3),
    __E_JoinOrCreateRoom = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JoinType_Unwrapped() const noexcept {
    return static_cast<__JoinType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JoinType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JoinType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CreateRoom value: static_cast<int32_t>(0x0)
  static ::Photon::Realtime::JoinType const CreateRoom;

  /// @brief Field JoinOrCreateRoom value: static_cast<int32_t>(0x4)
  static ::Photon::Realtime::JoinType const JoinOrCreateRoom;

  /// @brief Field JoinRandomOrCreateRoom value: static_cast<int32_t>(0x3)
  static ::Photon::Realtime::JoinType const JoinRandomOrCreateRoom;

  /// @brief Field JoinRandomRoom value: static_cast<int32_t>(0x2)
  static ::Photon::Realtime::JoinType const JoinRandomRoom;

  /// @brief Field JoinRoom value: static_cast<int32_t>(0x1)
  static ::Photon::Realtime::JoinType const JoinRoom;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::JoinType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::JoinType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::JoinType, "Photon.Realtime", "JoinType");
