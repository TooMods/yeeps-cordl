#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomWallGenerator)
namespace GlobalNamespace {
class RoomDoorConfiguration;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomWallGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomWallGenerator);
// Type: ::RoomWallGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomWallGenerator*
class CORDL_TYPE RoomWallGenerator : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoomWallGenerator>> {
public:
  // Declarations
  /// @brief Field wallMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_wallMaterial, put = __cordl_internal_set_wallMaterial))::UnityW<::UnityEngine::Material> wallMaterial;

  /// @brief Method CreateWall, addr 0x1435ac8, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateWall(::UnityEngine::Vector2Int sizeOnGrid, int32_t floorDepth, ::GlobalNamespace::RoomDoorConfiguration* doorConfiguration);

  /// @brief Method GenerateWall, addr 0x1436610, size 0x480, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GenerateWall(::UnityEngine::Vector2 size);

  /// @brief Method GenerateWallWithHole, addr 0x1435b1c, size 0xaf4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GenerateWallWithHole(::UnityEngine::Vector2 size, ::UnityEngine::Vector2 holeBottomCenter, ::UnityEngine::Vector2 holeSize);

  static inline ::GlobalNamespace::RoomWallGenerator* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_wallMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_wallMaterial();

  constexpr void __cordl_internal_set_wallMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x1436a90, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomWallGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomWallGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomWallGenerator(RoomWallGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomWallGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomWallGenerator(RoomWallGenerator const&) = delete;

  /// @brief Field wallMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___wallMaterial;

  /// @brief Field wallColliderThickness offset 0xffffffff size 0x4
  static constexpr float_t wallColliderThickness{ 1.0 };

  /// @brief Field wallLayer offset 0xffffffff size 0x4
  static constexpr int32_t wallLayer{ static_cast<int32_t>(0x12) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomWallGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomWallGenerator, ___wallMaterial) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomWallGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomWallGenerator*, "", "RoomWallGenerator");
