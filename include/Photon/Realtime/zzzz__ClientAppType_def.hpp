#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientAppType)
// Forward declare root types
namespace Photon::Realtime {
struct ClientAppType;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::ClientAppType);
// Type: Photon.Realtime::ClientAppType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: true
// CS Name: ::Photon.Realtime::ClientAppType
struct CORDL_TYPE ClientAppType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClientAppType_Unwrapped
  enum struct __ClientAppType_Unwrapped : int32_t {
    __E_Realtime = static_cast<int32_t>(0x0),
    __E_Voice = static_cast<int32_t>(0x1),
    __E_Fusion = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClientAppType_Unwrapped() const noexcept {
    return static_cast<__ClientAppType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientAppType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClientAppType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fusion value: static_cast<int32_t>(0x2)
  static ::Photon::Realtime::ClientAppType const Fusion;

  /// @brief Field Realtime value: static_cast<int32_t>(0x0)
  static ::Photon::Realtime::ClientAppType const Realtime;

  /// @brief Field Voice value: static_cast<int32_t>(0x1)
  static ::Photon::Realtime::ClientAppType const Voice;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ClientAppType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::ClientAppType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Realtime
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ClientAppType, "Photon.Realtime", "ClientAppType");
