#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialManager)
namespace GlobalNamespace {
class HitTargetDummyTask;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialManager);
// Type: ::TutorialManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialManager*
class CORDL_TYPE TutorialManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field bridgeMapObjectGuideContainer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bridgeMapObjectGuideContainer,
                      put = __cordl_internal_set_bridgeMapObjectGuideContainer))::UnityW<::UnityEngine::Transform> bridgeMapObjectGuideContainer;

  /// @brief Field didStart, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_didStart, put = __cordl_internal_set_didStart)) bool didStart;

  /// @brief Field fortMapObjectGuideContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_fortMapObjectGuideContainer, put = __cordl_internal_set_fortMapObjectGuideContainer))::UnityW<::UnityEngine::Transform> fortMapObjectGuideContainer;

  /// @brief Field hasDummyBeenHit, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDummyBeenHit, put = __cordl_internal_set_hasDummyBeenHit)) bool hasDummyBeenHit;

  /// @brief Field hasHeldPillow, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHeldPillow, put = __cordl_internal_set_hasHeldPillow)) bool hasHeldPillow;

  /// @brief Field hasHeldPin, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHeldPin, put = __cordl_internal_set_hasHeldPin)) bool hasHeldPin;

  /// @brief Field hasPlacedAnyPillowInBridge, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlacedAnyPillowInBridge, put = __cordl_internal_set_hasPlacedAnyPillowInBridge)) bool hasPlacedAnyPillowInBridge;

  /// @brief Field hasPlacedAnyPillowInFort, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlacedAnyPillowInFort, put = __cordl_internal_set_hasPlacedAnyPillowInFort)) bool hasPlacedAnyPillowInFort;

  /// @brief Field hitTargetDummyTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hitTargetDummyTask, put = __cordl_internal_set_hitTargetDummyTask))::UnityW<::GlobalNamespace::HitTargetDummyTask> hitTargetDummyTask;

  /// @brief Field registeredMasterPlayer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredMasterPlayer, put = __cordl_internal_set_registeredMasterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> registeredMasterPlayer;

  /// @brief Field shouldTrack, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldTrack, put = __cordl_internal_set_shouldTrack)) bool shouldTrack;

  static inline ::GlobalNamespace::TutorialManager* New_ctor();

  /// @brief Method OnBridgeMapObjectGuideSetOccupied, addr 0x153f19c, size 0x90, virtual false, abstract: false, final false
  inline void OnBridgeMapObjectGuideSetOccupied(bool onMapLoad);

  /// @brief Method OnDestroy, addr 0x153ed48, size 0x1bc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnFortMapObjectGuideSetOccupied, addr 0x153f10c, size 0x90, virtual false, abstract: false, final false
  inline void OnFortMapObjectGuideSetOccupied(bool onMapLoad);

  /// @brief Method OnMasterPlayerCreated, addr 0x153ebf0, size 0x158, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* masterPlayer);

  /// @brief Method OnMasterPlayerPickedUpItem, addr 0x153f024, size 0xe8, virtual false, abstract: false, final false
  inline void OnMasterPlayerPickedUpItem(::GlobalNamespace::Item* item);

  /// @brief Method OnSetIsPinHeld, addr 0x153ef04, size 0x90, virtual false, abstract: false, final false
  inline void OnSetIsPinHeld(bool newIsPinHeld);

  /// @brief Method SetHasDummyBeenHit, addr 0x153ef94, size 0x90, virtual false, abstract: false, final false
  inline void SetHasDummyBeenHit(bool newHasDummyBeenHit);

  /// @brief Method Start, addr 0x153e744, size 0x4ac, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bridgeMapObjectGuideContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bridgeMapObjectGuideContainer();

  constexpr bool const& __cordl_internal_get_didStart() const;

  constexpr bool& __cordl_internal_get_didStart();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fortMapObjectGuideContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fortMapObjectGuideContainer();

  constexpr bool const& __cordl_internal_get_hasDummyBeenHit() const;

  constexpr bool& __cordl_internal_get_hasDummyBeenHit();

  constexpr bool const& __cordl_internal_get_hasHeldPillow() const;

  constexpr bool& __cordl_internal_get_hasHeldPillow();

  constexpr bool const& __cordl_internal_get_hasHeldPin() const;

  constexpr bool& __cordl_internal_get_hasHeldPin();

  constexpr bool const& __cordl_internal_get_hasPlacedAnyPillowInBridge() const;

  constexpr bool& __cordl_internal_get_hasPlacedAnyPillowInBridge();

  constexpr bool const& __cordl_internal_get_hasPlacedAnyPillowInFort() const;

  constexpr bool& __cordl_internal_get_hasPlacedAnyPillowInFort();

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask> const& __cordl_internal_get_hitTargetDummyTask() const;

  constexpr ::UnityW<::GlobalNamespace::HitTargetDummyTask>& __cordl_internal_get_hitTargetDummyTask();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_registeredMasterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_registeredMasterPlayer();

  constexpr bool const& __cordl_internal_get_shouldTrack() const;

  constexpr bool& __cordl_internal_get_shouldTrack();

  constexpr void __cordl_internal_set_bridgeMapObjectGuideContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_didStart(bool value);

  constexpr void __cordl_internal_set_fortMapObjectGuideContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_hasDummyBeenHit(bool value);

  constexpr void __cordl_internal_set_hasHeldPillow(bool value);

  constexpr void __cordl_internal_set_hasHeldPin(bool value);

  constexpr void __cordl_internal_set_hasPlacedAnyPillowInBridge(bool value);

  constexpr void __cordl_internal_set_hasPlacedAnyPillowInFort(bool value);

  constexpr void __cordl_internal_set_hitTargetDummyTask(::UnityW<::GlobalNamespace::HitTargetDummyTask> value);

  constexpr void __cordl_internal_set_registeredMasterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_shouldTrack(bool value);

  /// @brief Method .ctor, addr 0x153f22c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialManager(TutorialManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialManager(TutorialManager const&) = delete;

  /// @brief Field shouldTrack, offset: 0x18, size: 0x1, def value: None
  bool ___shouldTrack;

  /// @brief Field didStart, offset: 0x19, size: 0x1, def value: None
  bool ___didStart;

  /// @brief Field hitTargetDummyTask, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HitTargetDummyTask> ___hitTargetDummyTask;

  /// @brief Field hasHeldPin, offset: 0x28, size: 0x1, def value: None
  bool ___hasHeldPin;

  /// @brief Field hasDummyBeenHit, offset: 0x29, size: 0x1, def value: None
  bool ___hasDummyBeenHit;

  /// @brief Field registeredMasterPlayer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___registeredMasterPlayer;

  /// @brief Field hasHeldPillow, offset: 0x38, size: 0x1, def value: None
  bool ___hasHeldPillow;

  /// @brief Field fortMapObjectGuideContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___fortMapObjectGuideContainer;

  /// @brief Field hasPlacedAnyPillowInFort, offset: 0x48, size: 0x1, def value: None
  bool ___hasPlacedAnyPillowInFort;

  /// @brief Field bridgeMapObjectGuideContainer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bridgeMapObjectGuideContainer;

  /// @brief Field hasPlacedAnyPillowInBridge, offset: 0x58, size: 0x1, def value: None
  bool ___hasPlacedAnyPillowInBridge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialManager, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___shouldTrack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___didStart) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hitTargetDummyTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hasHeldPin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hasDummyBeenHit) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___registeredMasterPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hasHeldPillow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___fortMapObjectGuideContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hasPlacedAnyPillowInFort) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___bridgeMapObjectGuideContainer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialManager, ___hasPlacedAnyPillowInBridge) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialManager*, "", "TutorialManager");
