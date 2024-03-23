#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnLinkedAccountCountUpdated;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataAdded;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataModified;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataRemoved;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerSwitchedUserIDs;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerTypeCountChanged;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace GlobalNamespace {
struct __Player__Type;
}
namespace Photon::Realtime {
class Player;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataManager;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnLinkedAccountCountUpdated;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataAdded;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataModified;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerDataRemoved;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerSwitchedUserIDs;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnPlayerTypeCountChanged;
}
namespace GlobalNamespace {
class __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataManager);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer);
// Type: ::OnPlayerDataAdded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnPlayerDataAdded*
class CORDL_TYPE __PlayerDataManager__OnPlayerDataAdded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1074550, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlayerData playerData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x10745dc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x107450c, size 0x44, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x106ac4c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnPlayerDataAdded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataAdded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnPlayerDataAdded(__PlayerDataManager__OnPlayerDataAdded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataAdded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnPlayerDataAdded(__PlayerDataManager__OnPlayerDataAdded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerDataRemoved
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnPlayerDataRemoved*
class CORDL_TYPE __PlayerDataManager__OnPlayerDataRemoved : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x10746f0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlayerData playerData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x107477c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x10746ac, size 0x44, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x10745e8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnPlayerDataRemoved();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataRemoved", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnPlayerDataRemoved(__PlayerDataManager__OnPlayerDataRemoved&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataRemoved", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnPlayerDataRemoved(__PlayerDataManager__OnPlayerDataRemoved const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerDataModified
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnPlayerDataModified*
class CORDL_TYPE __PlayerDataManager__OnPlayerDataModified : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x10747dc, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x107486c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1074788, size 0x54, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x106ad10, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnPlayerDataModified();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataModified", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnPlayerDataModified(__PlayerDataManager__OnPlayerDataModified&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerDataModified", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnPlayerDataModified(__PlayerDataManager__OnPlayerDataModified const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerSwitchedUserIDs
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnPlayerSwitchedUserIDs*
class CORDL_TYPE __PlayerDataManager__OnPlayerSwitchedUserIDs : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1074964, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW oldUserID, ::StringW newUserID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x107498c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1074950, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW oldUserID, ::StringW newUserID);

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1074878, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnPlayerSwitchedUserIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerSwitchedUserIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnPlayerSwitchedUserIDs(__PlayerDataManager__OnPlayerSwitchedUserIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerSwitchedUserIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnPlayerSwitchedUserIDs(__PlayerDataManager__OnPlayerSwitchedUserIDs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnStatusEffectRemovedFromMasterPlayer
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnStatusEffectRemovedFromMasterPlayer*
class CORDL_TYPE __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x10749ac, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__Player__StatusEffect statusEffect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1074a30, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1074998, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__Player__StatusEffect statusEffect);

  static inline ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x10631dc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer(__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer(__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerTypeCountChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnPlayerTypeCountChanged*
class CORDL_TYPE __PlayerDataManager__OnPlayerTypeCountChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1074b14, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1074b98, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1074b00, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t newCount);

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1074a3c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnPlayerTypeCountChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerTypeCountChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnPlayerTypeCountChanged(__PlayerDataManager__OnPlayerTypeCountChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnPlayerTypeCountChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnPlayerTypeCountChanged(__PlayerDataManager__OnPlayerTypeCountChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnLinkedAccountCountUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager::OnLinkedAccountCountUpdated*
class CORDL_TYPE __PlayerDataManager__OnLinkedAccountCountUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1074c80, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newLinkedAccountCount, bool wasIncrease, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1074d3c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1074c68, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(int32_t newLinkedAccountCount, bool wasIncrease);

  static inline ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1074ba4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataManager__OnLinkedAccountCountUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnLinkedAccountCountUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerDataManager__OnLinkedAccountCountUpdated(__PlayerDataManager__OnLinkedAccountCountUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerDataManager__OnLinkedAccountCountUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerDataManager__OnLinkedAccountCountUpdated(__PlayerDataManager__OnLinkedAccountCountUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDataManager
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataManager*
class CORDL_TYPE PlayerDataManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PlayerDataManager>> {
public:
  // Declarations
  using OnLinkedAccountCountUpdated = ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated;

  using OnPlayerDataAdded = ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded;

  using OnPlayerDataModified = ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified;

  using OnPlayerDataRemoved = ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved;

  using OnPlayerSwitchedUserIDs = ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs;

  using OnPlayerTypeCountChanged = ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged;

  using OnStatusEffectRemovedFromMasterPlayer = ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer;

  /// @brief Field <hiderCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__hiderCount_k__BackingField, put = setStaticF__hiderCount_k__BackingField)) int32_t _hiderCount_k__BackingField;

  /// @brief Field <linkAccountUserIDs>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__linkAccountUserIDs_k__BackingField,
                             put = setStaticF__linkAccountUserIDs_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _linkAccountUserIDs_k__BackingField;

  /// @brief Field <linkedAccountCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__linkedAccountCount_k__BackingField, put = setStaticF__linkedAccountCount_k__BackingField)) int32_t _linkedAccountCount_k__BackingField;

  /// @brief Field <masterPlayerData>k__BackingField, offset 0xffffffff, size 0x50
  static __declspec(property(get = getStaticF__masterPlayerData_k__BackingField, put = setStaticF__masterPlayerData_k__BackingField))::GlobalNamespace::PlayerData _masterPlayerData_k__BackingField;

  /// @brief Field <playerDatas>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__playerDatas_k__BackingField,
                             put = setStaticF__playerDatas_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* _playerDatas_k__BackingField;

  /// @brief Field <seekerCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__seekerCount_k__BackingField, put = setStaticF__seekerCount_k__BackingField)) int32_t _seekerCount_k__BackingField;

  /// @brief Field adjectives, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_adjectives, put = __cordl_internal_set_adjectives))::ArrayW<::StringW, ::Array<::StringW>*> adjectives;

  /// @brief Field nouns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nouns, put = __cordl_internal_set_nouns))::ArrayW<::StringW, ::Array<::StringW>*> nouns;

  /// @brief Field onHiderCountChangedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onHiderCountChangedCallbacks,
                      put = __cordl_internal_set_onHiderCountChangedCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* onHiderCountChangedCallbacks;

  /// @brief Field onHiderCountChangedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onHiderCountChangedPersistantCallbacks,
                             put = setStaticF_onHiderCountChangedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* onHiderCountChangedPersistantCallbacks;

  /// @brief Field onLinkedAccountCountUpdatedCallbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onLinkedAccountCountUpdatedCallbacks,
                      put = __cordl_internal_set_onLinkedAccountCountUpdatedCallbacks))::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* onLinkedAccountCountUpdatedCallbacks;

  /// @brief Field onLinkedAccountCountUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_onLinkedAccountCountUpdatedPersistantCallbacks,
               put = setStaticF_onLinkedAccountCountUpdatedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* onLinkedAccountCountUpdatedPersistantCallbacks;

  /// @brief Field onPlayerDataAddedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerDataAddedCallbacks,
                      put = __cordl_internal_set_onPlayerDataAddedCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* onPlayerDataAddedCallbacks;

  /// @brief Field onPlayerDataAddedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerDataAddedPersistantCallbacks,
                             put = setStaticF_onPlayerDataAddedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* onPlayerDataAddedPersistantCallbacks;

  /// @brief Field onPlayerDataModifiedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerDataModifiedCallbacks,
                      put = __cordl_internal_set_onPlayerDataModifiedCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* onPlayerDataModifiedCallbacks;

  /// @brief Field onPlayerDataModifiedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerDataModifiedPersistantCallbacks,
                             put = setStaticF_onPlayerDataModifiedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* onPlayerDataModifiedPersistantCallbacks;

  /// @brief Field onPlayerDataRemovedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerDataRemovedCallbacks,
                      put = __cordl_internal_set_onPlayerDataRemovedCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* onPlayerDataRemovedCallbacks;

  /// @brief Field onPlayerDataRemovedEarlyCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerDataRemovedEarlyCallbacks,
                      put = __cordl_internal_set_onPlayerDataRemovedEarlyCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* onPlayerDataRemovedEarlyCallbacks;

  /// @brief Field onPlayerDataRemovedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerDataRemovedPersistantCallbacks,
                             put = setStaticF_onPlayerDataRemovedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* onPlayerDataRemovedPersistantCallbacks;

  /// @brief Field onPlayerSwitchedUserIDsCallbacks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerSwitchedUserIDsCallbacks,
                      put = __cordl_internal_set_onPlayerSwitchedUserIDsCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* onPlayerSwitchedUserIDsCallbacks;

  /// @brief Field onPlayerSwitchedUserIDsPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerSwitchedUserIDsPersistantCallbacks,
                             put = setStaticF_onPlayerSwitchedUserIDsPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* onPlayerSwitchedUserIDsPersistantCallbacks;

  /// @brief Field onSeekerCountChangedCallbacks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onSeekerCountChangedCallbacks,
                      put = __cordl_internal_set_onSeekerCountChangedCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* onSeekerCountChangedCallbacks;

  /// @brief Field onSeekerCountChangedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSeekerCountChangedPersistantCallbacks,
                             put = setStaticF_onSeekerCountChangedPersistantCallbacks))::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* onSeekerCountChangedPersistantCallbacks;

  /// @brief Field onStatusEffectRemovedFromMasterPlayerCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks,
      put = setStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks))::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* onStatusEffectRemovedFromMasterPlayerCallbacks;

  /// @brief Method AddLinkedAccount, addr 0x106f828, size 0x6e8, virtual false, abstract: false, final false
  static inline void AddLinkedAccount(::StringW userID);

  /// @brief Method AddPlayerData, addr 0x106eca0, size 0x564, virtual false, abstract: false, final false
  static inline void AddPlayerData(::GlobalNamespace::PlayerData playerData);

  /// @brief Method ApplyStatusEffectToMasterPlayer, addr 0x1072950, size 0x268, virtual false, abstract: false, final false
  static inline void ApplyStatusEffectToMasterPlayer(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration);

  /// @brief Method BuildMasterPlayerData, addr 0x106dc28, size 0x490, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerData BuildMasterPlayerData();

  /// @brief Method ClearStatusEffectOnMasterPlayer, addr 0x10651dc, size 0x12c, virtual false, abstract: false, final false
  static inline void ClearStatusEffectOnMasterPlayer();

  /// @brief Method ClearStatusEffectOnMasterPlayer, addr 0x1072ddc, size 0x294, virtual false, abstract: false, final false
  static inline void ClearStatusEffectOnMasterPlayer(::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method ColorToVector3, addr 0x10727c8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ColorToVector3(::UnityEngine::Color color);

  /// @brief Method DoesPlayerDataExist, addr 0x107179c, size 0xb0, virtual false, abstract: false, final false
  static inline bool DoesPlayerDataExist(::StringW userID);

  /// @brief Method GenerateGuestName, addr 0x106d2ac, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GenerateGuestName();

  /// @brief Method GenerateRandomName, addr 0x106d230, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GenerateRandomName();

  /// @brief Method GetPlayingPlayerCount, addr 0x1074268, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t GetPlayingPlayerCount();

  /// @brief Method GetRandomUser, addr 0x1073aa8, size 0x288, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUser();

  /// @brief Method GetRandomUserOfType, addr 0x1073d30, size 0x2c0, virtual false, abstract: false, final false
  static inline ::StringW GetRandomUserOfType(::GlobalNamespace::__Player__Type playerType);

  /// @brief Method GetTotalPlayerCount, addr 0x107432c, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetTotalPlayerCount();

  /// @brief Method GetUsersOfType, addr 0x1073ff0, size 0x278, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetUsersOfType(::GlobalNamespace::__Player__Type playerType);

  /// @brief Method ModifyPlayerData, addr 0x1070b58, size 0x574, virtual false, abstract: false, final false
  static inline void ModifyPlayerData(::GlobalNamespace::PlayerData modifiedPlayerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  static inline ::GlobalNamespace::PlayerDataManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x106d8a4, size 0x104, virtual false, abstract: false, final false
  static inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnActiveCosmeticsKeysUpdated, addr 0x106e8e8, size 0x124, virtual false, abstract: false, final false
  static inline void OnActiveCosmeticsKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                                  ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys);

  /// @brief Method OnFirstUserIDAssigned, addr 0x106d6a4, size 0x200, virtual false, abstract: false, final false
  static inline void OnFirstUserIDAssigned();

  /// @brief Method OnFollowupUserIDAssigned, addr 0x106e81c, size 0xcc, virtual false, abstract: false, final false
  static inline void OnFollowupUserIDAssigned();

  /// @brief Method OnJoinedRoom, addr 0x107184c, size 0x320, virtual false, abstract: false, final false
  static inline void OnJoinedRoom(::StringW roomName);

  /// @brief Method OnLeftRoom, addr 0x10721e0, size 0x380, virtual false, abstract: false, final false
  static inline void OnLeftRoom();

  /// @brief Method OnPlayerEnteredRoom, addr 0x1072560, size 0x138, virtual false, abstract: false, final false
  static inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x1072698, size 0x130, virtual false, abstract: false, final false
  static inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x1073118, size 0x3a0, virtual false, abstract: false, final false
  static inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnReceiveApplyStatusEffectToPlayer, addr 0x1072bb8, size 0xbc, virtual false, abstract: false, final false
  static inline void OnReceiveApplyStatusEffectToPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration);

  /// @brief Method OnReceiveClearStatusEffectOnPlayer, addr 0x1073070, size 0xa8, virtual false, abstract: false, final false
  static inline void OnReceiveClearStatusEffectOnPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method OnRoomLoaded, addr 0x106d9a8, size 0x1e8, virtual false, abstract: false, final false
  static inline void OnRoomLoaded(::GlobalNamespace::Room* roomData);

  /// @brief Method RefreshPlayerTypeCounts, addr 0x106f204, size 0x624, virtual false, abstract: false, final false
  static inline void RefreshPlayerTypeCounts();

  /// @brief Method RemoveLinkedAccount, addr 0x107051c, size 0x63c, virtual false, abstract: false, final false
  static inline void RemoveLinkedAccount(::StringW userID);

  /// @brief Method RemovePlayerData, addr 0x106ff10, size 0x60c, virtual false, abstract: false, final false
  static inline void RemovePlayerData(::StringW userID);

  /// @brief Method SendApplyStatusEffectToPlayer, addr 0x10727cc, size 0x184, virtual false, abstract: false, final false
  static inline void SendApplyStatusEffectToPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration);

  /// @brief Method SendClearStatusEffectOnPlayer, addr 0x1072c74, size 0x168, virtual false, abstract: false, final false
  static inline void SendClearStatusEffectOnPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method SetMasterPlayerData, addr 0x106e0b8, size 0x764, virtual false, abstract: false, final false
  static inline void SetMasterPlayerData(::GlobalNamespace::PlayerData newPlayerData);

  /// @brief Method SetMasterPlayerType, addr 0x1065064, size 0x178, virtual false, abstract: false, final false
  static inline void SetMasterPlayerType(::GlobalNamespace::__Player__Type newPlayerType);

  /// @brief Method Start, addr 0x106d328, size 0x37c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SwitchPlayerUserIDs, addr 0x10710cc, size 0x5c8, virtual false, abstract: false, final false
  static inline void SwitchPlayerUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method TryExtractPlayerData, addr 0x1071b6c, size 0x674, virtual false, abstract: false, final false
  static inline bool TryExtractPlayerData(::Photon::Realtime::Player* photonPlayer, ByRef<::GlobalNamespace::PlayerData> playerData);

  /// @brief Method TryGetPlayerAccountID, addr 0x1071694, size 0x108, virtual false, abstract: false, final false
  static inline bool TryGetPlayerAccountID(::StringW userID, ByRef<::StringW> accountID);

  /// @brief Method TryGetPlayerData, addr 0x10697c4, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryGetPlayerData(::StringW userID, ByRef<::GlobalNamespace::PlayerData> playerData);

  /// @brief Method Vector3ToColor, addr 0x1073aa0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Vector3ToColor(::UnityEngine::Vector3 vector);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_adjectives() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_adjectives();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_nouns() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_nouns();

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*& __cordl_internal_get_onHiderCountChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*> const& __cordl_internal_get_onHiderCountChangedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*& __cordl_internal_get_onLinkedAccountCountUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*> const& __cordl_internal_get_onLinkedAccountCountUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*& __cordl_internal_get_onPlayerDataAddedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*> const& __cordl_internal_get_onPlayerDataAddedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*& __cordl_internal_get_onPlayerDataModifiedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*> const& __cordl_internal_get_onPlayerDataModifiedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*& __cordl_internal_get_onPlayerDataRemovedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*> const& __cordl_internal_get_onPlayerDataRemovedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*& __cordl_internal_get_onPlayerDataRemovedEarlyCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*> const& __cordl_internal_get_onPlayerDataRemovedEarlyCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*& __cordl_internal_get_onPlayerSwitchedUserIDsCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*> const& __cordl_internal_get_onPlayerSwitchedUserIDsCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*& __cordl_internal_get_onSeekerCountChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*> const& __cordl_internal_get_onSeekerCountChangedCallbacks() const;

  constexpr void __cordl_internal_set_adjectives(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_nouns(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_onHiderCountChangedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value);

  constexpr void __cordl_internal_set_onLinkedAccountCountUpdatedCallbacks(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* value);

  constexpr void __cordl_internal_set_onPlayerDataAddedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* value);

  constexpr void __cordl_internal_set_onPlayerDataModifiedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* value);

  constexpr void __cordl_internal_set_onPlayerDataRemovedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value);

  constexpr void __cordl_internal_set_onPlayerDataRemovedEarlyCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value);

  constexpr void __cordl_internal_set_onPlayerSwitchedUserIDsCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* value);

  constexpr void __cordl_internal_set_onSeekerCountChangedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value);

  /// @brief Method .ctor, addr 0x10743d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__hiderCount_k__BackingField();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF__linkAccountUserIDs_k__BackingField();

  static inline int32_t getStaticF__linkedAccountCount_k__BackingField();

  static inline ::GlobalNamespace::PlayerData getStaticF__masterPlayerData_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* getStaticF__playerDatas_k__BackingField();

  static inline int32_t getStaticF__seekerCount_k__BackingField();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* getStaticF_onHiderCountChangedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* getStaticF_onLinkedAccountCountUpdatedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* getStaticF_onPlayerDataAddedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* getStaticF_onPlayerDataModifiedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* getStaticF_onPlayerDataRemovedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* getStaticF_onPlayerSwitchedUserIDsPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* getStaticF_onSeekerCountChangedPersistantCallbacks();

  static inline ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* getStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks();

  /// @brief Method get_hasLinkedAccounts, addr 0x1073a10, size 0x90, virtual false, abstract: false, final false
  static inline bool get_hasLinkedAccounts();

  /// @brief Method get_hasMasterPlayerData, addr 0x106db90, size 0x98, virtual false, abstract: false, final false
  static inline bool get_hasMasterPlayerData();

  /// @brief Method get_hiderCount, addr 0x1073740, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_hiderCount();

  /// @brief Method get_isMasterPlayerPlaying, addr 0x106eba4, size 0xfc, virtual false, abstract: false, final false
  static inline bool get_isMasterPlayerPlaying();

  /// @brief Method get_linkAccountUserIDs, addr 0x10738a8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_linkAccountUserIDs();

  /// @brief Method get_linkedAccountCount, addr 0x107395c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_linkedAccountCount();

  /// @brief Method get_masterPlayerData, addr 0x106eac0, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerData get_masterPlayerData();

  /// @brief Method get_playerDatas, addr 0x106ea0c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* get_playerDatas();

  /// @brief Method get_seekerCount, addr 0x10737f4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_seekerCount();

  static inline void setStaticF__hiderCount_k__BackingField(int32_t value);

  static inline void setStaticF__linkAccountUserIDs_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF__linkedAccountCount_k__BackingField(int32_t value);

  static inline void setStaticF__masterPlayerData_k__BackingField(::GlobalNamespace::PlayerData value);

  static inline void setStaticF__playerDatas_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* value);

  static inline void setStaticF__seekerCount_k__BackingField(int32_t value);

  static inline void setStaticF_onHiderCountChangedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value);

  static inline void setStaticF_onLinkedAccountCountUpdatedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* value);

  static inline void setStaticF_onPlayerDataAddedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* value);

  static inline void setStaticF_onPlayerDataModifiedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* value);

  static inline void setStaticF_onPlayerDataRemovedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value);

  static inline void setStaticF_onPlayerSwitchedUserIDsPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* value);

  static inline void setStaticF_onSeekerCountChangedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value);

  static inline void setStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks(::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* value);

  /// @brief Method set_hiderCount, addr 0x1073798, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hiderCount(int32_t value);

  /// @brief Method set_linkAccountUserIDs, addr 0x1073900, size 0x5c, virtual false, abstract: false, final false
  static inline void set_linkAccountUserIDs(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_linkedAccountCount, addr 0x10739b4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_linkedAccountCount(int32_t value);

  /// @brief Method set_masterPlayerData, addr 0x106eb24, size 0x80, virtual false, abstract: false, final false
  static inline void set_masterPlayerData(::GlobalNamespace::PlayerData value);

  /// @brief Method set_playerDatas, addr 0x106ea64, size 0x5c, virtual false, abstract: false, final false
  static inline void set_playerDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* value);

  /// @brief Method set_seekerCount, addr 0x107384c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_seekerCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataManager(PlayerDataManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataManager(PlayerDataManager const&) = delete;

  /// @brief Field adjectives, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___adjectives;

  /// @brief Field nouns, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___nouns;

  /// @brief Field onPlayerDataAddedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* ___onPlayerDataAddedCallbacks;

  /// @brief Field onPlayerDataRemovedEarlyCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* ___onPlayerDataRemovedEarlyCallbacks;

  /// @brief Field onPlayerDataRemovedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* ___onPlayerDataRemovedCallbacks;

  /// @brief Field onPlayerDataModifiedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* ___onPlayerDataModifiedCallbacks;

  /// @brief Field onPlayerSwitchedUserIDsCallbacks, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* ___onPlayerSwitchedUserIDsCallbacks;

  /// @brief Field onHiderCountChangedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* ___onHiderCountChangedCallbacks;

  /// @brief Field onSeekerCountChangedCallbacks, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* ___onSeekerCountChangedCallbacks;

  /// @brief Field onLinkedAccountCountUpdatedCallbacks, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* ___onLinkedAccountCountUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Player Data: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___adjectives) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___nouns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onPlayerDataAddedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onPlayerDataRemovedEarlyCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onPlayerDataRemovedCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onPlayerDataModifiedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onPlayerSwitchedUserIDsCallbacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onHiderCountChangedCallbacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onSeekerCountChangedCallbacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataManager, ___onLinkedAccountCountUpdatedCallbacks) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataManager*, "", "PlayerDataManager");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*, "", "PlayerDataManager/OnLinkedAccountCountUpdated");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*, "", "PlayerDataManager/OnPlayerDataAdded");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*, "", "PlayerDataManager/OnPlayerDataModified");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*, "", "PlayerDataManager/OnPlayerDataRemoved");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*, "", "PlayerDataManager/OnPlayerSwitchedUserIDs");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*, "", "PlayerDataManager/OnPlayerTypeCountChanged");
NEED_NO_BOX(::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*, "", "PlayerDataManager/OnStatusEffectRemovedFromMasterPlayer");
