#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMask)
// Forward declare root types
namespace UnityEngine {
struct LayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LayerMask);
// Type: UnityEngine::LayerMask
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::LayerMask
struct CORDL_TYPE LayerMask {
public:
  // Declarations
  __declspec(property(get = get_value)) int32_t value;

  /// @brief Method get_value, addr 0x283d874, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method op_Implicit, addr 0x283d86c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask op_Implicit___UnityEngine__LayerMask(int32_t intVal);

  /// @brief Method op_Implicit, addr 0x283d868, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::LayerMask mask);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMask();

  // Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayerMask(int32_t m_Mask) noexcept;

  /// @brief Field m_Mask, offset: 0x0, size: 0x4, def value: None
  int32_t m_Mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LayerMask, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LayerMask, m_Mask) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LayerMask, "UnityEngine", "LayerMask");
