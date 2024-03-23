#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticsPreviewAvatar)
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
class CosmeticsZone;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsPreviewAvatar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsPreviewAvatar);
// Type: ::CosmeticsPreviewAvatar
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsPreviewAvatar*
class CORDL_TYPE CosmeticsPreviewAvatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cosmeticsZones, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsZones,
                      put = __cordl_internal_set_cosmeticsZones))::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> cosmeticsZones;

  /// @brief Method MoveToFit, addr 0x158c5b4, size 0x60c, virtual false, abstract: false, final false
  inline void MoveToFit(::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> spannedZones, float_t boundingRadius);

  static inline ::GlobalNamespace::CosmeticsPreviewAvatar* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> const& __cordl_internal_get_cosmeticsZones() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*>& __cordl_internal_get_cosmeticsZones();

  constexpr void __cordl_internal_set_cosmeticsZones(::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> value);

  /// @brief Method .ctor, addr 0x158cc50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsPreviewAvatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsPreviewAvatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsPreviewAvatar(CosmeticsPreviewAvatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsPreviewAvatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsPreviewAvatar(CosmeticsPreviewAvatar const&) = delete;

  /// @brief Field cosmeticsZones, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CosmeticsZone>, ::Array<::UnityW<::GlobalNamespace::CosmeticsZone>>*> ___cosmeticsZones;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsPreviewAvatar, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsPreviewAvatar, ___cosmeticsZones) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsPreviewAvatar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsPreviewAvatar*, "", "CosmeticsPreviewAvatar");
