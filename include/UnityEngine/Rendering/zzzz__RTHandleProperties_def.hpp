#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RTHandleProperties)
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTHandleProperties);
// Type: UnityEngine.Rendering::RTHandleProperties
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::RTHandleProperties
struct CORDL_TYPE RTHandleProperties {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleProperties();

  // Ctor Parameters [CppParam { name: "previousViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "previousRenderTargetSize", ty:
  // "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "currentViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name:
  // "currentRenderTargetSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "rtHandleScale", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr RTHandleProperties(::UnityEngine::Vector2Int previousViewportSize, ::UnityEngine::Vector2Int previousRenderTargetSize, ::UnityEngine::Vector2Int currentViewportSize,
                               ::UnityEngine::Vector2Int currentRenderTargetSize, ::UnityEngine::Vector4 rtHandleScale) noexcept;

  /// @brief Field previousViewportSize, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int previousViewportSize;

  /// @brief Field previousRenderTargetSize, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int previousRenderTargetSize;

  /// @brief Field currentViewportSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int currentViewportSize;

  /// @brief Field currentRenderTargetSize, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int currentRenderTargetSize;

  /// @brief Field rtHandleScale, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 rtHandleScale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandleProperties, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, previousViewportSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, previousRenderTargetSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, currentViewportSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, currentRenderTargetSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, rtHandleScale) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandleProperties, "UnityEngine.Rendering", "RTHandleProperties");
