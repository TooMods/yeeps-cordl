#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationItem)
// Forward declare root types
namespace GlobalNamespace {
struct RotationItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RotationItem);
// Type: ::RotationItem
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RotationItem
struct CORDL_TYPE RotationItem {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x15978cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationItem();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RotationItem(::StringW key, int32_t value) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field value, offset: 0x8, size: 0x4, def value: None
  int32_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotationItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationItem, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationItem, value) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationItem, "", "RotationItem");
