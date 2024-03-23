#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FootprintManager)
namespace GlobalNamespace {
class Room;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
// Forward declare root types
namespace GlobalNamespace {
class FootprintManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FootprintManager);
// Type: ::FootprintManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FootprintManager*
class CORDL_TYPE FootprintManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::FootprintManager>> {
public:
  // Declarations
  /// @brief Field <shouldTrackFootprints>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__shouldTrackFootprints_k__BackingField, put = setStaticF__shouldTrackFootprints_k__BackingField)) bool _shouldTrackFootprints_k__BackingField;

  /// @brief Field footprintParticles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_footprintParticles, put = __cordl_internal_set_footprintParticles))::UnityW<::UnityEngine::ParticleSystem> footprintParticles;

  /// @brief Field particleRotationEulers, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_particleRotationEulers, put = setStaticF_particleRotationEulers))::UnityEngine::Vector3 particleRotationEulers;

  /// @brief Field particles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_particles,
                      put = __cordl_internal_set_particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> particles;

  /// @brief Method ClearAllFootprints, addr 0x29cb6e0, size 0x1c, virtual false, abstract: false, final false
  inline void ClearAllFootprints();

  static inline ::GlobalNamespace::FootprintManager* New_ctor();

  /// @brief Method OnDisable, addr 0x29cb38c, size 0x1cc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x29cb208, size 0x184, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnReceiveAddFootprint, addr 0x29cb97c, size 0x13c, virtual false, abstract: false, final false
  inline void OnReceiveAddFootprint(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method OnRoomLoaded, addr 0x29cb558, size 0xe8, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x29cb640, size 0xa0, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method SendTryAddFootprint, addr 0x29cb6fc, size 0x280, virtual false, abstract: false, final false
  inline void SendTryAddFootprint(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::UnityEngine::Collider* collider, float_t radius);

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_footprintParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_footprintParticles();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __cordl_internal_get_particles() const;

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __cordl_internal_get_particles();

  constexpr void __cordl_internal_set_footprintParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  /// @brief Method .ctor, addr 0x29cbab8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__shouldTrackFootprints_k__BackingField();

  static inline ::UnityEngine::Vector3 getStaticF_particleRotationEulers();

  /// @brief Method get_shouldTrackFootprints, addr 0x29cb154, size 0x58, virtual false, abstract: false, final false
  static inline bool get_shouldTrackFootprints();

  static inline void setStaticF__shouldTrackFootprints_k__BackingField(bool value);

  static inline void setStaticF_particleRotationEulers(::UnityEngine::Vector3 value);

  /// @brief Method set_shouldTrackFootprints, addr 0x29cb1ac, size 0x5c, virtual false, abstract: false, final false
  static inline void set_shouldTrackFootprints(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FootprintManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FootprintManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FootprintManager(FootprintManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FootprintManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FootprintManager(FootprintManager const&) = delete;

  /// @brief Field footprintParticles, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___footprintParticles;

  /// @brief Field particles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> ___particles;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Footprints: " };

  /// @brief Field footpringMinNormalY offset 0xffffffff size 0x4
  static constexpr float_t footpringMinNormalY{ 0.95 };

  /// @brief Field footprintLifetime offset 0xffffffff size 0x4
  static constexpr float_t footprintLifetime{ 20.0 };

  /// @brief Field footprintRadiiRandomness offset 0xffffffff size 0x4
  static constexpr float_t footprintRadiiRandomness{ 0.075 };

  /// @brief Field footprintSurfacePadding offset 0xffffffff size 0x4
  static constexpr float_t footprintSurfacePadding{ 0.01 };

  /// @brief Field footprintableTag offset 0xffffffff size 0x8
  static constexpr ::ConstString footprintableTag{ u"Footprintable" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FootprintManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FootprintManager, ___footprintParticles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootprintManager, ___particles) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FootprintManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FootprintManager*, "", "FootprintManager");
