#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PunTurnManager)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class IPunTurnManagerCallbacks;
}
namespace Photon::Realtime {
class IOnEventCallback;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PunTurnManager;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PunTurnManager);
// Type: Photon.Pun.UtilityScripts::PunTurnManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PunTurnManager*
class CORDL_TYPE PunTurnManager : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
  // Declarations
  __declspec(property(get = get_ElapsedTimeInTurn)) float_t ElapsedTimeInTurn;

  __declspec(property(get = get_IsCompletedByAll)) bool IsCompletedByAll;

  __declspec(property(get = get_IsFinishedByMe)) bool IsFinishedByMe;

  __declspec(property(get = get_IsOver)) bool IsOver;

  __declspec(property(get = get_RemainingSecondsInTurn)) float_t RemainingSecondsInTurn;

  __declspec(property(get = get_Turn, put = set_Turn)) int32_t Turn;

  /// @brief Field TurnDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_TurnDuration, put = __cordl_internal_set_TurnDuration)) float_t TurnDuration;

  /// @brief Field TurnManagerListener, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_TurnManagerListener, put = __cordl_internal_set_TurnManagerListener))::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* TurnManagerListener;

  /// @brief Field _isOverCallProcessed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isOverCallProcessed, put = __cordl_internal_set__isOverCallProcessed)) bool _isOverCallProcessed;

  /// @brief Field finishedPlayers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedPlayers, put = __cordl_internal_set_finishedPlayers))::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* finishedPlayers;

  /// @brief Field sender, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender))::Photon::Realtime::Player* sender;

  /// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
  constexpr operator ::Photon::Realtime::IOnEventCallback*() noexcept;

  /// @brief Method BeginTurn, addr 0x1ecb490, size 0x1c, virtual false, abstract: false, final false
  inline void BeginTurn();

  /// @brief Method GetPlayerFinishedTurn, addr 0x1ecbc98, size 0x6c, virtual false, abstract: false, final false
  inline bool GetPlayerFinishedTurn(::Photon::Realtime::Player* player);

  static inline ::Photon::Pun::UtilityScripts::PunTurnManager* New_ctor();

  /// @brief Method OnEvent, addr 0x1ecbd04, size 0x5c, virtual true, abstract: false, final true
  inline void OnEvent(::ExitGames::Client::Photon::EventData* photonEvent);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x1ecbd60, size 0x124, virtual true, abstract: false, final false
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method ProcessOnEvent, addr 0x1ecb8c8, size 0x3d0, virtual false, abstract: false, final false
  inline void ProcessOnEvent(uint8_t eventCode, ::System::Object* content, int32_t senderId);

  /// @brief Method SendMove, addr 0x1ecb4ac, size 0x2b8, virtual false, abstract: false, final false
  inline void SendMove(::System::Object* move, bool finished);

  /// @brief Method Start, addr 0x1ecb38c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x1ecb390, size 0x100, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_TurnDuration() const;

  constexpr float_t& __cordl_internal_get_TurnDuration();

  constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*& __cordl_internal_get_TurnManagerListener();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*> const& __cordl_internal_get_TurnManagerListener() const;

  constexpr bool const& __cordl_internal_get__isOverCallProcessed() const;

  constexpr bool& __cordl_internal_get__isOverCallProcessed();

  constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*& __cordl_internal_get_finishedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*> const& __cordl_internal_get_finishedPlayers() const;

  constexpr ::Photon::Realtime::Player*& __cordl_internal_get_sender();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& __cordl_internal_get_sender() const;

  constexpr void __cordl_internal_set_TurnDuration(float_t value);

  constexpr void __cordl_internal_set_TurnManagerListener(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* value);

  constexpr void __cordl_internal_set__isOverCallProcessed(bool value);

  constexpr void __cordl_internal_set_finishedPlayers(::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* value);

  constexpr void __cordl_internal_set_sender(::Photon::Realtime::Player* value);

  /// @brief Method .ctor, addr 0x1ecbe84, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ElapsedTimeInTurn, addr 0x1ecb044, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_ElapsedTimeInTurn();

  /// @brief Method get_IsCompletedByAll, addr 0x1ecb220, size 0xb8, virtual false, abstract: false, final false
  inline bool get_IsCompletedByAll();

  /// @brief Method get_IsFinishedByMe, addr 0x1ecb2d8, size 0x84, virtual false, abstract: false, final false
  inline bool get_IsFinishedByMe();

  /// @brief Method get_IsOver, addr 0x1ecb35c, size 0x30, virtual false, abstract: false, final false
  inline bool get_IsOver();

  /// @brief Method get_RemainingSecondsInTurn, addr 0x1ecb1f8, size 0x28, virtual false, abstract: false, final false
  inline float_t get_RemainingSecondsInTurn();

  /// @brief Method get_Turn, addr 0x1ecac90, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_Turn();

  /// @brief Convert to "::Photon::Realtime::IOnEventCallback"
  constexpr ::Photon::Realtime::IOnEventCallback* i___Photon__Realtime__IOnEventCallback() noexcept;

  /// @brief Method set_Turn, addr 0x1ecae20, size 0xa0, virtual false, abstract: false, final false
  inline void set_Turn(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunTurnManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunTurnManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunTurnManager(PunTurnManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunTurnManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunTurnManager(PunTurnManager const&) = delete;

  /// @brief Field sender, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::Player* ___sender;

  /// @brief Field TurnDuration, offset: 0x28, size: 0x4, def value: None
  float_t ___TurnDuration;

  /// @brief Field TurnManagerListener, offset: 0x30, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* ___TurnManagerListener;

  /// @brief Field finishedPlayers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* ___finishedPlayers;

  /// @brief Field _isOverCallProcessed, offset: 0x40, size: 0x1, def value: None
  bool ____isOverCallProcessed;

  /// @brief Field EvFinalMove offset 0xffffffff size 0x1
  static constexpr uint8_t EvFinalMove{ static_cast<uint8_t>(0x2u) };

  /// @brief Field EvMove offset 0xffffffff size 0x1
  static constexpr uint8_t EvMove{ static_cast<uint8_t>(0x1u) };

  /// @brief Field TurnManagerEventOffset offset 0xffffffff size 0x1
  static constexpr uint8_t TurnManagerEventOffset{ static_cast<uint8_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PunTurnManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___sender) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___TurnDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___TurnManagerListener) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___finishedPlayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ____isOverCallProcessed) == 0x40, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PunTurnManager);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PunTurnManager*, "Photon.Pun.UtilityScripts", "PunTurnManager");
