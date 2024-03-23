#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PreTile)
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PreTile;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PreTile);
// Type: UnityEngine.Rendering.Universal::PreTile
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::PreTile
struct CORDL_TYPE PreTile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreTile();

  // Ctor Parameters [CppParam { name: "planeLeft", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "planeRight", ty: "::Unity::Mathematics::float4", modifiers:
  // "", def_value: None }, CppParam { name: "planeBottom", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "planeTop", ty: "::Unity::Mathematics::float4",
  // modifiers: "", def_value: None }]
  constexpr PreTile(::Unity::Mathematics::float4 planeLeft, ::Unity::Mathematics::float4 planeRight, ::Unity::Mathematics::float4 planeBottom, ::Unity::Mathematics::float4 planeTop) noexcept;

  /// @brief Field planeLeft, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 planeLeft;

  /// @brief Field planeRight, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 planeRight;

  /// @brief Field planeBottom, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 planeBottom;

  /// @brief Field planeTop, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::float4 planeTop;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PreTile, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PreTile, planeLeft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PreTile, planeRight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PreTile, planeBottom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PreTile, planeTop) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PreTile, "UnityEngine.Rendering.Universal", "PreTile");
