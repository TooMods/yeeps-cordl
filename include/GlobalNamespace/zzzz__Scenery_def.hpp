#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Scenery)
namespace GlobalNamespace {
class Theme;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class Scenery;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Scenery);
// Type: ::Scenery
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Scenery*
class CORDL_TYPE Scenery : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field scenerySky, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenerySky, put = __cordl_internal_set_scenerySky))::UnityW<::UnityEngine::MeshRenderer> scenerySky;

  /// @brief Method DestroySelf, addr 0x1447558, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method GenerateFloor, addr 0x1446504, size 0x6f0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GenerateFloor(::UnityEngine::Vector3Int cutoutDimensions, float_t lipHeight, ::UnityEngine::Transform* parent, ::UnityEngine::Material* material);

  /// @brief Method GenerateWalls, addr 0x1446bf4, size 0x964, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GenerateWalls(::UnityEngine::Vector3Int dimensions, int32_t floorDepth, ::UnityEngine::Transform* parent, ::UnityEngine::Material* material);

  /// @brief Method Initialize, addr 0x1446128, size 0x3dc, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Theme* theme, ::UnityEngine::Vector3Int dimensions, int32_t floorDepth, ::UnityEngine::Transform* playspaceGroundTransform);

  static inline ::GlobalNamespace::Scenery* New_ctor();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_scenerySky() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_scenerySky();

  constexpr void __cordl_internal_set_scenerySky(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x14475c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scenery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scenery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scenery(Scenery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scenery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scenery(Scenery const&) = delete;

  /// @brief Field scenerySky, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___scenerySky;

  /// @brief Field colliderLayer offset 0xffffffff size 0x4
  static constexpr int32_t colliderLayer{ static_cast<int32_t>(0x3) };

  /// @brief Field floorOffset offset 0xffffffff size 0x4
  static constexpr float_t floorOffset{ 0.05 };

  /// @brief Field floorRadius offset 0xffffffff size 0x4
  static constexpr float_t floorRadius{ 100.0 };

  /// @brief Field sceneryLayer offset 0xffffffff size 0x4
  static constexpr int32_t sceneryLayer{ static_cast<int32_t>(0xb) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Scenery, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Scenery, ___scenerySky) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Scenery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Scenery*, "", "Scenery");
