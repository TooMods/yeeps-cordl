#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerManager)
namespace GlobalNamespace {
class AvatarIdentity;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct __PlayerManager__ColorRange;
}
namespace GlobalNamespace {
class __PlayerManager__OnInteractionLockUpdated;
}
namespace GlobalNamespace {
class __PlayerManager__OnPlayerCreated;
}
namespace GlobalNamespace {
class __PlayerManager__OnPlayerDestroyed;
}
namespace GlobalNamespace {
struct __PlayerManager__StatusEffectData;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerManager;
}
namespace GlobalNamespace {
class __PlayerManager__OnInteractionLockUpdated;
}
namespace GlobalNamespace {
class __PlayerManager__OnPlayerCreated;
}
namespace GlobalNamespace {
class __PlayerManager__OnPlayerDestroyed;
}
namespace GlobalNamespace {
struct __PlayerManager__ColorRange;
}
namespace GlobalNamespace {
struct __PlayerManager__StatusEffectData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerManager);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerManager__OnPlayerCreated);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerManager__OnPlayerDestroyed);
MARK_VAL_T(::GlobalNamespace::__PlayerManager__ColorRange);
MARK_VAL_T(::GlobalNamespace::__PlayerManager__StatusEffectData);
// Type: ::OnPlayerCreated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerManager::OnPlayerCreated*
class CORDL_TYPE __PlayerManager__OnPlayerCreated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174ad10, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Player* player, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174ad30, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174acfc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Player* player);

  static inline ::GlobalNamespace::__PlayerManager__OnPlayerCreated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174abd0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerManager__OnPlayerCreated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnPlayerCreated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerManager__OnPlayerCreated(__PlayerManager__OnPlayerCreated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnPlayerCreated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerManager__OnPlayerCreated(__PlayerManager__OnPlayerCreated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerManager__OnPlayerCreated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerDestroyed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerManager::OnPlayerDestroyed*
class CORDL_TYPE __PlayerManager__OnPlayerDestroyed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174ae24, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174ae44, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174ae10, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW userID);

  static inline ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174ad3c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerManager__OnPlayerDestroyed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnPlayerDestroyed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerManager__OnPlayerDestroyed(__PlayerManager__OnPlayerDestroyed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnPlayerDestroyed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerManager__OnPlayerDestroyed(__PlayerManager__OnPlayerDestroyed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StatusEffectData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerManager::StatusEffectData
struct CORDL_TYPE __PlayerManager__StatusEffectData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerManager__StatusEffectData();

  // Ctor Parameters [CppParam { name: "hasColor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "overlayPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __PlayerManager__StatusEffectData(bool hasColor, ::UnityEngine::Color color, ::UnityW<::UnityEngine::GameObject> overlayPrefab) noexcept;

  /// @brief Field hasColor, offset: 0x0, size: 0x1, def value: None
  bool hasColor;

  /// @brief Field color, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field overlayPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> overlayPrefab;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerManager__StatusEffectData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerManager__StatusEffectData, hasColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerManager__StatusEffectData, color) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerManager__StatusEffectData, overlayPrefab) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnInteractionLockUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerManager::OnInteractionLockUpdated*
class CORDL_TYPE __PlayerManager__OnInteractionLockUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174af2c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newLock, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174afb4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174af14, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newLock);

  static inline ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174ae50, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerManager__OnInteractionLockUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnInteractionLockUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerManager__OnInteractionLockUpdated(__PlayerManager__OnInteractionLockUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerManager__OnInteractionLockUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerManager__OnInteractionLockUpdated(__PlayerManager__OnInteractionLockUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorRange
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerManager::ColorRange
struct CORDL_TYPE __PlayerManager__ColorRange {
public:
  // Declarations
  /// @brief Method GetRandom, addr 0x174afd4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetRandom();

  /// @brief Method .ctor, addr 0x174afc0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color min, ::UnityEngine::Color max);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerManager__ColorRange();

  // Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr __PlayerManager__ColorRange(::UnityEngine::Color min, ::UnityEngine::Color max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color min;

  /// @brief Field max, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerManager__ColorRange, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerManager__ColorRange, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerManager__ColorRange, max) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerManager
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerManager*
class CORDL_TYPE PlayerManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PlayerManager>> {
public:
  // Declarations
  using ColorRange = ::GlobalNamespace::__PlayerManager__ColorRange;

  using OnInteractionLockUpdated = ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated;

  using OnPlayerCreated = ::GlobalNamespace::__PlayerManager__OnPlayerCreated;

  using OnPlayerDestroyed = ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed;

  using StatusEffectData = ::GlobalNamespace::__PlayerManager__StatusEffectData;

  /// @brief Field <hasInteractionLock>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasInteractionLock_k__BackingField, put = setStaticF__hasInteractionLock_k__BackingField)) bool _hasInteractionLock_k__BackingField;

  /// @brief Field alwaysVisibleMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_alwaysVisibleMaterial, put = __cordl_internal_set_alwaysVisibleMaterial))::UnityW<::UnityEngine::Material> alwaysVisibleMaterial;

  /// @brief Field avatarIdentities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_avatarIdentities,
                             put = setStaticF_avatarIdentities))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>* avatarIdentities;

  /// @brief Field creativeModeAlwaysVisibleColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_creativeModeAlwaysVisibleColor, put = __cordl_internal_set_creativeModeAlwaysVisibleColor))::UnityEngine::Color creativeModeAlwaysVisibleColor;

  /// @brief Field defaultAvatarIdentity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultAvatarIdentity, put = setStaticF_defaultAvatarIdentity))::GlobalNamespace::AvatarIdentity* defaultAvatarIdentity;

  /// @brief Field defaultEyeColor, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultEyeColor, put = __cordl_internal_set_defaultEyeColor))::UnityEngine::Color defaultEyeColor;

  /// @brief Field defaultSkinColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultSkinColor, put = __cordl_internal_set_defaultSkinColor))::UnityEngine::Color defaultSkinColor;

  /// @brief Field eyeColorRanges, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeColorRanges,
                      put = __cordl_internal_set_eyeColorRanges))::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> eyeColorRanges;

  /// @brief Field eyeMaterial, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeMaterial, put = __cordl_internal_set_eyeMaterial))::UnityW<::UnityEngine::Material> eyeMaterial;

  /// @brief Field hasLoadedMap, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLoadedMap, put = __cordl_internal_set_hasLoadedMap)) bool hasLoadedMap;

  __declspec(property(get = get_hasMasterPlayer)) bool hasMasterPlayer;

  /// @brief Field hideAndSeekAlwaysVisibleColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_hideAndSeekAlwaysVisibleColor, put = __cordl_internal_set_hideAndSeekAlwaysVisibleColor))::UnityEngine::Color hideAndSeekAlwaysVisibleColor;

  /// @brief Field killedColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_killedColor, put = __cordl_internal_set_killedColor))::UnityEngine::Color killedColor;

  /// @brief Field masterPlayer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field masterPlayerRigPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayerRigPrefab, put = __cordl_internal_set_masterPlayerRigPrefab))::UnityW<::UnityEngine::GameObject> masterPlayerRigPrefab;

  /// @brief Field onInteractionLockUpdatedCallbacks, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_onInteractionLockUpdatedCallbacks,
                      put = __cordl_internal_set_onInteractionLockUpdatedCallbacks))::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* onInteractionLockUpdatedCallbacks;

  /// @brief Field onMasterPlayerCreatedCallbacks, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_onMasterPlayerCreatedCallbacks,
                      put = __cordl_internal_set_onMasterPlayerCreatedCallbacks))::GlobalNamespace::__PlayerManager__OnPlayerCreated* onMasterPlayerCreatedCallbacks;

  /// @brief Field onPlayerCreatedCallbacks, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerCreatedCallbacks,
                      put = __cordl_internal_set_onPlayerCreatedCallbacks))::GlobalNamespace::__PlayerManager__OnPlayerCreated* onPlayerCreatedCallbacks;

  /// @brief Field onPlayerDestroyedCallbacks, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerDestroyedCallbacks,
                      put = __cordl_internal_set_onPlayerDestroyedCallbacks))::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* onPlayerDestroyedCallbacks;

  /// @brief Field players, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_players, put = __cordl_internal_set_players))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* players;

  /// @brief Field puppetPlayerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_puppetPlayerPrefab, put = __cordl_internal_set_puppetPlayerPrefab))::UnityW<::UnityEngine::GameObject> puppetPlayerPrefab;

  /// @brief Field skinColorRanges, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_skinColorRanges,
                      put = __cordl_internal_set_skinColorRanges))::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> skinColorRanges;

  /// @brief Field skinMaterial, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_skinMaterial, put = __cordl_internal_set_skinMaterial))::UnityW<::UnityEngine::Material> skinMaterial;

  /// @brief Field statusEffectDatas, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get_statusEffectDatas,
      put = __cordl_internal_set_statusEffectDatas))::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> statusEffectDatas;

  /// @brief Field statusEffectReference, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_statusEffectReference, put = __cordl_internal_set_statusEffectReference))::GlobalNamespace::__Player__StatusEffect statusEffectReference;

  /// @brief Method CreateMasterPlayer, addr 0x1075b30, size 0x24c, virtual false, abstract: false, final false
  inline void CreateMasterPlayer(::GlobalNamespace::PlayerData playerData);

  /// @brief Method CreatePuppetPlayer, addr 0x1075d7c, size 0x1c0, virtual false, abstract: false, final false
  inline void CreatePuppetPlayer(::GlobalNamespace::PlayerData playerData);

  /// @brief Method DestroyPlayer, addr 0x1075f44, size 0x194, virtual false, abstract: false, final false
  inline void DestroyPlayer(::StringW userID);

  /// @brief Method GenerateAvatarIdentityWithoutSaving, addr 0x10734b8, size 0x15c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AvatarIdentity* GenerateAvatarIdentityWithoutSaving(::UnityEngine::Color skinColor, ::UnityEngine::Color eyeColor);

  /// @brief Method GenerateNewAvatarIdentityData, addr 0x10767d4, size 0xc8, virtual false, abstract: false, final false
  inline void GenerateNewAvatarIdentityData(ByRef<::UnityEngine::Color> skinColor, ByRef<::UnityEngine::Color> eyeColor);

  /// @brief Method GetDefaultAvatarIdentity, addr 0x1073614, size 0x12c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AvatarIdentity* GetDefaultAvatarIdentity();

  /// @brief Method GetPlayerSpawnPosition, addr 0x1076354, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPlayerSpawnPosition();

  /// @brief Method GetPlayers, addr 0x1076718, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* GetPlayers();

  /// @brief Method GetStatusEffectData, addr 0x1067d44, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlayerManager__StatusEffectData GetStatusEffectData(::GlobalNamespace::__Player__StatusEffect statusEffect);

  static inline ::GlobalNamespace::PlayerManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x1075a9c, size 0x94, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnIsCreativeModeUpdated, addr 0x10754dc, size 0x1a8, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnMapLoaded, addr 0x1075684, size 0x19c, virtual false, abstract: false, final false
  inline void OnMapLoaded(bool isLoaded);

  /// @brief Method OnPlayerDataAdded, addr 0x1075480, size 0x5c, virtual false, abstract: false, final false
  inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataModified, addr 0x10760d8, size 0x19c, virtual false, abstract: false, final false
  inline void OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  /// @brief Method OnPlayerDataRemoved, addr 0x1075f3c, size 0x8, virtual false, abstract: false, final false
  inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerSwitchedUserIDs, addr 0x1076274, size 0xe0, virtual false, abstract: false, final false
  inline void OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method RegisterPlayer, addr 0x1076448, size 0x24c, virtual false, abstract: false, final false
  inline void RegisterPlayer(::StringW userID, ::GlobalNamespace::Player* player);

  /// @brief Method SaveAvatarIdentity, addr 0x106c624, size 0x264, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AvatarIdentity* SaveAvatarIdentity(::StringW accountID, ::UnityEngine::Color skinColor, ::UnityEngine::Color eyeColor);

  /// @brief Method SetInteractionLock, addr 0x1075820, size 0x27c, virtual false, abstract: false, final false
  static inline void SetInteractionLock(bool newLock);

  /// @brief Method Start, addr 0x1074da8, size 0x6d8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetAvatarIdentity, addr 0x106c578, size 0xac, virtual false, abstract: false, final false
  inline bool TryGetAvatarIdentity(::StringW accountID, ByRef<::GlobalNamespace::AvatarIdentity*> avatarIdentity);

  /// @brief Method TryGetMasterPlayer, addr 0x105f54c, size 0xc, virtual false, abstract: false, final false
  inline bool TryGetMasterPlayer(ByRef<::GlobalNamespace::MasterPlayer*> player);

  /// @brief Method TryGetPlayer, addr 0x1076694, size 0x84, virtual false, abstract: false, final false
  inline bool TryGetPlayer(::StringW userID, ByRef<::GlobalNamespace::Player*> player);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_alwaysVisibleMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_alwaysVisibleMaterial();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_creativeModeAlwaysVisibleColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_creativeModeAlwaysVisibleColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultEyeColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultEyeColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultSkinColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultSkinColor();

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> const& __cordl_internal_get_eyeColorRanges() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*>& __cordl_internal_get_eyeColorRanges();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_eyeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_eyeMaterial();

  constexpr bool const& __cordl_internal_get_hasLoadedMap() const;

  constexpr bool& __cordl_internal_get_hasLoadedMap();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_hideAndSeekAlwaysVisibleColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_hideAndSeekAlwaysVisibleColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_killedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_killedColor();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_masterPlayerRigPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_masterPlayerRigPrefab();

  constexpr ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*& __cordl_internal_get_onInteractionLockUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*> const& __cordl_internal_get_onInteractionLockUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerManager__OnPlayerCreated*& __cordl_internal_get_onMasterPlayerCreatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerCreated*> const& __cordl_internal_get_onMasterPlayerCreatedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerManager__OnPlayerCreated*& __cordl_internal_get_onPlayerCreatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerCreated*> const& __cordl_internal_get_onPlayerCreatedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*& __cordl_internal_get_onPlayerDestroyedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*> const& __cordl_internal_get_onPlayerDestroyedCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>*& __cordl_internal_get_players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>*> const& __cordl_internal_get_players() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_puppetPlayerPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_puppetPlayerPrefab();

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> const& __cordl_internal_get_skinColorRanges() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*>& __cordl_internal_get_skinColorRanges();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_skinMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_skinMaterial();

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> const& __cordl_internal_get_statusEffectDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*>& __cordl_internal_get_statusEffectDatas();

  constexpr ::GlobalNamespace::__Player__StatusEffect const& __cordl_internal_get_statusEffectReference() const;

  constexpr ::GlobalNamespace::__Player__StatusEffect& __cordl_internal_get_statusEffectReference();

  constexpr void __cordl_internal_set_alwaysVisibleMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_creativeModeAlwaysVisibleColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultEyeColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultSkinColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_eyeColorRanges(::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> value);

  constexpr void __cordl_internal_set_eyeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_hasLoadedMap(bool value);

  constexpr void __cordl_internal_set_hideAndSeekAlwaysVisibleColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_killedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_masterPlayerRigPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_onInteractionLockUpdatedCallbacks(::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* value);

  constexpr void __cordl_internal_set_onMasterPlayerCreatedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerCreated* value);

  constexpr void __cordl_internal_set_onPlayerCreatedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerCreated* value);

  constexpr void __cordl_internal_set_onPlayerDestroyedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* value);

  constexpr void __cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* value);

  constexpr void __cordl_internal_set_puppetPlayerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_skinColorRanges(::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> value);

  constexpr void __cordl_internal_set_skinMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_statusEffectDatas(::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> value);

  constexpr void __cordl_internal_set_statusEffectReference(::GlobalNamespace::__Player__StatusEffect value);

  /// @brief Method .ctor, addr 0x107689c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__hasInteractionLock_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>* getStaticF_avatarIdentities();

  static inline ::GlobalNamespace::AvatarIdentity* getStaticF_defaultAvatarIdentity();

  /// @brief Method get_hasInteractionLock, addr 0x1076720, size 0x58, virtual false, abstract: false, final false
  static inline bool get_hasInteractionLock();

  /// @brief Method get_hasMasterPlayer, addr 0x1074d48, size 0x60, virtual false, abstract: false, final false
  inline bool get_hasMasterPlayer();

  static inline void setStaticF__hasInteractionLock_k__BackingField(bool value);

  static inline void setStaticF_avatarIdentities(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>* value);

  static inline void setStaticF_defaultAvatarIdentity(::GlobalNamespace::AvatarIdentity* value);

  /// @brief Method set_hasInteractionLock, addr 0x1076778, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hasInteractionLock(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerManager(PlayerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerManager(PlayerManager const&) = delete;

  /// @brief Field masterPlayerRigPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___masterPlayerRigPrefab;

  /// @brief Field puppetPlayerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___puppetPlayerPrefab;

  /// @brief Field killedColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___killedColor;

  /// @brief Field alwaysVisibleMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___alwaysVisibleMaterial;

  /// @brief Field hideAndSeekAlwaysVisibleColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___hideAndSeekAlwaysVisibleColor;

  /// @brief Field creativeModeAlwaysVisibleColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___creativeModeAlwaysVisibleColor;

  /// @brief Field players, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* ___players;

  /// @brief Field masterPlayer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field hasLoadedMap, offset: 0x70, size: 0x1, def value: None
  bool ___hasLoadedMap;

  /// @brief Field onPlayerCreatedCallbacks, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerManager__OnPlayerCreated* ___onPlayerCreatedCallbacks;

  /// @brief Field onMasterPlayerCreatedCallbacks, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerManager__OnPlayerCreated* ___onMasterPlayerCreatedCallbacks;

  /// @brief Field onPlayerDestroyedCallbacks, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* ___onPlayerDestroyedCallbacks;

  /// @brief Field statusEffectReference, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__Player__StatusEffect ___statusEffectReference;

  /// @brief Field statusEffectDatas, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> ___statusEffectDatas;

  /// @brief Field onInteractionLockUpdatedCallbacks, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* ___onInteractionLockUpdatedCallbacks;

  /// @brief Field defaultSkinColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultSkinColor;

  /// @brief Field skinMaterial, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___skinMaterial;

  /// @brief Field defaultEyeColor, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultEyeColor;

  /// @brief Field eyeMaterial, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___eyeMaterial;

  /// @brief Field skinColorRanges, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> ___skinColorRanges;

  /// @brief Field eyeColorRanges, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> ___eyeColorRanges;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Players: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerManager, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___masterPlayerRigPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___puppetPlayerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___killedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___alwaysVisibleMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___hideAndSeekAlwaysVisibleColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___creativeModeAlwaysVisibleColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___players) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___masterPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___hasLoadedMap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___onPlayerCreatedCallbacks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___onMasterPlayerCreatedCallbacks) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___onPlayerDestroyedCallbacks) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___statusEffectReference) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___statusEffectDatas) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___onInteractionLockUpdatedCallbacks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___defaultSkinColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___skinMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___defaultEyeColor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___eyeMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___skinColorRanges) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerManager, ___eyeColorRanges) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerManager*, "", "PlayerManager");
NEED_NO_BOX(::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*, "", "PlayerManager/OnInteractionLockUpdated");
NEED_NO_BOX(::GlobalNamespace::__PlayerManager__OnPlayerCreated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerManager__OnPlayerCreated*, "", "PlayerManager/OnPlayerCreated");
NEED_NO_BOX(::GlobalNamespace::__PlayerManager__OnPlayerDestroyed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*, "", "PlayerManager/OnPlayerDestroyed");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerManager__ColorRange, "", "PlayerManager/ColorRange");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerManager__StatusEffectData, "", "PlayerManager/StatusEffectData");
