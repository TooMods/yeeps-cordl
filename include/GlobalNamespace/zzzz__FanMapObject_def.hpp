#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FanMapObject)
namespace GlobalNamespace {
class WindZone;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class FanMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FanMapObject);
// Type: ::FanMapObject
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FanMapObject*
class CORDL_TYPE FanMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field ambientSoundKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientSoundKey, put = __cordl_internal_set_ambientSoundKey))::StringW ambientSoundKey;

  /// @brief Field bladeSpeed, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_bladeSpeed, put = __cordl_internal_set_bladeSpeed)) float_t bladeSpeed;

  /// @brief Field blades, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_blades, put = __cordl_internal_set_blades))::UnityW<::UnityEngine::Transform> blades;

  /// @brief Field windDistance, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_windDistance, put = __cordl_internal_set_windDistance)) float_t windDistance;

  /// @brief Field windRadius, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_windRadius, put = __cordl_internal_set_windRadius)) float_t windRadius;

  /// @brief Field windSpeed, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_windSpeed, put = __cordl_internal_set_windSpeed)) float_t windSpeed;

  /// @brief Field windZone, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_windZone, put = __cordl_internal_set_windZone))::UnityW<::GlobalNamespace::WindZone> windZone;

  /// @brief Method AllowsBatching, addr 0x3079bb8, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method Initialize, addr 0x3079764, size 0x21c, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::FanMapObject* New_ctor();

  /// @brief Method PrepareForDestroy, addr 0x3079980, size 0xa4, virtual true, abstract: false, final false
  inline void PrepareForDestroy();

  /// @brief Method SetRenderersActive, addr 0x3079c30, size 0x70, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3079bc0, size 0x70, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method Update, addr 0x3079b24, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get_ambientSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_ambientSoundKey();

  constexpr float_t const& __cordl_internal_get_bladeSpeed() const;

  constexpr float_t& __cordl_internal_get_bladeSpeed();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_blades() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_blades();

  constexpr float_t const& __cordl_internal_get_windDistance() const;

  constexpr float_t& __cordl_internal_get_windDistance();

  constexpr float_t const& __cordl_internal_get_windRadius() const;

  constexpr float_t& __cordl_internal_get_windRadius();

  constexpr float_t const& __cordl_internal_get_windSpeed() const;

  constexpr float_t& __cordl_internal_get_windSpeed();

  constexpr ::UnityW<::GlobalNamespace::WindZone> const& __cordl_internal_get_windZone() const;

  constexpr ::UnityW<::GlobalNamespace::WindZone>& __cordl_internal_get_windZone();

  constexpr void __cordl_internal_set_ambientSoundKey(::StringW value);

  constexpr void __cordl_internal_set_bladeSpeed(float_t value);

  constexpr void __cordl_internal_set_blades(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_windDistance(float_t value);

  constexpr void __cordl_internal_set_windRadius(float_t value);

  constexpr void __cordl_internal_set_windSpeed(float_t value);

  constexpr void __cordl_internal_set_windZone(::UnityW<::GlobalNamespace::WindZone> value);

  /// @brief Method .ctor, addr 0x3079ca0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FanMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FanMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FanMapObject(FanMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FanMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FanMapObject(FanMapObject const&) = delete;

  /// @brief Field windSpeed, offset: 0xd8, size: 0x4, def value: None
  float_t ___windSpeed;

  /// @brief Field windDistance, offset: 0xdc, size: 0x4, def value: None
  float_t ___windDistance;

  /// @brief Field windRadius, offset: 0xe0, size: 0x4, def value: None
  float_t ___windRadius;

  /// @brief Field blades, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___blades;

  /// @brief Field bladeSpeed, offset: 0xf0, size: 0x4, def value: None
  float_t ___bladeSpeed;

  /// @brief Field ambientSoundKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___ambientSoundKey;

  /// @brief Field windZone, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::WindZone> ___windZone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FanMapObject, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___windSpeed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___windDistance) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___windRadius) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___blades) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___bladeSpeed) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___ambientSoundKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FanMapObject, ___windZone) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FanMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FanMapObject*, "", "FanMapObject");
