#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
CORDL_MODULE_EXPORT(Tilemap)
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tilemap);
// Type: UnityEngine.Tilemaps::Tilemap
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::Tilemap*
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tilemap(Tilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tilemap(Tilemap const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
