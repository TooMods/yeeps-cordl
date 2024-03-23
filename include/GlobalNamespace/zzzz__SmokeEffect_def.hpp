#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmokeEffect)
namespace GlobalNamespace {
class PlayspaceData;
}
namespace GlobalNamespace {
class SmokeCube;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Random;
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
class SmokeEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmokeEffect);
// Type: ::SmokeEffect
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 220, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SmokeEffect*
class CORDL_TYPE SmokeEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeSmokeEffectCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_activeSmokeEffectCount, put = setStaticF_activeSmokeEffectCount)) int32_t activeSmokeEffectCount;

  /// @brief Field centerCellPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_centerCellPosition, put = __cordl_internal_set_centerCellPosition))::UnityEngine::Vector3Int centerCellPosition;

  /// @brief Field curLifetimeRatio, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_curLifetimeRatio, put = __cordl_internal_set_curLifetimeRatio)) float_t curLifetimeRatio;

  /// @brief Field curSize, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_curSize, put = __cordl_internal_set_curSize)) float_t curSize;

  /// @brief Field frontier, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_frontier, put = __cordl_internal_set_frontier))::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* frontier;

  /// @brief Field frontierCellPosition, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get_frontierCellPosition, put = __cordl_internal_set_frontierCellPosition))::UnityEngine::Vector3Int frontierCellPosition;

  /// @brief Field frontierIndex, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_frontierIndex, put = __cordl_internal_set_frontierIndex)) int32_t frontierIndex;

  /// @brief Field mapData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mapData, put = __cordl_internal_set_mapData))::GlobalNamespace::PlayspaceData* mapData;

  /// @brief Field maxSmokeCubeCount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSmokeCubeCount, put = __cordl_internal_set_maxSmokeCubeCount)) int32_t maxSmokeCubeCount;

  /// @brief Field neighborCellPosition, offset 0xc8, size 0xc
  __declspec(property(get = __cordl_internal_get_neighborCellPosition, put = __cordl_internal_set_neighborCellPosition))::UnityEngine::Vector3Int neighborCellPosition;

  /// @brief Field nextSmokeTime, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_nextSmokeTime, put = __cordl_internal_set_nextSmokeTime)) float_t nextSmokeTime;

  /// @brief Field radius, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field rand, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rand, put = __cordl_internal_set_rand))::System::Random* rand;

  /// @brief Field smokeCubeCount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_smokeCubeCount, put = __cordl_internal_set_smokeCubeCount)) int32_t smokeCubeCount;

  /// @brief Field smokeCubeGrid, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubeGrid, put = __cordl_internal_set_smokeCubeGrid)) Il2CppObject* smokeCubeGrid;

  /// @brief Field smokeCubeGridLowerCellPosition, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_smokeCubeGridLowerCellPosition, put = __cordl_internal_set_smokeCubeGridLowerCellPosition))::UnityEngine::Vector3Int smokeCubeGridLowerCellPosition;

  /// @brief Field smokeCubeGridUpperCellPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_smokeCubeGridUpperCellPosition, put = __cordl_internal_set_smokeCubeGridUpperCellPosition))::UnityEngine::Vector3Int smokeCubeGridUpperCellPosition;

  /// @brief Field smokeCubeMR, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubeMR, put = __cordl_internal_set_smokeCubeMR))::UnityW<::UnityEngine::MeshRenderer> smokeCubeMR;

  /// @brief Field smokeCubeMat, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubeMat, put = __cordl_internal_set_smokeCubeMat))::UnityW<::UnityEngine::Material> smokeCubeMat;

  /// @brief Field smokeCubePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubePrefab, put = __cordl_internal_set_smokeCubePrefab))::UnityW<::UnityEngine::GameObject> smokeCubePrefab;

  /// @brief Field smokeCubeTransform, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubeTransform, put = __cordl_internal_set_smokeCubeTransform))::UnityW<::UnityEngine::Transform> smokeCubeTransform;

  /// @brief Field smokeCubes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_smokeCubes, put = __cordl_internal_set_smokeCubes))::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>* smokeCubes;

  /// @brief Field worldPosition, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_worldPosition, put = __cordl_internal_set_worldPosition))::UnityEngine::Vector3 worldPosition;

  /// @brief Field x, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Field z, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) int32_t z;

  /// @brief Method Initialize, addr 0x29c427c, size 0x530, virtual false, abstract: false, final false
  inline void Initialize(float_t radius, int32_t seed);

  static inline ::GlobalNamespace::SmokeEffect* New_ctor();

  /// @brief Method Update, addr 0x29c6864, size 0xa64, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_centerCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_centerCellPosition();

  constexpr float_t const& __cordl_internal_get_curLifetimeRatio() const;

  constexpr float_t& __cordl_internal_get_curLifetimeRatio();

  constexpr float_t const& __cordl_internal_get_curSize() const;

  constexpr float_t& __cordl_internal_get_curSize();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*& __cordl_internal_get_frontier();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*> const& __cordl_internal_get_frontier() const;

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_frontierCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_frontierCellPosition();

  constexpr int32_t const& __cordl_internal_get_frontierIndex() const;

  constexpr int32_t& __cordl_internal_get_frontierIndex();

  constexpr ::GlobalNamespace::PlayspaceData*& __cordl_internal_get_mapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayspaceData*> const& __cordl_internal_get_mapData() const;

  constexpr int32_t const& __cordl_internal_get_maxSmokeCubeCount() const;

  constexpr int32_t& __cordl_internal_get_maxSmokeCubeCount();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_neighborCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_neighborCellPosition();

  constexpr float_t const& __cordl_internal_get_nextSmokeTime() const;

  constexpr float_t& __cordl_internal_get_nextSmokeTime();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr ::System::Random*& __cordl_internal_get_rand();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get_rand() const;

  constexpr int32_t const& __cordl_internal_get_smokeCubeCount() const;

  constexpr int32_t& __cordl_internal_get_smokeCubeCount();

  constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& __cordl_internal_get_smokeCubeGrid() const;

  constexpr Il2CppObject*& __cordl_internal_get_smokeCubeGrid();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_smokeCubeGridLowerCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_smokeCubeGridLowerCellPosition();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_smokeCubeGridUpperCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_smokeCubeGridUpperCellPosition();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_smokeCubeMR() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_smokeCubeMR();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_smokeCubeMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_smokeCubeMat();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_smokeCubePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_smokeCubePrefab();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_smokeCubeTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_smokeCubeTransform();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>*& __cordl_internal_get_smokeCubes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>*> const& __cordl_internal_get_smokeCubes() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldPosition();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr int32_t const& __cordl_internal_get_z() const;

  constexpr int32_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_centerCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_curLifetimeRatio(float_t value);

  constexpr void __cordl_internal_set_curSize(float_t value);

  constexpr void __cordl_internal_set_frontier(::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* value);

  constexpr void __cordl_internal_set_frontierCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_frontierIndex(int32_t value);

  constexpr void __cordl_internal_set_mapData(::GlobalNamespace::PlayspaceData* value);

  constexpr void __cordl_internal_set_maxSmokeCubeCount(int32_t value);

  constexpr void __cordl_internal_set_neighborCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_nextSmokeTime(float_t value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_rand(::System::Random* value);

  constexpr void __cordl_internal_set_smokeCubeCount(int32_t value);

  constexpr void __cordl_internal_set_smokeCubeGrid(Il2CppObject* value);

  constexpr void __cordl_internal_set_smokeCubeGridLowerCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_smokeCubeGridUpperCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_smokeCubeMR(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_smokeCubeMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_smokeCubePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_smokeCubeTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_smokeCubes(::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>* value);

  constexpr void __cordl_internal_set_worldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  constexpr void __cordl_internal_set_z(int32_t value);

  /// @brief Method .ctor, addr 0x29c72c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_activeSmokeEffectCount();

  static inline void setStaticF_activeSmokeEffectCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmokeEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmokeEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmokeEffect(SmokeEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmokeEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmokeEffect(SmokeEffect const&) = delete;

  /// @brief Field smokeCubePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___smokeCubePrefab;

  /// @brief Field smokeCubes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::SmokeCube*>* ___smokeCubes;

  /// @brief Field radius, offset: 0x28, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field mapData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayspaceData* ___mapData;

  /// @brief Field smokeCubeGrid, offset: 0x38, size: 0x8, def value: None
  Il2CppObject* ___smokeCubeGrid;

  /// @brief Field centerCellPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___centerCellPosition;

  /// @brief Field smokeCubeGridLowerCellPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___smokeCubeGridLowerCellPosition;

  /// @brief Field smokeCubeGridUpperCellPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___smokeCubeGridUpperCellPosition;

  /// @brief Field smokeCubeCount, offset: 0x64, size: 0x4, def value: None
  int32_t ___smokeCubeCount;

  /// @brief Field maxSmokeCubeCount, offset: 0x68, size: 0x4, def value: None
  int32_t ___maxSmokeCubeCount;

  /// @brief Field frontier, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* ___frontier;

  /// @brief Field x, offset: 0x78, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x7c, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field z, offset: 0x80, size: 0x4, def value: None
  int32_t ___z;

  /// @brief Field nextSmokeTime, offset: 0x84, size: 0x4, def value: None
  float_t ___nextSmokeTime;

  /// @brief Field rand, offset: 0x88, size: 0x8, def value: None
  ::System::Random* ___rand;

  /// @brief Field frontierIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ___frontierIndex;

  /// @brief Field frontierCellPosition, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___frontierCellPosition;

  /// @brief Field worldPosition, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldPosition;

  /// @brief Field smokeCubeTransform, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___smokeCubeTransform;

  /// @brief Field smokeCubeMR, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___smokeCubeMR;

  /// @brief Field smokeCubeMat, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___smokeCubeMat;

  /// @brief Field neighborCellPosition, offset: 0xc8, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___neighborCellPosition;

  /// @brief Field curSize, offset: 0xd4, size: 0x4, def value: None
  float_t ___curSize;

  /// @brief Field curLifetimeRatio, offset: 0xd8, size: 0x4, def value: None
  float_t ___curLifetimeRatio;

  /// @brief Field duration offset 0xffffffff size 0x4
  static constexpr float_t duration{ 6.0 };

  /// @brief Field maxActiveSmokeEffectCount offset 0xffffffff size 0x4
  static constexpr int32_t maxActiveSmokeEffectCount{ static_cast<int32_t>(0xc) };

  /// @brief Field randomLifeTimeAmount offset 0xffffffff size 0x4
  static constexpr float_t randomLifeTimeAmount{ 0.175 };

  /// @brief Field soundKey offset 0xffffffff size 0x8
  static constexpr ::ConstString soundKey{ u"explosionSmoke" };

  /// @brief Field timeBetweenSmoke offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenSmoke{ 0.0015 };

  /// @brief Field transitionInLifetimeRatio offset 0xffffffff size 0x4
  static constexpr float_t transitionInLifetimeRatio{ 0.075 };

  /// @brief Field transitionOutLifetimeRatio offset 0xffffffff size 0x4
  static constexpr float_t transitionOutLifetimeRatio{ 0.112500004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmokeEffect, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___mapData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeGrid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___centerCellPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeGridLowerCellPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeGridUpperCellPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___maxSmokeCubeCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___frontier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___x) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___y) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___z) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___nextSmokeTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___rand) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___frontierIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___frontierCellPosition) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___worldPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeTransform) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeMR) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___smokeCubeMat) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___neighborCellPosition) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___curSize) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmokeEffect, ___curLifetimeRatio) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmokeEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmokeEffect*, "", "SmokeEffect");
