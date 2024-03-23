#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DestructiveProjectile_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PelletProjectile)
namespace GlobalNamespace {
class MapObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PelletProjectile;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PelletProjectile);
// Type: ::PelletProjectile
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PelletProjectile*
class CORDL_TYPE PelletProjectile : public ::GlobalNamespace::DestructiveProjectile {
public:
  // Declarations
  /// @brief Field hitSoundKey, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_hitSoundKey, put = __cordl_internal_set_hitSoundKey))::StringW hitSoundKey;

  /// @brief Method DestroySelf, addr 0x1756c24, size 0xfc, virtual true, abstract: false, final false
  inline void DestroySelf(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::PelletProjectile* New_ctor();

  /// @brief Method OnHitMapObject, addr 0x1756b00, size 0x124, virtual true, abstract: false, final false
  inline void OnHitMapObject(::GlobalNamespace::MapObject* mapObject);

  constexpr ::StringW const& __cordl_internal_get_hitSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_hitSoundKey();

  constexpr void __cordl_internal_set_hitSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x1756d20, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PelletProjectile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PelletProjectile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PelletProjectile(PelletProjectile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PelletProjectile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PelletProjectile(PelletProjectile const&) = delete;

  /// @brief Field hitSoundKey, offset: 0x60, size: 0x8, def value: None
  ::StringW ___hitSoundKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PelletProjectile, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PelletProjectile, ___hitSoundKey) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PelletProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PelletProjectile*, "", "PelletProjectile");
