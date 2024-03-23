#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoomMapNodeData)
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoomMapNodeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomMapNodeData);
// Type: ::RoomMapNodeData
// SizeInfo { instance_size: 40, native_size: 48, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomMapNodeData
struct CORDL_TYPE RoomMapNodeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1642c40, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int gridPosition, ::StringW transitionKey, bool blockUp, bool blockRight, bool blockDown, bool blockLeft);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMapNodeData();

  // Ctor Parameters [CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "themeKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "gridPosition", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "transitionKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "blockUp",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockRight", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockDown", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "blockLeft", ty: "bool", modifiers: "", def_value: None }]
  constexpr RoomMapNodeData(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int gridPosition, ::StringW transitionKey, bool blockUp, bool blockRight, bool blockDown,
                            bool blockLeft) noexcept;

  /// @brief Field roomKey, offset: 0x0, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field themeKey, offset: 0x8, size: 0x8, def value: None
  ::StringW themeKey;

  /// @brief Field gridPosition, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int gridPosition;

  /// @brief Field transitionKey, offset: 0x18, size: 0x8, def value: None
  ::StringW transitionKey;

  /// @brief Field blockUp, offset: 0x20, size: 0x1, def value: None
  bool blockUp;

  /// @brief Field blockRight, offset: 0x21, size: 0x1, def value: None
  bool blockRight;

  /// @brief Field blockDown, offset: 0x22, size: 0x1, def value: None
  bool blockDown;

  /// @brief Field blockLeft, offset: 0x23, size: 0x1, def value: None
  bool blockLeft;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMapNodeData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, roomKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, themeKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, gridPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, transitionKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, blockUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, blockRight) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, blockDown) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapNodeData, blockLeft) == 0x23, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMapNodeData, "", "RoomMapNodeData");
