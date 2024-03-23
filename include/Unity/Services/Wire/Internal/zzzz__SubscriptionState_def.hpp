#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionState)
// Forward declare root types
namespace Unity::Services::Wire::Internal {
struct SubscriptionState;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Wire::Internal::SubscriptionState);
// Type: Unity.Services.Wire.Internal::SubscriptionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Wire::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Wire.Internal::SubscriptionState
struct CORDL_TYPE SubscriptionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SubscriptionState_Unwrapped
  enum struct __SubscriptionState_Unwrapped : int32_t {
    __E_Unsubscribed = static_cast<int32_t>(0x0),
    __E_Synced = static_cast<int32_t>(0x1),
    __E_Unsynced = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
    __E_Subscribing = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SubscriptionState_Unwrapped() const noexcept {
    return static_cast<__SubscriptionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SubscriptionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SubscriptionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Wire::Internal::SubscriptionState const Error;

  /// @brief Field Subscribing value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Wire::Internal::SubscriptionState const Subscribing;

  /// @brief Field Synced value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Wire::Internal::SubscriptionState const Synced;

  /// @brief Field Unsubscribed value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Wire::Internal::SubscriptionState const Unsubscribed;

  /// @brief Field Unsynced value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Wire::Internal::SubscriptionState const Unsynced;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Wire::Internal::SubscriptionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Wire::Internal::SubscriptionState, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Wire::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Wire::Internal::SubscriptionState, "Unity.Services.Wire.Internal", "SubscriptionState");
