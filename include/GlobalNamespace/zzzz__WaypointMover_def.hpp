#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointMover)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointMover;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointMover);
// Type: ::WaypointMover
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WaypointMover*
class CORDL_TYPE WaypointMover : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field currentWaypointIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentWaypointIndex, put = __cordl_internal_set_currentWaypointIndex)) int32_t currentWaypointIndex;

  /// @brief Field speed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field waypointContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_waypointContainer, put = __cordl_internal_set_waypointContainer))::UnityW<::UnityEngine::Transform> waypointContainer;

  /// @brief Field waypoints, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_waypoints, put = __cordl_internal_set_waypoints))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> waypoints;

  /// @brief Method LoadWaypoints, addr 0x1444868, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> LoadWaypoints();

  static inline ::GlobalNamespace::WaypointMover* New_ctor();

  /// @brief Method Start, addr 0x1444768, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x1444960, size 0x248, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_currentWaypointIndex() const;

  constexpr int32_t& __cordl_internal_get_currentWaypointIndex();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr float_t& __cordl_internal_get_speed();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_waypointContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_waypointContainer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_waypoints() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_waypoints();

  constexpr void __cordl_internal_set_currentWaypointIndex(int32_t value);

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr void __cordl_internal_set_waypointContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_waypoints(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x1444ba8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointMover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointMover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointMover(WaypointMover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointMover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointMover(WaypointMover const&) = delete;

  /// @brief Field waypointContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___waypointContainer;

  /// @brief Field waypoints, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___waypoints;

  /// @brief Field speed, offset: 0x28, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field currentWaypointIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ___currentWaypointIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointMover, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointMover, ___waypointContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointMover, ___waypoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointMover, ___speed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointMover, ___currentWaypointIndex) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointMover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointMover*, "", "WaypointMover");
