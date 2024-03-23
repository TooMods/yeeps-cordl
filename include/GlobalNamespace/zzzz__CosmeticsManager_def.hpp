#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticsManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticsManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
class CosmeticFilter;
}
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
class CosmeticsZone;
}
namespace GlobalNamespace {
class RecolorableCosmeticData;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticDataRaw;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticFilterData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsManager;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticDataRaw;
}
namespace GlobalNamespace {
struct __CosmeticsManager__CosmeticFilterData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsManager);
MARK_VAL_T(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw);
MARK_VAL_T(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData);
// Type: ::CosmeticDataRaw
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CosmeticsManager::CosmeticDataRaw
struct CORDL_TYPE __CosmeticsManager__CosmeticDataRaw {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsManager__CosmeticDataRaw();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None },
  // CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "zones", ty:
  // "::ArrayW<::GlobalNamespace::CosmeticZone,::Array<::GlobalNamespace::CosmeticZone>*>", modifiers: "", def_value: None }, CppParam { name: "invisibleToSelf", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "allowRecoloring", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "recolorFilterColorKey", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __CosmeticsManager__CosmeticDataRaw(::StringW key, ::UnityW<::UnityEngine::Mesh> mesh, ::UnityW<::UnityEngine::Material> material,
                                                ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones, bool invisibleToSelf, bool allowRecoloring,
                                                ::StringW recolorFilterColorKey) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field mesh, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field zones, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones;

  /// @brief Field invisibleToSelf, offset: 0x20, size: 0x1, def value: None
  bool invisibleToSelf;

  /// @brief Field allowRecoloring, offset: 0x21, size: 0x1, def value: None
  bool allowRecoloring;

  /// @brief Field recolorFilterColorKey, offset: 0x28, size: 0x8, def value: None
  ::StringW recolorFilterColorKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, mesh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, zones) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, invisibleToSelf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, allowRecoloring) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, recolorFilterColorKey) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticFilterData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CosmeticsManager::CosmeticFilterData
struct CORDL_TYPE __CosmeticsManager__CosmeticFilterData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CosmeticsManager__CosmeticFilterData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "zones", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*", modifiers: "", def_value: None }, CppParam { name: "restrictive", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "manequinPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }]
  constexpr __CosmeticsManager__CosmeticFilterData(::StringW key, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* zones, bool restrictive,
                                                   ::UnityW<::UnityEngine::Sprite> icon, ::UnityW<::UnityEngine::GameObject> manequinPrefab) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field zones, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* zones;

  /// @brief Field restrictive, offset: 0x10, size: 0x1, def value: None
  bool restrictive;

  /// @brief Field icon, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> icon;

  /// @brief Field manequinPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> manequinPrefab;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, zones) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, restrictive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, icon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, manequinPrefab) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CosmeticsManager
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsManager*
class CORDL_TYPE CosmeticsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::CosmeticsManager>> {
public:
  // Declarations
  using CosmeticDataRaw = ::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw;

  using CosmeticFilterData = ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData;

  /// @brief Field armZones, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_armZones, put = setStaticF_armZones))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* armZones;

  /// @brief Field cosmeticDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cosmeticDatas, put = setStaticF_cosmeticDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* cosmeticDatas;

