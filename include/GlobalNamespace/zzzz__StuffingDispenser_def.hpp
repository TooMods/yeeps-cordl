#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StuffingDispenser)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class StuffingDispenserMapObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class StuffingDispenser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StuffingDispenser);
// Type: ::StuffingDispenser
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingDispenser*
class CORDL_TYPE StuffingDispenser : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field amountToGive, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_amountToGive, put = __cordl_internal_set_amountToGive)) int32_t amountToGive;

  /// @brief Field buttons, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buttons,
                      put = __cordl_internal_set_buttons))::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> buttons;

  /// @brief Field dispenseTimer, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_dispenseTimer, put = __cordl_internal_set_dispenseTimer)) float_t dispenseTimer;

  /// @brief Field isActiveForAnyPlayer, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveForAnyPlayer, put = __cordl_internal_set_isActiveForAnyPlayer)) bool isActiveForAnyPlayer;

  /// @brief Field isActiveForMaster, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveForMaster, put = __cordl_internal_set_isActiveForMaster)) bool isActiveForMaster;

  /// @brief Field isActiveForOtherPlayer, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveForOtherPlayer, put = __cordl_internal_set_isActiveForOtherPlayer)) bool isActiveForOtherPlayer;

  /// @brief Field isAddingStuffing, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_isAddingStuffing, put = __cordl_internal_set_isAddingStuffing)) bool isAddingStuffing;

  /// @brief Field leftButtonPressed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_leftButtonPressed, put = __cordl_internal_set_leftButtonPressed)) bool leftButtonPressed;

  /// @brief Field mapObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObject, put = __cordl_internal_set_mapObject))::UnityW<::GlobalNamespace::StuffingDispenserMapObject> mapObject;

  /// @brief Field rightButtonPressed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_rightButtonPressed, put = __cordl_internal_set_rightButtonPressed)) bool rightButtonPressed;

  /// @brief Field sideIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_sideIndex, put = __cordl_internal_set_sideIndex)) int32_t sideIndex;

  /// @brief Field stuffingSpawnPoint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingSpawnPoint, put = __cordl_internal_set_stuffingSpawnPoint))::UnityW<::UnityEngine::Transform> stuffingSpawnPoint;

  /// @brief Field timeBetweenDispenses, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenDispenses, put = __cordl_internal_set_timeBetweenDispenses)) float_t timeBetweenDispenses;

  /// @brief Method Initialize, addr 0xf251c0, size 0x24, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::StuffingDispenserMapObject* dispenserMapObject, int32_t sideIndex);

  static inline ::GlobalNamespace::StuffingDispenser* New_ctor();

  /// @brief Method OnButtonPressed, addr 0xf251e4, size 0x38, virtual false, abstract: false, final false
  inline void OnButtonPressed(bool right);

  /// @brief Method OnButtonReleased, addr 0xf25368, size 0x34, virtual false, abstract: false, final false
  inline void OnButtonReleased(bool right);

  /// @brief Method OnResetStuffingButtonPressed, addr 0xf25500, size 0x24, virtual false, abstract: false, final false
  inline void OnResetStuffingButtonPressed();

  /// @brief Method SetActiveForAnyPlayer, addr 0xf25414, size 0x24, virtual false, abstract: false, final false
  inline void SetActiveForAnyPlayer(bool active);

  /// @brief Method SetActiveForMasterPlayer, addr 0xf2521c, size 0x14c, virtual false, abstract: false, final false
  inline void SetActiveForMasterPlayer(bool active);

  /// @brief Method SetActiveForNonMasterPlayer, addr 0xf2539c, size 0x78, virtual false, abstract: false, final false
  inline void SetActiveForNonMasterPlayer(bool active);

  /// @brief Method Update, addr 0xf25438, size 0xc8, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_amountToGive() const;

  constexpr int32_t& __cordl_internal_get_amountToGive();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> const& __cordl_internal_get_buttons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*>& __cordl_internal_get_buttons();

  constexpr float_t const& __cordl_internal_get_dispenseTimer() const;

  constexpr float_t& __cordl_internal_get_dispenseTimer();

  constexpr bool const& __cordl_internal_get_isActiveForAnyPlayer() const;

  constexpr bool& __cordl_internal_get_isActiveForAnyPlayer();

  constexpr bool const& __cordl_internal_get_isActiveForMaster() const;

  constexpr bool& __cordl_internal_get_isActiveForMaster();

  constexpr bool const& __cordl_internal_get_isActiveForOtherPlayer() const;

  constexpr bool& __cordl_internal_get_isActiveForOtherPlayer();

  constexpr bool const& __cordl_internal_get_isAddingStuffing() const;

  constexpr bool& __cordl_internal_get_isAddingStuffing();

  constexpr bool const& __cordl_internal_get_leftButtonPressed() const;

  constexpr bool& __cordl_internal_get_leftButtonPressed();

  constexpr ::UnityW<::GlobalNamespace::StuffingDispenserMapObject> const& __cordl_internal_get_mapObject() const;

  constexpr ::UnityW<::GlobalNamespace::StuffingDispenserMapObject>& __cordl_internal_get_mapObject();

  constexpr bool const& __cordl_internal_get_rightButtonPressed() const;

  constexpr bool& __cordl_internal_get_rightButtonPressed();

  constexpr int32_t const& __cordl_internal_get_sideIndex() const;

  constexpr int32_t& __cordl_internal_get_sideIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stuffingSpawnPoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stuffingSpawnPoint();

  constexpr float_t const& __cordl_internal_get_timeBetweenDispenses() const;

  constexpr float_t& __cordl_internal_get_timeBetweenDispenses();

  constexpr void __cordl_internal_set_amountToGive(int32_t value);

  constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> value);

  constexpr void __cordl_internal_set_dispenseTimer(float_t value);

  constexpr void __cordl_internal_set_isActiveForAnyPlayer(bool value);

  constexpr void __cordl_internal_set_isActiveForMaster(bool value);

  constexpr void __cordl_internal_set_isActiveForOtherPlayer(bool value);

  constexpr void __cordl_internal_set_isAddingStuffing(bool value);

  constexpr void __cordl_internal_set_leftButtonPressed(bool value);

  constexpr void __cordl_internal_set_mapObject(::UnityW<::GlobalNamespace::StuffingDispenserMapObject> value);

  constexpr void __cordl_internal_set_rightButtonPressed(bool value);

  constexpr void __cordl_internal_set_sideIndex(int32_t value);

  constexpr void __cordl_internal_set_stuffingSpawnPoint(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_timeBetweenDispenses(float_t value);

  /// @brief Method .ctor, addr 0xf25524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StuffingDispenser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StuffingDispenser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StuffingDispenser(StuffingDispenser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StuffingDispenser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StuffingDispenser(StuffingDispenser const&) = delete;

  /// @brief Field timeBetweenDispenses, offset: 0x18, size: 0x4, def value: None
  float_t ___timeBetweenDispenses;

  /// @brief Field amountToGive, offset: 0x1c, size: 0x4, def value: None
  int32_t ___amountToGive;

  /// @brief Field stuffingSpawnPoint, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___stuffingSpawnPoint;

  /// @brief Field buttons, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> ___buttons;

  /// @brief Field rightButtonPressed, offset: 0x30, size: 0x1, def value: None
  bool ___rightButtonPressed;

  /// @brief Field leftButtonPressed, offset: 0x31, size: 0x1, def value: None
  bool ___leftButtonPressed;

  /// @brief Field isActiveForMaster, offset: 0x32, size: 0x1, def value: None
  bool ___isActiveForMaster;

  /// @brief Field isActiveForAnyPlayer, offset: 0x33, size: 0x1, def value: None
  bool ___isActiveForAnyPlayer;

  /// @brief Field isActiveForOtherPlayer, offset: 0x34, size: 0x1, def value: None
  bool ___isActiveForOtherPlayer;

  /// @brief Field dispenseTimer, offset: 0x38, size: 0x4, def value: None
  float_t ___dispenseTimer;

  /// @brief Field mapObject, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StuffingDispenserMapObject> ___mapObject;

  /// @brief Field sideIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___sideIndex;

  /// @brief Field isAddingStuffing, offset: 0x4c, size: 0x1, def value: None
  bool ___isAddingStuffing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StuffingDispenser, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___timeBetweenDispenses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___amountToGive) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___stuffingSpawnPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___buttons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___rightButtonPressed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___leftButtonPressed) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___isActiveForMaster) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___isActiveForAnyPlayer) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___isActiveForOtherPlayer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___dispenseTimer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___mapObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___sideIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingDispenser, ___isAddingStuffing) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StuffingDispenser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StuffingDispenser*, "", "StuffingDispenser");
