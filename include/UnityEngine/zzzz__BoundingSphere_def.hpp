#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BoundingSphere)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct BoundingSphere;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoundingSphere);
// Type: UnityEngine::BoundingSphere
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::BoundingSphere
struct CORDL_TYPE BoundingSphere {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x27fbe24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 pos, float_t rad);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundingSphere();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BoundingSphere(::UnityEngine::Vector3 position, float_t radius) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field radius, offset: 0xc, size: 0x4, def value: None
  float_t radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoundingSphere, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BoundingSphere, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoundingSphere, radius) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundingSphere, "UnityEngine", "BoundingSphere");
