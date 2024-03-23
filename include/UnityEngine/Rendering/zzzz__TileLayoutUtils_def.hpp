#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TileLayoutUtils)
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TileLayoutUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TileLayoutUtils);
// Type: UnityEngine.Rendering::TileLayoutUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::TileLayoutUtils*
class CORDL_TYPE TileLayoutUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryLayoutByCol, addr 0x17d1f4c, size 0x1a0, virtual false, abstract: false, final false
  static inline bool TryLayoutByCol(::UnityEngine::RectInt src, uint32_t tileSize, ByRef<::UnityEngine::RectInt> main, ByRef<::UnityEngine::RectInt> other);

  /// @brief Method TryLayoutByRow, addr 0x17d1dac, size 0x1a0, virtual false, abstract: false, final false
  static inline bool TryLayoutByRow(::UnityEngine::RectInt src, uint32_t tileSize, ByRef<::UnityEngine::RectInt> main, ByRef<::UnityEngine::RectInt> other);

  /// @brief Method TryLayoutByTiles, addr 0x17d1a9c, size 0x310, virtual false, abstract: false, final false
  static inline bool TryLayoutByTiles(::UnityEngine::RectInt src, uint32_t tileSize, ByRef<::UnityEngine::RectInt> main, ByRef<::UnityEngine::RectInt> topRow, ByRef<::UnityEngine::RectInt> rightCol,
                                      ByRef<::UnityEngine::RectInt> topRight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileLayoutUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TileLayoutUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TileLayoutUtils(TileLayoutUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TileLayoutUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TileLayoutUtils(TileLayoutUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TileLayoutUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TileLayoutUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TileLayoutUtils*, "UnityEngine.Rendering", "TileLayoutUtils");