  /// @brief Field cosmeticDatasRaw, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_cosmeticDatasRaw,
      put = __cordl_internal_set_cosmeticDatasRaw))::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> cosmeticDatasRaw;

  /// @brief Field cosmeticFilterDatas, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticFilterDatas,
                      put = __cordl_internal_set_cosmeticFilterDatas))::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData,
                                                                               ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> cosmeticFilterDatas;

  /// @brief Field cosmeticFilters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cosmeticFilters,
                             put = setStaticF_cosmeticFilters))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>* cosmeticFilters;

  /// @brief Field cosmeticPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticPrefab, put = __cordl_internal_set_cosmeticPrefab))::UnityW<::UnityEngine::GameObject> cosmeticPrefab;

  /// @brief Field defaultActiveCosmeticsKeys, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultActiveCosmeticsKeys,
                      put = __cordl_internal_set_defaultActiveCosmeticsKeys))::System::Collections::Generic::List_1<::StringW>* defaultActiveCosmeticsKeys;

  /// @brief Field defaultCosmeticsMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultCosmeticsMaterial, put = __cordl_internal_set_defaultCosmeticsMaterial))::UnityW<::UnityEngine::Material> defaultCosmeticsMaterial;

  /// @brief Field headZones, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_headZones, put = setStaticF_headZones))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* headZones;

  /// @brief Field masterPlayerCosmeticsZones, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayerCosmeticsZones, put = __cordl_internal_set_masterPlayerCosmeticsZones))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>* masterPlayerCosmeticsZones;

  /// @brief Field recolorableCosmeticDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_recolorableCosmeticDatas,
                             put = setStaticF_recolorableCosmeticDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>* recolorableCosmeticDatas;

  /// @brief Field unfilteredCosmeticFilter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unfilteredCosmeticFilter, put = setStaticF_unfilteredCosmeticFilter))::GlobalNamespace::CosmeticFilter* unfilteredCosmeticFilter;

  /// @brief Field unfilteredCosmeticFilterData, offset 0x50, size 0x28
  __declspec(property(get = __cordl_internal_get_unfilteredCosmeticFilterData,
                      put = __cordl_internal_set_unfilteredCosmeticFilterData))::GlobalNamespace::__CosmeticsManager__CosmeticFilterData unfilteredCosmeticFilterData;

  /// @brief Field zipperCosmeticDatasRaw, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperCosmeticDatasRaw,
                      put = __cordl_internal_set_zipperCosmeticDatasRaw))::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw,
                                                                                  ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> zipperCosmeticDatasRaw;

  /// @brief Field zipperPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperPrefab, put = __cordl_internal_set_zipperPrefab))::UnityW<::UnityEngine::GameObject> zipperPrefab;

  /// @brief Method AppendCosmeticDatasFromRawList, addr 0x2761ed0, size 0x364, virtual false, abstract: false, final false
  static inline void AppendCosmeticDatasFromRawList(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* cosmeticDatas,
                                                    ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> cosmeticDatasRaw,
                                                    ::UnityEngine::Material* fallbackMaterial);

  /// @brief Method BuildColoredCosmeticsKey, addr 0x2761738, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW BuildColoredCosmeticsKey(::StringW baseCosmeticsKey, ::StringW colorKey);

  /// @brief Method BuildCosmeticDatasDictionary, addr 0x2761d70, size 0x160, virtual false, abstract: false, final false
  static inline void BuildCosmeticDatasDictionary();

  /// @brief Method BuildCosmeticFiltersDictionary, addr 0x2765150, size 0x1ac, virtual false, abstract: false, final false
  static inline void BuildCosmeticFiltersDictionary();

  /// @brief Method FilterCosmeticsUsingAllowedZones, addr 0x276341c, size 0x2a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
  FilterCosmeticsUsingAllowedZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics,
                                   ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* allowedZones);

  /// @brief Method FilterCosmeticsUsingBannedZones, addr 0x27636bc, size 0x2a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
  FilterCosmeticsUsingBannedZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics,
                                  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* bannedZones);

  /// @brief Method FilterHeadCosmetics, addr 0x2763960, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* FilterHeadCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  /// @brief Method FilterVisibleToSelfCosmetics, addr 0x27639d4, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
  FilterVisibleToSelfCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  /// @brief Method FilterVisibleToSelfNoArmsCosmetics, addr 0x2763bf4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
  FilterVisibleToSelfNoArmsCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  /// @brief Method GetConflicts, addr 0x2762fe8, size 0x434, virtual false, abstract: false, final false
  static inline bool GetConflicts(::StringW cosmeticKeyToAdd, ::System::Collections::Generic::List_1<::StringW>* equippedCosmeticKeys,
                                  ByRef<::System::Collections::Generic::List_1<::StringW>*> conflictingEquippedCosmeticKeys);

  /// @brief Method GetCosmeticsFromKeys, addr 0x2762ca0, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* GetCosmeticsFromKeys(::ArrayW<::StringW, ::Array<::StringW>*> cosmeticKeys);

  /// @brief Method GetCosmeticsFromKeys, addr 0x276298c, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* GetCosmeticsFromKeys(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys);

  /// @brief Method GetDefaultActiveCosmeticsKeys, addr 0x276264c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetDefaultActiveCosmeticsKeys();

  /// @brief Method GetKeysFromCosmetics, addr 0x2762ec8, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetKeysFromCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  /// @brief Method GetPickupZone, addr 0x2764e0c, size 0x344, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::CosmeticsZone> GetPickupZone(::UnityEngine::Vector3 position);

  /// @brief Method GetUnfilteredCosmeticFilter, addr 0x27653d8, size 0x10c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CosmeticFilter* GetUnfilteredCosmeticFilter();

  /// @brief Method IsWithinAnyZone, addr 0x2764b1c, size 0x2f0, virtual false, abstract: false, final false
  inline bool IsWithinAnyZone(::UnityEngine::Vector3 position);

  /// @brief Method IsWithinZone, addr 0x276493c, size 0x1e0, virtual false, abstract: false, final false
  inline bool IsWithinZone(::GlobalNamespace::CosmeticZone zone, ::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::CosmeticsManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x2762548, size 0xf4, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnActiveCosmeticsUpdated, addr 0x276263c, size 0x10, virtual false, abstract: false, final false
  inline void OnActiveCosmeticsUpdated(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys, ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys);

  /// @brief Method ParseCosmeticsKey, addr 0x2762234, size 0xb4, virtual false, abstract: false, final false
  static inline void ParseCosmeticsKey(::StringW cosmeticKey, ByRef<::StringW> baseCosmeticsKey, ByRef<::StringW> colorKey);

  /// @brief Method RecalculateCosmeticsOccupyingZones, addr 0x276403c, size 0x900, virtual false, abstract: false, final false
  inline void RecalculateCosmeticsOccupyingZones(::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys);

  /// @brief Method RecolorCosmeticsMesh, addr 0x2761350, size 0x3e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> RecolorCosmeticsMesh(::UnityEngine::Mesh* mesh, ::StringW colorKey, ::StringW filterColorKey);

  /// @brief Method SetMasterPlayerCosmeticsZones, addr 0x2763c58, size 0x3e4, virtual false, abstract: false, final false
  inline void SetMasterPlayerCosmeticsZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>* cosmeticsZones);

  /// @brief Method Start, addr 0x27623f4, size 0x154, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCreateCosmetic, addr 0x2762654, size 0x338, virtual false, abstract: false, final false
  inline bool TryCreateCosmetic(::GlobalNamespace::CosmeticData* cosmeticData, ::UnityEngine::Transform* container, ::UnityEngine::SkinnedMeshRenderer* avatarReference,
                                ::UnityEngine::Transform* zipperAnchor, ByRef<::UnityEngine::GameObject*> cosmetic);

  /// @brief Method TryGetColorVariants, addr 0x27622e8, size 0x10c, virtual false, abstract: false, final false
  static inline bool TryGetColorVariants(::StringW key, ByRef<::System::Collections::Generic::List_1<::StringW>*> colorVariants);

  /// @brief Method TryGetCosmeticData, addr 0x2761bb8, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TryGetCosmeticData(::StringW key, ByRef<::GlobalNamespace::CosmeticData*> cosmeticData);

  /// @brief Method TryGetCosmeticFilter, addr 0x27652fc, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryGetCosmeticFilter(::StringW key, ByRef<::GlobalNamespace::CosmeticFilter*> cosmeticFilter);

  /// @brief Method <Start>b__18_0, addr 0x27659a0, size 0x88, virtual false, abstract: false, final false
  inline void _Start_b__18_0(::GlobalNamespace::AccountData* accountData);

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> const& __cordl_internal_get_cosmeticDatasRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>& __cordl_internal_get_cosmeticDatasRaw();

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> const&
  __cordl_internal_get_cosmeticFilterDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*>& __cordl_internal_get_cosmeticFilterDatas();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cosmeticPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cosmeticPrefab();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_defaultActiveCosmeticsKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_defaultActiveCosmeticsKeys() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultCosmeticsMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultCosmeticsMaterial();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>*&
  __cordl_internal_get_masterPlayerCosmeticsZones();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>*> const&
  __cordl_internal_get_masterPlayerCosmeticsZones() const;

  constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData const& __cordl_internal_get_unfilteredCosmeticFilterData() const;

  constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData& __cordl_internal_get_unfilteredCosmeticFilterData();

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> const&
  __cordl_internal_get_zipperCosmeticDatasRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>& __cordl_internal_get_zipperCosmeticDatasRaw();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_zipperPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_zipperPrefab();

  constexpr void __cordl_internal_set_cosmeticDatasRaw(::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> value);

  constexpr void
  __cordl_internal_set_cosmeticFilterDatas(::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> value);

  constexpr void __cordl_internal_set_cosmeticPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_defaultActiveCosmeticsKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_defaultCosmeticsMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_masterPlayerCosmeticsZones(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>* value);

  constexpr void __cordl_internal_set_unfilteredCosmeticFilterData(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData value);

  constexpr void __cordl_internal_set_zipperCosmeticDatasRaw(::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> value);

  constexpr void __cordl_internal_set_zipperPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x27654e4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* getStaticF_armZones();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* getStaticF_cosmeticDatas();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>* getStaticF_cosmeticFilters();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* getStaticF_headZones();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>* getStaticF_recolorableCosmeticDatas();

  static inline ::GlobalNamespace::CosmeticFilter* getStaticF_unfilteredCosmeticFilter();

  static inline void setStaticF_armZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

  static inline void setStaticF_cosmeticDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* value);

  static inline void setStaticF_cosmeticFilters(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>* value);

  static inline void setStaticF_headZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

  static inline void setStaticF_recolorableCosmeticDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>* value);

  static inline void setStaticF_unfilteredCosmeticFilter(::GlobalNamespace::CosmeticFilter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsManager(CosmeticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsManager(CosmeticsManager const&) = delete;

  /// @brief Field cosmeticPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___cosmeticPrefab;

  /// @brief Field cosmeticDatasRaw, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> ___cosmeticDatasRaw;

  /// @brief Field zipperPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___zipperPrefab;

  /// @brief Field zipperCosmeticDatasRaw, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> ___zipperCosmeticDatasRaw;

  /// @brief Field defaultCosmeticsMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___defaultCosmeticsMaterial;

  /// @brief Field defaultActiveCosmeticsKeys, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___defaultActiveCosmeticsKeys;

  /// @brief Field masterPlayerCosmeticsZones, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>* ___masterPlayerCosmeticsZones;

  /// @brief Field unfilteredCosmeticFilterData, offset: 0x50, size: 0x28, def value: None
  ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData ___unfilteredCosmeticFilterData;

  /// @brief Field cosmeticFilterDatas, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> ___cosmeticFilterDatas;

  /// @brief Field boundsInflateRatio offset 0xffffffff size 0x4
  static constexpr float_t boundsInflateRatio{ 1.0 };

  /// @brief Field colorKeyEndChar offset 0xffffffff size 0x2
  static constexpr char16_t colorKeyEndChar{ u']' };

  /// @brief Field colorKeyStartChar offset 0xffffffff size 0x2
  static constexpr char16_t colorKeyStartChar{ u'[' };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Cosmetics: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsManager, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___cosmeticPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___cosmeticDatasRaw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___zipperPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___zipperCosmeticDatasRaw) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___defaultCosmeticsMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___defaultActiveCosmeticsKeys) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___masterPlayerCosmeticsZones) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___unfilteredCosmeticFilterData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsManager, ___cosmeticFilterDatas) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsManager*, "", "CosmeticsManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, "", "CosmeticsManager/CosmeticDataRaw");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, "", "CosmeticsManager/CosmeticFilterData");
