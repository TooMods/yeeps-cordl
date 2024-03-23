#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableImpactItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HotCocoItem)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HotCocoItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HotCocoItem);
// Type: ::HotCocoItem
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HotCocoItem*
class CORDL_TYPE HotCocoItem : public ::GlobalNamespace::ThrowableImpactItem {
public:
  // Declarations
  /// @brief Field canDrink, offset 0x141, size 0x1
  __declspec(property(get = __cordl_internal_get_canDrink, put = __cordl_internal_set_canDrink)) bool canDrink;

  /// @brief Field cupCenter, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_cupCenter, put = __cordl_internal_set_cupCenter))::UnityW<::UnityEngine::Transform> cupCenter;

  /// @brief Field drinkOffsetFromCupCenter, offset 0x118, size 0xc
  __declspec(property(get = __cordl_internal_get_drinkOffsetFromCupCenter, put = __cordl_internal_set_drinkOffsetFromCupCenter))::UnityEngine::Vector3 drinkOffsetFromCupCenter;

  /// @brief Field drinkSoundKey, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_drinkSoundKey, put = __cordl_internal_set_drinkSoundKey))::StringW drinkSoundKey;

  /// @brief Field filledContainer, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_filledContainer, put = __cordl_internal_set_filledContainer))::UnityW<::UnityEngine::GameObject> filledContainer;

  /// @brief Field isFilled, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get_isFilled, put = __cordl_internal_set_isFilled)) bool isFilled;

  /// @brief Field masterPlayer, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field spillEffectPrefab, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_spillEffectPrefab, put = __cordl_internal_set_spillEffectPrefab))::UnityW<::UnityEngine::GameObject> spillEffectPrefab;

  /// @brief Method AllowTrail, addr 0x2aa2c5c, size 0x8, virtual true, abstract: false, final false
  inline bool AllowTrail();

  /// @brief Method DoSpillEffect, addr 0x2aa2838, size 0xec, virtual false, abstract: false, final false
  inline void DoSpillEffect();

  /// @brief Method DoesCollideWithPlayers, addr 0x2aa255c, size 0x8, virtual true, abstract: false, final false
  inline bool DoesCollideWithPlayers();

  /// @brief Method Initialize, addr 0x2aa23c0, size 0x20, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::HotCocoItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aa2408, size 0x1c, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnImpactTriggered, addr 0x2aa2564, size 0x1b0, virtual true, abstract: false, final false
  inline void OnImpactTriggered(::UnityEngine::Collision* collision);

  /// @brief Method OnIsMasterUpdated, addr 0x2aa2558, size 0x4, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2aa2714, size 0x124, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2aa2924, size 0x26c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method RefreshCanDrink, addr 0x2aa2424, size 0x134, virtual false, abstract: false, final false
  inline void RefreshCanDrink();

  /// @brief Method SendDrink, addr 0x2aa2b90, size 0xcc, virtual false, abstract: false, final false
  inline void SendDrink();

  /// @brief Method SetIsFilled, addr 0x2aa23e0, size 0x28, virtual false, abstract: false, final false
  inline void SetIsFilled(bool newIsFilled);

  constexpr bool const& __cordl_internal_get_canDrink() const;

  constexpr bool& __cordl_internal_get_canDrink();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cupCenter() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cupCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_drinkOffsetFromCupCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_drinkOffsetFromCupCenter();

  constexpr ::StringW const& __cordl_internal_get_drinkSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_drinkSoundKey();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_filledContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_filledContainer();

  constexpr bool const& __cordl_internal_get_isFilled() const;

  constexpr bool& __cordl_internal_get_isFilled();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spillEffectPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spillEffectPrefab();

  constexpr void __cordl_internal_set_canDrink(bool value);

  constexpr void __cordl_internal_set_cupCenter(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_drinkOffsetFromCupCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_drinkSoundKey(::StringW value);

  constexpr void __cordl_internal_set_filledContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isFilled(bool value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_spillEffectPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2aa2c64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HotCocoItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HotCocoItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HotCocoItem(HotCocoItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HotCocoItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HotCocoItem(HotCocoItem const&) = delete;

  /// @brief Field cupCenter, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cupCenter;

  /// @brief Field drinkOffsetFromCupCenter, offset: 0x118, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___drinkOffsetFromCupCenter;

  /// @brief Field filledContainer, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___filledContainer;

  /// @brief Field drinkSoundKey, offset: 0x130, size: 0x8, def value: None
  ::StringW ___drinkSoundKey;

  /// @brief Field spillEffectPrefab, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___spillEffectPrefab;

  /// @brief Field isFilled, offset: 0x140, size: 0x1, def value: None
  bool ___isFilled;

  /// @brief Field canDrink, offset: 0x141, size: 0x1, def value: None
  bool ___canDrink;

  /// @brief Field masterPlayer, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field drinkHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t drinkHapticAmplitude{ 0.3 };

  /// @brief Field drinkHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t drinkHapticDuration{ 0.1 };

  /// @brief Field drinkMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString drinkMessage{ u"drink" };

  /// @brief Field emptyMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString emptyMessage{ u"empty" };

  /// @brief Field maxDrinkAngle offset 0xffffffff size 0x4
  static constexpr float_t maxDrinkAngle{ 45.0 };

  /// @brief Field triggerDistanceFromMasterPlayerHead offset 0xffffffff size 0x4
  static constexpr float_t triggerDistanceFromMasterPlayerHead{ 0.125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HotCocoItem, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___cupCenter) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___drinkOffsetFromCupCenter) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___filledContainer) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___drinkSoundKey) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___spillEffectPrefab) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___isFilled) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___canDrink) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotCocoItem, ___masterPlayer) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HotCocoItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HotCocoItem*, "", "HotCocoItem");
