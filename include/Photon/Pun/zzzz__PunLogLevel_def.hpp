#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PunLogLevel)
// Forward declare root types
namespace Photon::Pun {
struct PunLogLevel;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::PunLogLevel);
// Type: Photon.Pun::PunLogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::Photon.Pun::PunLogLevel
struct CORDL_TYPE PunLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PunLogLevel_Unwrapped
  enum struct __PunLogLevel_Unwrapped : int32_t {
    __E_ErrorsOnly = static_cast<int32_t>(0x0),
    __E_Informational = static_cast<int32_t>(0x1),
    __E_Full = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PunLogLevel_Unwrapped() const noexcept {
    return static_cast<__PunLogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PunLogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PunLogLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ErrorsOnly value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::PunLogLevel const ErrorsOnly;

  /// @brief Field Full value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::PunLogLevel const Full;

  /// @brief Field Informational value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::PunLogLevel const Informational;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PunLogLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PunLogLevel, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PunLogLevel, "Photon.Pun", "PunLogLevel");
