#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZBin)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ZBin;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ZBin);
// Type: UnityEngine.Rendering.Universal::ZBin
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ZBin
struct CORDL_TYPE ZBin {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZBin();

  // Ctor Parameters [CppParam { name: "minIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "maxIndex", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr ZBin(uint16_t minIndex, uint16_t maxIndex) noexcept;

  /// @brief Field minIndex, offset: 0x0, size: 0x2, def value: None
  uint16_t minIndex;

  /// @brief Field maxIndex, offset: 0x2, size: 0x2, def value: None
  uint16_t maxIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ZBin, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBin, minIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBin, maxIndex) == 0x2, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ZBin, "UnityEngine.Rendering.Universal", "ZBin");
