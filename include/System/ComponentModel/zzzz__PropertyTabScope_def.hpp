#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyTabScope)
// Forward declare root types
namespace System::ComponentModel {
struct PropertyTabScope;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::PropertyTabScope);
// Type: System.ComponentModel::PropertyTabScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::System.ComponentModel::PropertyTabScope
struct CORDL_TYPE PropertyTabScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PropertyTabScope_Unwrapped
  enum struct __PropertyTabScope_Unwrapped : int32_t {
    __E_Static = static_cast<int32_t>(0x0),
    __E_Global = static_cast<int32_t>(0x1),
    __E_Document = static_cast<int32_t>(0x2),
    __E_Component = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropertyTabScope_Unwrapped() const noexcept {
    return static_cast<__PropertyTabScope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyTabScope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyTabScope(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Component value: static_cast<int32_t>(0x3)
  static ::System::ComponentModel::PropertyTabScope const Component;

  /// @brief Field Document value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::PropertyTabScope const Document;

  /// @brief Field Global value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::PropertyTabScope const Global;

  /// @brief Field Static value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::PropertyTabScope const Static;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyTabScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabScope, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyTabScope, "System.ComponentModel", "PropertyTabScope");
