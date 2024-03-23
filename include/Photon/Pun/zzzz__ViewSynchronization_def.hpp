#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewSynchronization)
// Forward declare root types
namespace Photon::Pun {
struct ViewSynchronization;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::ViewSynchronization);
// Type: Photon.Pun::ViewSynchronization
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::Photon.Pun::ViewSynchronization
struct CORDL_TYPE ViewSynchronization {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ViewSynchronization_Unwrapped
  enum struct __ViewSynchronization_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_ReliableDeltaCompressed = static_cast<int32_t>(0x1),
    __E_Unreliable = static_cast<int32_t>(0x2),
    __E_UnreliableOnChange = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ViewSynchronization_Unwrapped() const noexcept {
    return static_cast<__ViewSynchronization_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewSynchronization();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ViewSynchronization(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::ViewSynchronization const Off;

  /// @brief Field ReliableDeltaCompressed value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::ViewSynchronization const ReliableDeltaCompressed;

  /// @brief Field Unreliable value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::ViewSynchronization const Unreliable;

  /// @brief Field UnreliableOnChange value: static_cast<int32_t>(0x3)
  static ::Photon::Pun::ViewSynchronization const UnreliableOnChange;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::ViewSynchronization, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::ViewSynchronization, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::ViewSynchronization, "Photon.Pun", "ViewSynchronization");
