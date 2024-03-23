#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_mute_scope)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_mute_scope;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_mute_scope);
// Type: Unity.Services.Vivox::vx_mute_scope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_mute_scope
struct CORDL_TYPE vx_mute_scope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_mute_scope_Unwrapped
  enum struct __vx_mute_scope_Unwrapped : int32_t {
    __E_mute_scope_all = static_cast<int32_t>(0x0),
    __E_mute_scope_audio = static_cast<int32_t>(0x1),
    __E_mute_scope_text = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_mute_scope_Unwrapped() const noexcept {
    return static_cast<__vx_mute_scope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_mute_scope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_mute_scope(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field mute_scope_all value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_mute_scope const mute_scope_all;

  /// @brief Field mute_scope_audio value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_mute_scope const mute_scope_audio;

  /// @brief Field mute_scope_text value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_mute_scope const mute_scope_text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_mute_scope, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_mute_scope, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_mute_scope, "Unity.Services.Vivox", "vx_mute_scope");
