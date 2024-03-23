#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WindManager)
namespace GlobalNamespace {
class WindZone;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class WindManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WindManager);
// Type: ::WindManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WindManager*
class CORDL_TYPE WindManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::WindManager>> {
public:
  // Declarations
  /// @brief Field windDriftForce, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_windDriftForce, put = __cordl_internal_set_windDriftForce)) float_t windDriftForce;

  /// @brief Field windForceDistanceFalloffCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_windForceDistanceFalloffCurve, put = __cordl_internal_set_windForceDistanceFalloffCurve))::UnityEngine::AnimationCurve* windForceDistanceFalloffCurve;

  /// @brief Field windForceMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_windForceMultiplier, put = __cordl_internal_set_windForceMultiplier)) float_t windForceMultiplier;

  /// @brief Field windZoneBlockerLayerMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_windZoneBlockerLayerMask, put = __cordl_internal_set_windZoneBlockerLayerMask))::UnityEngine::LayerMask windZoneBlockerLayerMask;

  /// @brief Field windZonePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_windZonePrefab, put = __cordl_internal_set_windZonePrefab))::UnityW<::UnityEngine::GameObject> windZonePrefab;

  /// @brief Field windZones, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_windZones, put = __cordl_internal_set_windZones))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>* windZones;

  /// @brief Method CreateWindZone, addr 0xf348ec, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::WindZone> CreateWindZone(::UnityEngine::Vector3 origin, ::UnityEngine::Quaternion rotation, float_t radius, float_t distance, float_t speed);

  /// @brief Method DestroyWindZone, addr 0xf34c48, size 0x88, virtual false, abstract: false, final false
  inline void DestroyWindZone(::GlobalNamespace::WindZone* windZone);

  /// @brief Method GetWindZones, addr 0xf34d3c, size 0x138, virtual false, abstract: false, final false
  inline void GetWindZones(::UnityEngine::Vector3 position, ::ArrayW<::GlobalNamespace::WindZone*, ::Array<::GlobalNamespace::WindZone*>*> buffer, ByRef<int32_t> count);

  static inline ::GlobalNamespace::WindManager* New_ctor();

  constexpr float_t const& __cordl_internal_get_windDriftForce() const;

  constexpr float_t& __cordl_internal_get_windDriftForce();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_windForceDistanceFalloffCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_windForceDistanceFalloffCurve() const;

  constexpr float_t const& __cordl_internal_get_windForceMultiplier() const;

  constexpr float_t& __cordl_internal_get_windForceMultiplier();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_windZoneBlockerLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_windZoneBlockerLayerMask();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_windZonePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_windZonePrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>*& __cordl_internal_get_windZones();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>*> const& __cordl_internal_get_windZones() const;

  constexpr void __cordl_internal_set_windDriftForce(float_t value);

  constexpr void __cordl_internal_set_windForceDistanceFalloffCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_windForceMultiplier(float_t value);

  constexpr void __cordl_internal_set_windZoneBlockerLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_windZonePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_windZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>* value);

  /// @brief Method .ctor, addr 0xf3500c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WindManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindManager(WindManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindManager(WindManager const&) = delete;

  /// @brief Field windZonePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___windZonePrefab;

  /// @brief Field windForceMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ___windForceMultiplier;

  /// @brief Field windDriftForce, offset: 0x24, size: 0x4, def value: None
  float_t ___windDriftForce;

  /// @brief Field windForceDistanceFalloffCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___windForceDistanceFalloffCurve;

  /// @brief Field windZoneBlockerLayerMask, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___windZoneBlockerLayerMask;

  /// @brief Field windZones, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>* ___windZones;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Wind: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WindManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windZonePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windForceMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windDriftForce) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windForceDistanceFalloffCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windZoneBlockerLayerMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindManager, ___windZones) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WindManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindManager*, "", "WindManager");
