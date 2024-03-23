#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableEmbeddingItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ThrowableWeaponItem)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableWeaponItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableWeaponItem);
// Type: ::ThrowableWeaponItem
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableWeaponItem*
class CORDL_TYPE ThrowableWeaponItem : public ::GlobalNamespace::ThrowableEmbeddingItem {
public:
  // Declarations
  /// @brief Field embedKillSoundEffectKey, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_embedKillSoundEffectKey, put = __cordl_internal_set_embedKillSoundEffectKey))::StringW embedKillSoundEffectKey;

  /// @brief Method CanStabPlayer, addr 0x2f681f0, size 0x38, virtual true, abstract: false, final false
  inline bool CanStabPlayer(::GlobalNamespace::Player* player);

  /// @brief Method DestroysMapObjectsOnHit, addr 0x2f68180, size 0x8, virtual true, abstract: false, final false
  inline bool DestroysMapObjectsOnHit();

  static inline ::GlobalNamespace::ThrowableWeaponItem* New_ctor();

  /// @brief Method OnDestroyedStuffedMapObject, addr 0x2f68188, size 0x68, virtual true, abstract: false, final false
  inline void OnDestroyedStuffedMapObject(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method OnEmbedded, addr 0x2f68228, size 0x400, virtual true, abstract: false, final false
  inline void OnEmbedded(::UnityEngine::Vector3 embedPosition, ::GlobalNamespace::Player* hitPlayer, bool isStab);

  constexpr ::StringW const& __cordl_internal_get_embedKillSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_embedKillSoundEffectKey();

  constexpr void __cordl_internal_set_embedKillSoundEffectKey(::StringW value);

  /// @brief Method .ctor, addr 0x2f68628, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableWeaponItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableWeaponItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableWeaponItem(ThrowableWeaponItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableWeaponItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableWeaponItem(ThrowableWeaponItem const&) = delete;

  /// @brief Field embedKillSoundEffectKey, offset: 0x170, size: 0x8, def value: None
  ::StringW ___embedKillSoundEffectKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableWeaponItem, 0x178>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableWeaponItem, ___embedKillSoundEffectKey) == 0x170, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableWeaponItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableWeaponItem*, "", "ThrowableWeaponItem");
