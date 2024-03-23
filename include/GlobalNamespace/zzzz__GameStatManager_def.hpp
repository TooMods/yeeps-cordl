#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameStatManager)
namespace GlobalNamespace {
class GameStat;
}
namespace GlobalNamespace {
class __GameStat__OnStatUpdated;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class GameStatManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameStatManager);
// Type: ::GameStatManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameStatManager*
class CORDL_TYPE GameStatManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field earliestAllowedTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_earliestAllowedTime, put = setStaticF_earliestAllowedTime))::System::DateTime earliestAllowedTime;

  /// @brief Field trackedStats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_trackedStats, put = setStaticF_trackedStats))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GameStat*>* trackedStats;

  /// @brief Method AddToStat, addr 0x29c5e60, size 0x184, virtual false, abstract: false, final false
  static inline void AddToStat(::StringW statKey, int32_t amount);

  /// @brief Method AppendToStat, addr 0x29c47ac, size 0x1dc, virtual false, abstract: false, final false
  static inline void AppendToStat(::StringW statKey, ::StringW uniqueKey);

  /// @brief Method CreateStat, addr 0x29d2958, size 0x7f0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameStat* CreateStat(::StringW statKey);

  /// @brief Method GetStatLocalSaveData, addr 0x29d3148, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetStatLocalSaveData(::StringW statKey);

  /// @brief Method IncrementStat, addr 0x29ce99c, size 0x180, virtual false, abstract: false, final false
  static inline void IncrementStat(::StringW statKey);

  /// @brief Method IsTrackingStat, addr 0x29d3584, size 0x80, virtual false, abstract: false, final false
  static inline bool IsTrackingStat(::StringW statKey);

  /// @brief Method MaximizeStat, addr 0x29d33f4, size 0x190, virtual false, abstract: false, final false
  static inline void MaximizeStat(::StringW statKey, int32_t newValue);

  /// @brief Method SaveStatLocally, addr 0x29d3384, size 0x70, virtual false, abstract: false, final false
  static inline void SaveStatLocally(::GlobalNamespace::GameStat* gameStat);

  /// @brief Method SetEarliestAllowedTime, addr 0x29d24e0, size 0x210, virtual false, abstract: false, final false
  static inline void SetEarliestAllowedTime(::System::DateTime earliestAllowedTime);

  /// @brief Method StartTracking, addr 0x29d26f0, size 0x268, virtual false, abstract: false, final false
  static inline int32_t StartTracking(::StringW statKey, ::GlobalNamespace::__GameStat__OnStatUpdated* onStatUpdated);

  /// @brief Method StopTracking, addr 0x29d31a0, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t StopTracking(::StringW statKey, ::GlobalNamespace::__GameStat__OnStatUpdated* onStatUpdated);

  static inline ::System::DateTime getStaticF_earliestAllowedTime();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GameStat*>* getStaticF_trackedStats();

  static inline void setStaticF_earliestAllowedTime(::System::DateTime value);

  static inline void setStaticF_trackedStats(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::GameStat*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameStatManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameStatManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameStatManager(GameStatManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameStatManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameStatManager(GameStatManager const&) = delete;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Game Stats: " };

  /// @brief Field statKey_blocksTraveledByExplosives offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_blocksTraveledByExplosives{ u"blocksTraveledByExplosives" };

  /// @brief Field statKey_blocksTraveledByFirework offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_blocksTraveledByFirework{ u"blocksTraveledByFirework" };

  /// @brief Field statKey_blocksTraveledByUmbrella offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_blocksTraveledByUmbrella{ u"blocksTraveledByUmbrella" };

  /// @brief Field statKey_challengeBoardsVisited offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_challengeBoardsVisited{ u"challengeBoardsVisited" };

  /// @brief Field statKey_cosmeticsStoresVisited offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_cosmeticsStoresVisited{ u"cosmeticsStoresVisited" };

  /// @brief Field statKey_dressingRoomsVisited offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_dressingRoomsVisited{ u"dressingRoomsVisited" };

  /// @brief Field statKey_hidersDetected offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_hidersDetected{ u"hidersDetected" };

  /// @brief Field statKey_maxBlocksBombJumped offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_maxBlocksBombJumped{ u"maxBlocksBombJumped" };

  /// @brief Field statKey_maxBlocksFallenOntoTrampoline offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_maxBlocksFallenOntoTrampoline{ u"maxBlocksFallenOntoTrampoline" };

  /// @brief Field statKey_maxBlocksPinHitHider offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_maxBlocksPinHitHider{ u"maxBlocksPinHitHider" };

  /// @brief Field statKey_maxBlocksTraveledInTeleporter offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_maxBlocksTraveledInTeleporter{ u"maxBlocksTraveledInTeleporter" };

  /// @brief Field statKey_newsBoardsVisited offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_newsBoardsVisited{ u"newsBoardsVisited" };

  /// @brief Field statKey_paintColorsUsed offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_paintColorsUsed{ u"paintColorsUsed" };

  /// @brief Field statKey_playersGivenAnItem offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_playersGivenAnItem{ u"playersGivenAnItem" };

  /// @brief Field statKey_playersMet offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_playersMet{ u"playersMet" };

  /// @brief Field statKey_roomsDecoysPlacedIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsDecoysPlacedIn{ u"roomsDecoysPlacedIn" };

  /// @brief Field statKey_roomsDetectedHidersIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsDetectedHidersIn{ u"roomsDetectedHidersIn" };

  /// @brief Field statKey_roomsGameRoundsFinishedIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsGameRoundsFinishedIn{ u"roomsGameRoundsFinishedIn" };

  /// @brief Field statKey_roomsPlacedReinforcedPillowsIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsPlacedReinforcedPillowsIn{ u"roomsPlacedReinforcedPillowsIn" };

  /// @brief Field statKey_roomsSmokeUsedIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsSmokeUsedIn{ u"roomsSmokeUsedIn" };

  /// @brief Field statKey_roomsStuffingDispensersUsedIn offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_roomsStuffingDispensersUsedIn{ u"roomsStuffingDispensersUsedIn" };

  /// @brief Field statKey_springPadsUsed offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_springPadsUsed{ u"springPadsUsed" };

  /// @brief Field statKey_techWebsVisited offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_techWebsVisited{ u"techWebsVisited" };

  /// @brief Field statKey_timesBecameSeeker offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesBecameSeeker{ u"timesBecameSeeker" };

  /// @brief Field statKey_timesBoughtCosmetics offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesBoughtCosmetics{ u"timesBoughtCosmetics" };

  /// @brief Field statKey_timesDestroyedStuffedBlocksWithBaton offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesDestroyedStuffedBlocksWithBaton{ u"timesDestroyedStuffedBlocksWithBaton" };

  /// @brief Field statKey_timesDestroyedStuffedBlocksWithPins offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesDestroyedStuffedBlocksWithPins{ u"timesDestroyedStuffedBlocksWithPins" };

  /// @brief Field statKey_timesDestroyedStuffingBlocksWithPellets offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesDestroyedStuffingBlocksWithPellets{ u"timesDestroyedStuffingBlocksWithPellets" };

  /// @brief Field statKey_timesDetonatedPlacedBombWithPellets offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesDetonatedPlacedBombWithPellets{ u"timesDetonatedPlacedBombWithPellets" };

  /// @brief Field statKey_timesDetonatedPlacedBombs offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesDetonatedPlacedBombs{ u"timesDetonatedPlacedBombs" };

  /// @brief Field statKey_timesExplodedStuffedBlocks offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesExplodedStuffedBlocks{ u"timesExplodedStuffedBlocks" };

  /// @brief Field statKey_timesFallenInSpikeTrap offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesFallenInSpikeTrap{ u"timesFallenInSpikeTrap" };

  /// @brief Field statKey_timesFinishedGameRounds offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesFinishedGameRounds{ u"timesFinishedGameRounds" };

  /// @brief Field statKey_timesHarvestedPillowPlants offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesHarvestedPillowPlants{ u"timesHarvestedPillowPlants" };

  /// @brief Field statKey_timesPinnedHiderWhileAirborne offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesPinnedHiderWhileAirborne{ u"timesPinnedHiderWhileAirborne" };

  /// @brief Field statKey_timesWentAboveBuildHeightLimit offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_timesWentAboveBuildHeightLimit{ u"timesWentAboveBuildHeightLimit" };

  /// @brief Field statKey_trampolinesUsed offset 0xffffffff size 0x8
  static constexpr ::ConstString statKey_trampolinesUsed{ u"trampolinesUsed" };

  /// @brief Field statSavePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString statSavePrefix{ u"gameStat_" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameStatManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameStatManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameStatManager*, "", "GameStatManager");
