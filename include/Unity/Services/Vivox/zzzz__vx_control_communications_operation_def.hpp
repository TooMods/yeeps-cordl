#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_control_communications_operation)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_control_communications_operation;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_control_communications_operation);
// Type: Unity.Services.Vivox::vx_control_communications_operation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_control_communications_operation
struct CORDL_TYPE vx_control_communications_operation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_control_communications_operation_Unwrapped
  enum struct __vx_control_communications_operation_Unwrapped : int32_t {
    __E_vx_control_communications_operation_block = static_cast<int32_t>(0x0),
    __E_vx_control_communications_operation_unblock = static_cast<int32_t>(0x1),
    __E_vx_control_communications_operation_list = static_cast<int32_t>(0x2),
    __E_vx_control_communications_operation_block_list = static_cast<int32_t>(0x2),
    __E_vx_control_communications_operation_clear = static_cast<int32_t>(0x3),
    __E_vx_control_communications_operation_clear_block_list = static_cast<int32_t>(0x3),
    __E_vx_control_communications_operation_mute = static_cast<int32_t>(0x4),
    __E_vx_control_communications_operation_unmute = static_cast<int32_t>(0x5),
    __E_vx_control_communications_operation_mute_list = static_cast<int32_t>(0x6),
    __E_vx_control_communications_operation_clear_mute_list = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_control_communications_operation_Unwrapped() const noexcept {
    return static_cast<__vx_control_communications_operation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_control_communications_operation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_control_communications_operation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field vx_control_communications_operation_block value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_block;

  /// @brief Field vx_control_communications_operation_block_list value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_block_list;

  /// @brief Field vx_control_communications_operation_clear value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_clear;

  /// @brief Field vx_control_communications_operation_clear_block_list value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_clear_block_list;

  /// @brief Field vx_control_communications_operation_clear_mute_list value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_clear_mute_list;

  /// @brief Field vx_control_communications_operation_list value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_list;

  /// @brief Field vx_control_communications_operation_mute value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_mute;

  /// @brief Field vx_control_communications_operation_mute_list value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_mute_list;

  /// @brief Field vx_control_communications_operation_unblock value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_unblock;

  /// @brief Field vx_control_communications_operation_unmute value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_control_communications_operation const vx_control_communications_operation_unmute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_control_communications_operation, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_control_communications_operation, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_control_communications_operation, "Unity.Services.Vivox", "vx_control_communications_operation");
