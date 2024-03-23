#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WindZone)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class WindZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WindZone);
// Type: ::WindZone
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WindZone*
class CORDL_TYPE WindZone : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <direction>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__direction_k__BackingField, put = __cordl_internal_set__direction_k__BackingField))::UnityEngine::Vector3 _direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__distance_k__BackingField, put = __cordl_internal_set__distance_k__BackingField)) float_t _distance_k__BackingField;

  /// @brief Field <origin>k__BackingField, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__origin_k__BackingField, put = __cordl_internal_set__origin_k__BackingField))::UnityEngine::Vector3 _origin_k__BackingField;

  /// @brief Field <speed>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__speed_k__BackingField, put = __cordl_internal_set__speed_k__BackingField)) float_t _speed_k__BackingField;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::Vector3 direction;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  __declspec(property(get = get_origin, put = set_origin))::UnityEngine::Vector3 origin;

  /// @brief Field particles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_particles, put = __cordl_internal_set_particles))::UnityW<::UnityEngine::ParticleSystem> particles;

  __declspec(property(get = get_speed, put = set_speed)) float_t speed;

  /// @brief Field worldCenter, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_worldCenter, put = __cordl_internal_set_worldCenter))::UnityEngine::Vector3 worldCenter;

  /// @brief Field worldHalfExtents, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_worldHalfExtents, put = __cordl_internal_set_worldHalfExtents))::UnityEngine::Vector3 worldHalfExtents;

  /// @brief Method DestroySelf, addr 0xf34cd0, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method GetDistanceRatio, addr 0xf35370, size 0x54, virtual false, abstract: false, final false
  inline float_t GetDistanceRatio(::UnityEngine::Vector3 position);

  /// @brief Method GetWindForce, addr 0xf350b0, size 0x2c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetWindForce(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity);

  /// @brief Method Initialize, addr 0xf34ad4, size 0x174, virtual false, abstract: false, final false
  inline void Initialize(float_t radius, float_t distance, float_t speed);

  /// @brief Method IsWithin, addr 0xf34e74, size 0x198, virtual false, abstract: false, final false
  inline bool IsWithin(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::WindZone* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__direction_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__direction_k__BackingField();

  constexpr float_t const& __cordl_internal_get__distance_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__distance_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__origin_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__origin_k__BackingField();

  constexpr float_t const& __cordl_internal_get__speed_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__speed_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldHalfExtents();

  constexpr void __cordl_internal_set__direction_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__distance_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__origin_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__speed_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_worldCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_worldHalfExtents(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf353c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_direction, addr 0xf35078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_distance, addr 0xf35090, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_origin, addr 0xf35060, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_origin();

  /// @brief Method get_speed, addr 0xf350a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method set_direction, addr 0xf35084, size 0xc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_distance, addr 0xf35098, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  /// @brief Method set_origin, addr 0xf3506c, size 0xc, virtual false, abstract: false, final false
  inline void set_origin(::UnityEngine::Vector3 value);

  /// @brief Method set_speed, addr 0xf350a8, size 0x8, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WindZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindZone(WindZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindZone(WindZone const&) = delete;

  /// @brief Field particles, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___particles;

  /// @brief Field <origin>k__BackingField, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____origin_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____direction_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____distance_k__BackingField;

  /// @brief Field <speed>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____speed_k__BackingField;

  /// @brief Field worldCenter, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldCenter;

  /// @brief Field worldHalfExtents, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldHalfExtents;

  /// @brief Field particleRadiusPadding offset 0xffffffff size 0x4
  static constexpr float_t particleRadiusPadding{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WindZone, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ___particles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ____origin_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ____direction_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ____distance_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ____speed_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ___worldCenter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindZone, ___worldHalfExtents) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WindZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindZone*, "", "WindZone");
