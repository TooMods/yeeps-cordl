#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticsZone)
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsZone);
// Type: ::CosmeticsZone
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsZone*
class CORDL_TYPE CosmeticsZone : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <hasAnyCosmetic>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__hasAnyCosmetic_k__BackingField, put = __cordl_internal_set__hasAnyCosmetic_k__BackingField)) bool _hasAnyCosmetic_k__BackingField;

  /// @brief Field banPickingUp, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_banPickingUp, put = __cordl_internal_set_banPickingUp)) bool banPickingUp;

  /// @brief Field cosmeticKeysOccupyingZones, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticKeysOccupyingZones, put = __cordl_internal_set_cosmeticKeysOccupyingZones))::ArrayW<::StringW, ::Array<::StringW>*> cosmeticKeysOccupyingZones;

  __declspec(property(get = get_hasAnyCosmetic, put = set_hasAnyCosmetic)) bool hasAnyCosmetic;

  /// @brief Field spannedZones, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_spannedZones,
                      put = __cordl_internal_set_spannedZones))::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> spannedZones;

  /// @brief Method ContainsZone, addr 0x158cc58, size 0x5c, virtual false, abstract: false, final false
  inline bool ContainsZone(::GlobalNamespace::CosmeticZone zone);

  /// @brief Method GetLocalBounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetLocalBounds(::UnityEngine::Transform* localTransform, ByRef<::UnityEngine::Vector3> halfExtents, ByRef<::UnityEngine::Vector3> localCenter);

  /// @brief Method GetPickupCosmeticKey, addr 0x158cd20, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW GetPickupCosmeticKey();

  /// @brief Method IsOverlap, addr 0x158cbc0, size 0x90, virtual false, abstract: false, final false
  inline bool IsOverlap(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> otherZones);

  /// @brief Method IsWithinZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  /// @brief Method IsWithinZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position, ByRef<float_t> distanceFromZoneSurface);

  static inline ::GlobalNamespace::CosmeticsZone* New_ctor();

  /// @brief Method SetCosmeticsKeysOccupyingZones, addr 0x158ccc8, size 0x58, virtual false, abstract: false, final false
  inline void SetCosmeticsKeysOccupyingZones(::ArrayW<::StringW, ::Array<::StringW>*> cosmeticKeysOccupyingZones);

  constexpr bool const& __cordl_internal_get__hasAnyCosmetic_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasAnyCosmetic_k__BackingField();

  constexpr bool const& __cordl_internal_get_banPickingUp() const;

  constexpr bool& __cordl_internal_get_banPickingUp();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_cosmeticKeysOccupyingZones() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_cosmeticKeysOccupyingZones();

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get_spannedZones() const;

  constexpr ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*>& __cordl_internal_get_spannedZones();

  constexpr void __cordl_internal_set__hasAnyCosmetic_k__BackingField(bool value);

  constexpr void __cordl_internal_set_banPickingUp(bool value);

  constexpr void __cordl_internal_set_cosmeticKeysOccupyingZones(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_spannedZones(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> value);

  /// @brief Method .ctor, addr 0x158b0c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasAnyCosmetic, addr 0x158ccb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasAnyCosmetic();

  /// @brief Method set_hasAnyCosmetic, addr 0x158ccbc, size 0xc, virtual false, abstract: false, final false
  inline void set_hasAnyCosmetic(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsZone(CosmeticsZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsZone(CosmeticsZone const&) = delete;

  /// @brief Field banPickingUp, offset: 0x18, size: 0x1, def value: None
  bool ___banPickingUp;

  /// @brief Field spannedZones, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> ___spannedZones;

  /// @brief Field cosmeticKeysOccupyingZones, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___cosmeticKeysOccupyingZones;

  /// @brief Field <hasAnyCosmetic>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____hasAnyCosmetic_k__BackingField;

  /// @brief Field sizePadding offset 0xffffffff size 0x4
  static constexpr float_t sizePadding{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsZone, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsZone, ___banPickingUp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsZone, ___spannedZones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsZone, ___cosmeticKeysOccupyingZones) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsZone, ____hasAnyCosmetic_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsZone*, "", "CosmeticsZone");
