#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(TilemapRenderer)
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TilemapRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::TilemapRenderer);
// Type: UnityEngine.Tilemaps::TilemapRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::TilemapRenderer*
class CORDL_TYPE TilemapRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TilemapRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TilemapRenderer(TilemapRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TilemapRenderer(TilemapRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TilemapRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::TilemapRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TilemapRenderer*, "UnityEngine.Tilemaps", "TilemapRenderer");
