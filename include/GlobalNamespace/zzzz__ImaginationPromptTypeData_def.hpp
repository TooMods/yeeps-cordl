#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ImaginationPromptTypeData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct ImaginationPromptTypeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImaginationPromptTypeData);
// Type: ::ImaginationPromptTypeData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ImaginationPromptTypeData
struct CORDL_TYPE ImaginationPromptTypeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImaginationPromptTypeData();

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value:
  // None }, CppParam { name: "autoDismiss", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoDismissDelay", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ImaginationPromptTypeData(::UnityEngine::Color color, ::UnityW<::UnityEngine::Sprite> icon, bool autoDismiss, float_t autoDismissDelay) noexcept;

  /// @brief Field color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field icon, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> icon;

  /// @brief Field autoDismiss, offset: 0x18, size: 0x1, def value: None
  bool autoDismiss;

  /// @brief Field autoDismissDelay, offset: 0x1c, size: 0x4, def value: None
  float_t autoDismissDelay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImaginationPromptTypeData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptTypeData, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptTypeData, icon) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptTypeData, autoDismiss) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptTypeData, autoDismissDelay) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImaginationPromptTypeData, "", "ImaginationPromptTypeData");
