#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class GameRound;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __GameManager__OnHuntStarted;
}
namespace GlobalNamespace {
class __GameManager__OnIsCreativeModeUpdated;
}
namespace GlobalNamespace {
class __GameManager__OnRoundEnded;
}
namespace GlobalNamespace {
class __GameManager__OnRoundStarted;
}
namespace GlobalNamespace {
struct __GameManager__RoundResult;
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
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameManager__RoundResult;
}
namespace GlobalNamespace {
class GameManager;
}
namespace GlobalNamespace {
class __GameManager__OnHuntStarted;
}
namespace GlobalNamespace {
class __GameManager__OnIsCreativeModeUpdated;
}
namespace GlobalNamespace {
class __GameManager__OnRoundEnded;
}
namespace GlobalNamespace {
class __GameManager__OnRoundStarted;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameManager__RoundResult);
MARK_REF_PTR_T(::GlobalNamespace::GameManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameManager__OnHuntStarted);
MARK_REF_PTR_T(::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__GameManager__OnRoundEnded);
MARK_REF_PTR_T(::GlobalNamespace::__GameManager__OnRoundStarted);
// Type: ::OnRoundStarted
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameManager::OnRoundStarted*
class CORDL_TYPE __GameManager__OnRoundStarted : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d1364, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameRound* round, bool isInProgress, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d13fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d134c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::GameRound* round, bool isInProgress);

  static inline ::GlobalNamespace::__GameManager__OnRoundStarted* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d121c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameManager__OnRoundStarted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnRoundStarted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameManager__OnRoundStarted(__GameManager__OnRoundStarted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnRoundStarted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameManager__OnRoundStarted(__GameManager__OnRoundStarted const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameManager__OnRoundStarted, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRoundEnded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameManager::OnRoundEnded*
class CORDL_TYPE __GameManager__OnRoundEnded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d1548, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameRound* round, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d1568, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d1534, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::GameRound* round);

  static inline ::GlobalNamespace::__GameManager__OnRoundEnded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d1408, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameManager__OnRoundEnded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnRoundEnded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameManager__OnRoundEnded(__GameManager__OnRoundEnded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnRoundEnded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameManager__OnRoundEnded(__GameManager__OnRoundEnded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameManager__OnRoundEnded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHuntStarted
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameManager::OnHuntStarted*
class CORDL_TYPE __GameManager__OnHuntStarted : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d1650, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool isInProgress, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d16d8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d1638, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool isInProgress);

  static inline ::GlobalNamespace::__GameManager__OnHuntStarted* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d1574, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameManager__OnHuntStarted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnHuntStarted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameManager__OnHuntStarted(__GameManager__OnHuntStarted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnHuntStarted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameManager__OnHuntStarted(__GameManager__OnHuntStarted const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameManager__OnHuntStarted, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnIsCreativeModeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameManager::OnIsCreativeModeUpdated*
class CORDL_TYPE __GameManager__OnIsCreativeModeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d17c0, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newIsCreativeMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d1848, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d17a8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newIsCreativeMode);

  static inline ::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d16e4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameManager__OnIsCreativeModeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnIsCreativeModeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameManager__OnIsCreativeModeUpdated(__GameManager__OnIsCreativeModeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameManager__OnIsCreativeModeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameManager__OnIsCreativeModeUpdated(__GameManager__OnIsCreativeModeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoundResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameManager::RoundResult
struct CORDL_TYPE __GameManager__RoundResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameManager__RoundResult_Unwrapped
  enum struct ____GameManager__RoundResult_Unwrapped : int32_t {
    __E_cancelled = static_cast<int32_t>(0x0),
    __E_hidersWin = static_cast<int32_t>(0x1),
    __E_seekersWin = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameManager__RoundResult_Unwrapped() const noexcept {
    return static_cast<____GameManager__RoundResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameManager__RoundResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameManager__RoundResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field cancelled value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameManager__RoundResult const cancelled;

  /// @brief Field hidersWin value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameManager__RoundResult const hidersWin;

  /// @brief Field seekersWin value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameManager__RoundResult const seekersWin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameManager__RoundResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameManager__RoundResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameManager*
class CORDL_TYPE GameManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::GameManager>> {
public:
  // Declarations
  using OnHuntStarted = ::GlobalNamespace::__GameManager__OnHuntStarted;

  using OnIsCreativeModeUpdated = ::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated;

  using OnRoundEnded = ::GlobalNamespace::__GameManager__OnRoundEnded;

  using OnRoundStarted = ::GlobalNamespace::__GameManager__OnRoundStarted;

  using RoundResult = ::GlobalNamespace::__GameManager__RoundResult;

  /// @brief Field <currentRound>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__currentRound_k__BackingField, put = setStaticF__currentRound_k__BackingField))::GlobalNamespace::GameRound* _currentRound_k__BackingField;

  /// @brief Field <hasHuntStarted>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasHuntStarted_k__BackingField, put = setStaticF__hasHuntStarted_k__BackingField)) bool _hasHuntStarted_k__BackingField;

  /// @brief Field <isCreativeMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isCreativeMode_k__BackingField, put = setStaticF__isCreativeMode_k__BackingField)) bool _isCreativeMode_k__BackingField;

  /// @brief Field allowGameRounds, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_allowGameRounds, put = setStaticF_allowGameRounds)) bool allowGameRounds;

  /// @brief Field doHiderHints, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_doHiderHints, put = setStaticF_doHiderHints)) bool doHiderHints;

  /// @brief Field hasRoundProgressedEnoughForHiderHints, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasRoundProgressedEnoughForHiderHints, put = setStaticF_hasRoundProgressedEnoughForHiderHints)) bool hasRoundProgressedEnoughForHiderHints;

  /// @brief Field lastFirstSelectedSeekerUserID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lastFirstSelectedSeekerUserID, put = setStaticF_lastFirstSelectedSeekerUserID))::StringW lastFirstSelectedSeekerUserID;

  /// @brief Field lastNewSeekerTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lastNewSeekerTimestamp, put = setStaticF_lastNewSeekerTimestamp))::System::DateTime lastNewSeekerTimestamp;

  /// @brief Field nextHiderHintTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextHiderHintTime, put = setStaticF_nextHiderHintTime)) float_t nextHiderHintTime;

  /// @brief Field nextRoundStartTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextRoundStartTime, put = setStaticF_nextRoundStartTime)) float_t nextRoundStartTime;

  /// @brief Field onHuntStartedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onHuntStartedCallbacks, put = __cordl_internal_set_onHuntStartedCallbacks))::GlobalNamespace::__GameManager__OnHuntStarted* onHuntStartedCallbacks;

  /// @brief Field onHuntStartedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onHuntStartedPersistantCallbacks,
                             put = setStaticF_onHuntStartedPersistantCallbacks))::GlobalNamespace::__GameManager__OnHuntStarted* onHuntStartedPersistantCallbacks;

  /// @brief Field onIsCreativeModeUpdatedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsCreativeModeUpdatedCallbacks,
                      put = __cordl_internal_set_onIsCreativeModeUpdatedCallbacks))::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated* onIsCreativeModeUpdatedCallbacks;

  /// @brief Field onRoundEndedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoundEndedCallbacks, put = __cordl_internal_set_onRoundEndedCallbacks))::GlobalNamespace::__GameManager__OnRoundEnded* onRoundEndedCallbacks;

  /// @brief Field onRoundEndedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoundEndedPersistantCallbacks,
                             put = setStaticF_onRoundEndedPersistantCallbacks))::GlobalNamespace::__GameManager__OnRoundEnded* onRoundEndedPersistantCallbacks;

  /// @brief Field onRoundStartedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoundStartedCallbacks, put = __cordl_internal_set_onRoundStartedCallbacks))::GlobalNamespace::__GameManager__OnRoundStarted* onRoundStartedCallbacks;

  /// @brief Field onRoundStartedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoundStartedPersistantCallbacks,
                             put = setStaticF_onRoundStartedPersistantCallbacks))::GlobalNamespace::__GameManager__OnRoundStarted* onRoundStartedPersistantCallbacks;

  /// @brief Field previousRound, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_previousRound, put = setStaticF_previousRound))::GlobalNamespace::GameRound* previousRound;

  /// @brief Field seekerSaveData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_seekerSaveData,
                             put = setStaticF_seekerSaveData))::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<float_t, int32_t>>* seekerSaveData;

  /// @brief Field waitForPlayersBeforeStartingRound, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_waitForPlayersBeforeStartingRound, put = __cordl_internal_set_waitForPlayersBeforeStartingRound)) bool waitForPlayersBeforeStartingRound;

  /// @brief Method DisableHiderHints, addr 0x29cf26c, size 0x58, virtual false, abstract: false, final false
  static inline void DisableHiderHints();

  /// @brief Method EnableHiderHints, addr 0x29cf178, size 0xf4, virtual false, abstract: false, final false
  static inline void EnableHiderHints();

  /// @brief Method EndCurrentRound, addr 0x29ce438, size 0x564, virtual false, abstract: false, final false
  static inline void EndCurrentRound(::GlobalNamespace::__GameManager__RoundResult result);

  /// @brief Method HiderHintUpdate, addr 0x29cfad8, size 0x1fc, virtual false, abstract: false, final false
  static inline void HiderHintUpdate();

  static inline ::GlobalNamespace::GameManager* New_ctor();

  /// @brief Method OnJoinedRoomLate, addr 0x29cda60, size 0x51c, virtual false, abstract: false, final false
  static inline void OnJoinedRoomLate(::StringW roomName);

  /// @brief Method OnLeftRoomEarly, addr 0x29ce028, size 0x54, virtual false, abstract: false, final false
  static inline void OnLeftRoomEarly();

  /// @brief Method OnPlayerDataAdded, addr 0x29cff1c, size 0x4, virtual false, abstract: false, final false
  static inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataModified, addr 0x29d0044, size 0x410, virtual false, abstract: false, final false
  static inline void OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  /// @brief Method OnPlayerDataRemoved, addr 0x29cff20, size 0x4c, virtual false, abstract: false, final false
  static inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnReceiveDoHiderHint, addr 0x29d0b90, size 0x1b4, virtual false, abstract: false, final false
  static inline void OnReceiveDoHiderHint(::StringW userID);

  /// @brief Method OnReceiveMakeSeekerForGameBalance, addr 0x29d0588, size 0x1d8, virtual false, abstract: false, final false
  static inline void OnReceiveMakeSeekerForGameBalance(::StringW userID, bool skipKillPhase);

  /// @brief Method OnReceiveSeekerCaughtHider, addr 0x29cfe38, size 0xe4, virtual false, abstract: false, final false
  static inline void OnReceiveSeekerCaughtHider(::StringW seekerUserID, ::StringW hiderUserID);

  /// @brief Method OnReceiveSetupNewRound, addr 0x29ccca4, size 0x3c8, virtual false, abstract: false, final false
  static inline void OnReceiveSetupNewRound(int32_t newRoundNumber, ::System::Collections::Generic::List_1<::StringW>* initialSeekerUserIDs);

  /// @brief Method OnRoomLoaded, addr 0x29cd65c, size 0x8c, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x29ce07c, size 0x3bc, virtual false, abstract: false, final false
  static inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method ReevaluateGameState, addr 0x29cff6c, size 0xd8, virtual false, abstract: false, final false
  static inline void ReevaluateGameState();

  /// @brief Method RefreshNextHiderHintTime, addr 0x29d0860, size 0x200, virtual false, abstract: false, final false
  static inline void RefreshNextHiderHintTime();

  /// @brief Method RemoveExpiredSeekerSaveData, addr 0x29d0d44, size 0x3a8, virtual false, abstract: false, final false
  static inline void RemoveExpiredSeekerSaveData();

  /// @brief Method SendDoHiderHint, addr 0x29d0a60, size 0x130, virtual false, abstract: false, final false
  static inline void SendDoHiderHint();

  /// @brief Method SendLastNewSeekerTimestamp, addr 0x29d0454, size 0x134, virtual false, abstract: false, final false
  static inline void SendLastNewSeekerTimestamp(::System::DateTime timestamp);

  /// @brief Method SendMakeSeekerForGameBalance, addr 0x29cf974, size 0x164, virtual false, abstract: false, final false
  static inline void SendMakeSeekerForGameBalance(::StringW userID, bool skipKillPhase);

  /// @brief Method SendMasterPlayerCaughtHider, addr 0x29cfcd4, size 0x164, virtual false, abstract: false, final false
  static inline void SendMasterPlayerCaughtHider(::StringW hiderUserID);

  /// @brief Method SendSetIsCreativeMode, addr 0x29d0760, size 0x100, virtual false, abstract: false, final false
  static inline void SendSetIsCreativeMode(bool newIsCreativeMode);

  /// @brief Method SetAllowGameRounds, addr 0x29cc5f4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetAllowGameRounds(bool newAllowGameRounds);

  /// @brief Method SetCurrentRound, addr 0x29cd06c, size 0x5f0, virtual false, abstract: false, final false
  static inline void SetCurrentRound(::GlobalNamespace::GameRound* round, bool inProgress);

  /// @brief Method SetHasHuntedStarted, addr 0x29ceb1c, size 0x50c, virtual false, abstract: false, final false
  static inline void SetHasHuntedStarted(bool newHasHuntStarted, bool isInProgress);

  /// @brief Method SetIsCreativeMode, addr 0x29cd6e8, size 0x378, virtual false, abstract: false, final false
  static inline void SetIsCreativeMode(bool newIsCreativeMode);

  /// @brief Method ShouldBeSeeker, addr 0x29cdf7c, size 0xac, virtual false, abstract: false, final false
  static inline bool ShouldBeSeeker(::StringW photonRoomName, int32_t roundNumber);

  /// @brief Method Start, addr 0x29cc650, size 0x43c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartNewRound, addr 0x29cca8c, size 0x218, virtual false, abstract: false, final false
  static inline void StartNewRound();

  /// @brief Method Update, addr 0x29cf2c4, size 0x6b0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSeekerSaveData, addr 0x29cf028, size 0x150, virtual false, abstract: false, final false
  static inline void UpdateSeekerSaveData(bool isSeeker, int32_t roundNumber);

  constexpr ::GlobalNamespace::__GameManager__OnHuntStarted*& __cordl_internal_get_onHuntStartedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameManager__OnHuntStarted*> const& __cordl_internal_get_onHuntStartedCallbacks() const;

  constexpr ::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated*& __cordl_internal_get_onIsCreativeModeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated*> const& __cordl_internal_get_onIsCreativeModeUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__GameManager__OnRoundEnded*& __cordl_internal_get_onRoundEndedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameManager__OnRoundEnded*> const& __cordl_internal_get_onRoundEndedCallbacks() const;

  constexpr ::GlobalNamespace::__GameManager__OnRoundStarted*& __cordl_internal_get_onRoundStartedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameManager__OnRoundStarted*> const& __cordl_internal_get_onRoundStartedCallbacks() const;

  constexpr bool const& __cordl_internal_get_waitForPlayersBeforeStartingRound() const;

  constexpr bool& __cordl_internal_get_waitForPlayersBeforeStartingRound();

  constexpr void __cordl_internal_set_onHuntStartedCallbacks(::GlobalNamespace::__GameManager__OnHuntStarted* value);

  constexpr void __cordl_internal_set_onIsCreativeModeUpdatedCallbacks(::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated* value);

  constexpr void __cordl_internal_set_onRoundEndedCallbacks(::GlobalNamespace::__GameManager__OnRoundEnded* value);

  constexpr void __cordl_internal_set_onRoundStartedCallbacks(::GlobalNamespace::__GameManager__OnRoundStarted* value);

  constexpr void __cordl_internal_set_waitForPlayersBeforeStartingRound(bool value);

  /// @brief Method .ctor, addr 0x29d10ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::GameRound* getStaticF__currentRound_k__BackingField();

  static inline bool getStaticF__hasHuntStarted_k__BackingField();

  static inline bool getStaticF__isCreativeMode_k__BackingField();

  static inline bool getStaticF_allowGameRounds();

  static inline bool getStaticF_doHiderHints();

  static inline bool getStaticF_hasRoundProgressedEnoughForHiderHints();

  static inline ::StringW getStaticF_lastFirstSelectedSeekerUserID();

  static inline ::System::DateTime getStaticF_lastNewSeekerTimestamp();

  static inline float_t getStaticF_nextHiderHintTime();

  static inline float_t getStaticF_nextRoundStartTime();

  static inline ::GlobalNamespace::__GameManager__OnHuntStarted* getStaticF_onHuntStartedPersistantCallbacks();

  static inline ::GlobalNamespace::__GameManager__OnRoundEnded* getStaticF_onRoundEndedPersistantCallbacks();

  static inline ::GlobalNamespace::__GameManager__OnRoundStarted* getStaticF_onRoundStartedPersistantCallbacks();

  static inline ::GlobalNamespace::GameRound* getStaticF_previousRound();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<float_t, int32_t>>* getStaticF_seekerSaveData();

  /// @brief Method get_currentRound, addr 0x29cc2b8, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameRound* get_currentRound();

  /// @brief Method get_hasHuntStarted, addr 0x29cc3fc, size 0x58, virtual false, abstract: false, final false
  static inline bool get_hasHuntStarted();

  /// @brief Method get_hasRound, addr 0x29cc36c, size 0x90, virtual false, abstract: false, final false
  static inline bool get_hasRound();

  /// @brief Method get_isCreativeMode, addr 0x29cc4b0, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isCreativeMode();

  /// @brief Method get_isPlayMode, addr 0x29cc564, size 0x90, virtual false, abstract: false, final false
  static inline bool get_isPlayMode();

  static inline void setStaticF__currentRound_k__BackingField(::GlobalNamespace::GameRound* value);

  static inline void setStaticF__hasHuntStarted_k__BackingField(bool value);

  static inline void setStaticF__isCreativeMode_k__BackingField(bool value);

  static inline void setStaticF_allowGameRounds(bool value);

  static inline void setStaticF_doHiderHints(bool value);

  static inline void setStaticF_hasRoundProgressedEnoughForHiderHints(bool value);

  static inline void setStaticF_lastFirstSelectedSeekerUserID(::StringW value);

  static inline void setStaticF_lastNewSeekerTimestamp(::System::DateTime value);

  static inline void setStaticF_nextHiderHintTime(float_t value);

  static inline void setStaticF_nextRoundStartTime(float_t value);

  static inline void setStaticF_onHuntStartedPersistantCallbacks(::GlobalNamespace::__GameManager__OnHuntStarted* value);

  static inline void setStaticF_onRoundEndedPersistantCallbacks(::GlobalNamespace::__GameManager__OnRoundEnded* value);

  static inline void setStaticF_onRoundStartedPersistantCallbacks(::GlobalNamespace::__GameManager__OnRoundStarted* value);

  static inline void setStaticF_previousRound(::GlobalNamespace::GameRound* value);

  static inline void setStaticF_seekerSaveData(::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<float_t, int32_t>>* value);

  /// @brief Method set_currentRound, addr 0x29cc310, size 0x5c, virtual false, abstract: false, final false
  static inline void set_currentRound(::GlobalNamespace::GameRound* value);

  /// @brief Method set_hasHuntStarted, addr 0x29cc454, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hasHuntStarted(bool value);

  /// @brief Method set_isCreativeMode, addr 0x29cc508, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isCreativeMode(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameManager(GameManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameManager(GameManager const&) = delete;

  /// @brief Field waitForPlayersBeforeStartingRound, offset: 0x18, size: 0x1, def value: None
  bool ___waitForPlayersBeforeStartingRound;

  /// @brief Field onRoundStartedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__GameManager__OnRoundStarted* ___onRoundStartedCallbacks;

  /// @brief Field onRoundEndedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__GameManager__OnRoundEnded* ___onRoundEndedCallbacks;

  /// @brief Field onHuntStartedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GameManager__OnHuntStarted* ___onHuntStartedCallbacks;

  /// @brief Field onIsCreativeModeUpdatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated* ___onIsCreativeModeUpdatedCallbacks;

  /// @brief Field ROUND_END_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROUND_END_SOUND_KEY{ u"roundEnd" };

  /// @brief Field ROUND_START_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROUND_START_SOUND_KEY{ u"roundStart" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Game: " };

  /// @brief Field hiderHintHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hiderHintHapticDuration{ 1.0 };

  /// @brief Field hiderHintHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t hiderHintHapticIntensity{ 0.3 };

  /// @brief Field hiderHintSoundKey offset 0xffffffff size 0x8
  static constexpr ::ConstString hiderHintSoundKey{ u"hiderHint" };

  /// @brief Field hiderHintTimeVariance offset 0xffffffff size 0x4
  static constexpr float_t hiderHintTimeVariance{ 0.15 };

  /// @brief Field isCreativeModeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString isCreativeModeKey{ u"creativeMode" };

  /// @brief Field lastNewSeekerTimestampKey offset 0xffffffff size 0x8
  static constexpr ::ConstString lastNewSeekerTimestampKey{ u"lastNewSeekerTimestamp" };

  /// @brief Field maxSeekersForAutoSeekerSelection offset 0xffffffff size 0x4
  static constexpr int32_t maxSeekersForAutoSeekerSelection{ static_cast<int32_t>(0x3) };

  /// @brief Field maxTimeBetweenHints offset 0xffffffff size 0x4
  static constexpr float_t maxTimeBetweenHints{ 50.0 };

  /// @brief Field maxTimeBetweenNewSeekers offset 0xffffffff size 0x4
  static constexpr float_t maxTimeBetweenNewSeekers{ 90.0 };

  /// @brief Field maxTimeBetweenNewSeekersWhenOnlyOneSeeker offset 0xffffffff size 0x4
  static constexpr float_t maxTimeBetweenNewSeekersWhenOnlyOneSeeker{ 40.0 };

  /// @brief Field minHidersForAutoSeekerSelection offset 0xffffffff size 0x4
  static constexpr int32_t minHidersForAutoSeekerSelection{ static_cast<int32_t>(0x2) };

  /// @brief Field minRoundRatioForHiderHints offset 0xffffffff size 0x4
  static constexpr float_t minRoundRatioForHiderHints{ 0.3 };

  /// @brief Field minTimeBetweenHints offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenHints{ 10.0 };

  /// @brief Field roundRatioForMinTimeBetweenHints offset 0xffffffff size 0x4
  static constexpr float_t roundRatioForMinTimeBetweenHints{ 0.9 };

  /// @brief Field seekerSaveDuration offset 0xffffffff size 0x4
  static constexpr float_t seekerSaveDuration{ 300.0 };

  /// @brief Field timeBetweenRounds offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenRounds{ 30.0 };

  /// @brief Field timeBetweenRoundsFromCreativeMode offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenRoundsFromCreativeMode{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameManager, ___waitForPlayersBeforeStartingRound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameManager, ___onRoundStartedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameManager, ___onRoundEndedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameManager, ___onHuntStartedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameManager, ___onIsCreativeModeUpdatedCallbacks) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameManager__RoundResult, "", "GameManager/RoundResult");
NEED_NO_BOX(::GlobalNamespace::GameManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameManager*, "", "GameManager");
NEED_NO_BOX(::GlobalNamespace::__GameManager__OnHuntStarted);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameManager__OnHuntStarted*, "", "GameManager/OnHuntStarted");
NEED_NO_BOX(::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameManager__OnIsCreativeModeUpdated*, "", "GameManager/OnIsCreativeModeUpdated");
NEED_NO_BOX(::GlobalNamespace::__GameManager__OnRoundEnded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameManager__OnRoundEnded*, "", "GameManager/OnRoundEnded");
NEED_NO_BOX(::GlobalNamespace::__GameManager__OnRoundStarted);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameManager__OnRoundStarted*, "", "GameManager/OnRoundStarted");
