#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NametagManager)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class Nametag;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NametagManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NametagManager);
// Type: ::NametagManager
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NametagManager*
class CORDL_TYPE NametagManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::NametagManager>> {
public:
  // Declarations
  /// @brief Field curNametagTarget, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_curNametagTarget, put = __cordl_internal_set_curNametagTarget))::UnityW<::GlobalNamespace::Player> curNametagTarget;

  /// @brief Field curNametagTargetUserID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_curNametagTargetUserID, put = __cordl_internal_set_curNametagTargetUserID))::StringW curNametagTargetUserID;

  /// @brief Field lookingAtPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lookingAtPlayer, put = __cordl_internal_set_lookingAtPlayer))::UnityW<::GlobalNamespace::Player> lookingAtPlayer;

  /// @brief Field lookingAtPlayerTimer, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_lookingAtPlayerTimer, put = __cordl_internal_set_lookingAtPlayerTimer)) float_t lookingAtPlayerTimer;

  /// @brief Field masterPlayer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field minTimeLookingAtPlayerForNametag, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_minTimeLookingAtPlayerForNametag, put = __cordl_internal_set_minTimeLookingAtPlayerForNametag)) float_t minTimeLookingAtPlayerForNametag;

  /// @brief Field nametag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nametag, put = __cordl_internal_set_nametag))::UnityW<::GlobalNamespace::Nametag> nametag;

  /// @brief Field nametagCheckRadius, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_nametagCheckRadius, put = __cordl_internal_set_nametagCheckRadius)) float_t nametagCheckRadius;

  /// @brief Field nametagPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nametagPrefab, put = __cordl_internal_set_nametagPrefab))::UnityW<::UnityEngine::GameObject> nametagPrefab;

  /// @brief Field nametagVisibleDistance, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_nametagVisibleDistance, put = __cordl_internal_set_nametagVisibleDistance)) float_t nametagVisibleDistance;

  /// @brief Field nextNametagCheckTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_nextNametagCheckTime, put = __cordl_internal_set_nextNametagCheckTime)) float_t nextNametagCheckTime;

  /// @brief Field playerSightLayerMask, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_playerSightLayerMask, put = __cordl_internal_set_playerSightLayerMask))::UnityEngine::LayerMask playerSightLayerMask;

  /// @brief Field rayVerticalOffset, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_rayVerticalOffset, put = __cordl_internal_set_rayVerticalOffset)) float_t rayVerticalOffset;

  /// @brief Field shouldShowNametags, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShowNametags, put = __cordl_internal_set_shouldShowNametags)) bool shouldShowNametags;

  static inline ::GlobalNamespace::NametagManager* New_ctor();

  /// @brief Method OnIsCameraLinkedUpdated, addr 0x2e08fbc, size 0x20, virtual false, abstract: false, final false
  inline void OnIsCameraLinkedUpdated(bool newIsCameraLinked);

  /// @brief Method OnMasterPlayerCreated, addr 0x2e08f34, size 0x88, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* masterPlayer);

  /// @brief Method OnPlayerDestroyed, addr 0x2e08fdc, size 0x34, virtual false, abstract: false, final false
  inline void OnPlayerDestroyed(::StringW userID);

  /// @brief Method SetNametagTarget, addr 0x2e09010, size 0x26c, virtual false, abstract: false, final false
  inline void SetNametagTarget(::GlobalNamespace::Player* targetPlayer, bool forceUpdate);

  /// @brief Method Start, addr 0x2e08c58, size 0x2dc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2e0927c, size 0x320, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_curNametagTarget() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_curNametagTarget();

  constexpr ::StringW const& __cordl_internal_get_curNametagTargetUserID() const;

  constexpr ::StringW& __cordl_internal_get_curNametagTargetUserID();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_lookingAtPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_lookingAtPlayer();

  constexpr float_t const& __cordl_internal_get_lookingAtPlayerTimer() const;

  constexpr float_t& __cordl_internal_get_lookingAtPlayerTimer();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_minTimeLookingAtPlayerForNametag() const;

  constexpr float_t& __cordl_internal_get_minTimeLookingAtPlayerForNametag();

