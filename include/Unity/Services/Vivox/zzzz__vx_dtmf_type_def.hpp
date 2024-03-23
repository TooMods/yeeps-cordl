#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_dtmf_type)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_dtmf_type;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_dtmf_type);
// Type: Unity.Services.Vivox::vx_dtmf_type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_dtmf_type
struct CORDL_TYPE vx_dtmf_type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_dtmf_type_Unwrapped
  enum struct __vx_dtmf_type_Unwrapped : int32_t {
    __E_dtmf_0 = static_cast<int32_t>(0x0),
    __E_dtmf_1 = static_cast<int32_t>(0x1),
    __E_dtmf_2 = static_cast<int32_t>(0x2),
    __E_dtmf_3 = static_cast<int32_t>(0x3),
    __E_dtmf_4 = static_cast<int32_t>(0x4),
    __E_dtmf_5 = static_cast<int32_t>(0x5),
    __E_dtmf_6 = static_cast<int32_t>(0x6),
    __E_dtmf_7 = static_cast<int32_t>(0x7),
    __E_dtmf_8 = static_cast<int32_t>(0x8),
    __E_dtmf_9 = static_cast<int32_t>(0x9),
    __E_dtmf_pound = static_cast<int32_t>(0xa),
    __E_dtmf_star = static_cast<int32_t>(0xb),
    __E_dtmf_A = static_cast<int32_t>(0xc),
    __E_dtmf_B = static_cast<int32_t>(0xd),
    __E_dtmf_C = static_cast<int32_t>(0xe),
    __E_dtmf_D = static_cast<int32_t>(0xf),
    __E_dtmf_max = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_dtmf_type_Unwrapped() const noexcept {
    return static_cast<__vx_dtmf_type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_dtmf_type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_dtmf_type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field dtmf_0 value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_0;

  /// @brief Field dtmf_1 value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_1;

  /// @brief Field dtmf_2 value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_2;

  /// @brief Field dtmf_3 value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_3;

  /// @brief Field dtmf_4 value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_4;

  /// @brief Field dtmf_5 value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_5;

  /// @brief Field dtmf_6 value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_6;

  /// @brief Field dtmf_7 value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_7;

  /// @brief Field dtmf_8 value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_8;

  /// @brief Field dtmf_9 value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_9;

  /// @brief Field dtmf_A value: static_cast<int32_t>(0xc)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_A;

  /// @brief Field dtmf_B value: static_cast<int32_t>(0xd)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_B;

  /// @brief Field dtmf_C value: static_cast<int32_t>(0xe)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_C;

  /// @brief Field dtmf_D value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_D;

  /// @brief Field dtmf_max value: static_cast<int32_t>(0xf)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_max;

  /// @brief Field dtmf_pound value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_pound;

  /// @brief Field dtmf_star value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::vx_dtmf_type const dtmf_star;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_dtmf_type, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_dtmf_type, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_dtmf_type, "Unity.Services.Vivox", "vx_dtmf_type");