  constexpr ::UnityW<::GlobalNamespace::Nametag> const& __cordl_internal_get_nametag() const;

  constexpr ::UnityW<::GlobalNamespace::Nametag>& __cordl_internal_get_nametag();

  constexpr float_t const& __cordl_internal_get_nametagCheckRadius() const;

  constexpr float_t& __cordl_internal_get_nametagCheckRadius();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nametagPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nametagPrefab();

  constexpr float_t const& __cordl_internal_get_nametagVisibleDistance() const;

  constexpr float_t& __cordl_internal_get_nametagVisibleDistance();

  constexpr float_t const& __cordl_internal_get_nextNametagCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextNametagCheckTime();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_playerSightLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_playerSightLayerMask();

  constexpr float_t const& __cordl_internal_get_rayVerticalOffset() const;

  constexpr float_t& __cordl_internal_get_rayVerticalOffset();

  constexpr bool const& __cordl_internal_get_shouldShowNametags() const;

  constexpr bool& __cordl_internal_get_shouldShowNametags();

  constexpr void __cordl_internal_set_curNametagTarget(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_curNametagTargetUserID(::StringW value);

  constexpr void __cordl_internal_set_lookingAtPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_lookingAtPlayerTimer(float_t value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_minTimeLookingAtPlayerForNametag(float_t value);

  constexpr void __cordl_internal_set_nametag(::UnityW<::GlobalNamespace::Nametag> value);

  constexpr void __cordl_internal_set_nametagCheckRadius(float_t value);

  constexpr void __cordl_internal_set_nametagPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_nametagVisibleDistance(float_t value);

  constexpr void __cordl_internal_set_nextNametagCheckTime(float_t value);

  constexpr void __cordl_internal_set_playerSightLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_rayVerticalOffset(float_t value);

  constexpr void __cordl_internal_set_shouldShowNametags(bool value);

  /// @brief Method .ctor, addr 0x2e0959c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NametagManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NametagManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NametagManager(NametagManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NametagManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NametagManager(NametagManager const&) = delete;

  /// @brief Field nametagPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___nametagPrefab;

  /// @brief Field nametag, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Nametag> ___nametag;

  /// @brief Field curNametagTarget, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___curNametagTarget;

  /// @brief Field curNametagTargetUserID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___curNametagTargetUserID;

  /// @brief Field minTimeLookingAtPlayerForNametag, offset: 0x38, size: 0x4, def value: None
  float_t ___minTimeLookingAtPlayerForNametag;

  /// @brief Field lookingAtPlayerTimer, offset: 0x3c, size: 0x4, def value: None
  float_t ___lookingAtPlayerTimer;

  /// @brief Field lookingAtPlayer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___lookingAtPlayer;

  /// @brief Field playerSightLayerMask, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___playerSightLayerMask;

  /// @brief Field nametagVisibleDistance, offset: 0x4c, size: 0x4, def value: None
  float_t ___nametagVisibleDistance;

  /// @brief Field nametagCheckRadius, offset: 0x50, size: 0x4, def value: None
  float_t ___nametagCheckRadius;

  /// @brief Field nextNametagCheckTime, offset: 0x54, size: 0x4, def value: None
  float_t ___nextNametagCheckTime;

  /// @brief Field masterPlayer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field shouldShowNametags, offset: 0x60, size: 0x1, def value: None
  bool ___shouldShowNametags;

  /// @brief Field rayVerticalOffset, offset: 0x64, size: 0x4, def value: None
  float_t ___rayVerticalOffset;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Nametags: " };

  /// @brief Field nametagCheckInterval offset 0xffffffff size 0x4
  static constexpr float_t nametagCheckInterval{ 0.1 };

  /// @brief Field nametagChecksPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t nametagChecksPerSecond{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NametagManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___nametagPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___nametag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___curNametagTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___curNametagTargetUserID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___minTimeLookingAtPlayerForNametag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___lookingAtPlayerTimer) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___lookingAtPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___playerSightLayerMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___nametagVisibleDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___nametagCheckRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___nextNametagCheckTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___masterPlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___shouldShowNametags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NametagManager, ___rayVerticalOffset) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NametagManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NametagManager*, "", "NametagManager");
