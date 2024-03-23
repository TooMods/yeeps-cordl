#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomNavigationDisplay)
namespace GlobalNamespace {
class Hallway;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class RoomNavigation;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomNavigationDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomNavigationDisplay);
// Type: ::RoomNavigationDisplay
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomNavigationDisplay*
class CORDL_TYPE RoomNavigationDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field distanceToSizeRatio, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToSizeRatio, put = __cordl_internal_set_distanceToSizeRatio)) float_t distanceToSizeRatio;

  /// @brief Field hallway, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hallway, put = __cordl_internal_set_hallway))::UnityW<::GlobalNamespace::Hallway> hallway;

  /// @brief Field isMovingToTarget, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isMovingToTarget, put = __cordl_internal_set_isMovingToTarget)) bool isMovingToTarget;

  /// @brief Field masterPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::Player> masterPlayer;

  /// @brief Field minSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_minSize, put = __cordl_internal_set_minSize)) float_t minSize;

  /// @brief Field moveToTargetCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_moveToTargetCurve, put = __cordl_internal_set_moveToTargetCurve))::UnityEngine::AnimationCurve* moveToTargetCurve;

  /// @brief Field moveToTargetEndPosition, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_moveToTargetEndPosition, put = __cordl_internal_set_moveToTargetEndPosition))::UnityEngine::Vector3 moveToTargetEndPosition;

  /// @brief Field moveToTargetP, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_moveToTargetP, put = __cordl_internal_set_moveToTargetP)) float_t moveToTargetP;

  /// @brief Field moveToTargetStartPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_moveToTargetStartPosition, put = __cordl_internal_set_moveToTargetStartPosition))::UnityEngine::Vector3 moveToTargetStartPosition;

  /// @brief Method DestroySelf, addr 0x175d884, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0x175d2b4, size 0x1f8, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::RoomNavigation* navigation, ::GlobalNamespace::Hallway* initialHallway);

  /// @brief Method MoveToTarget, addr 0x175b150, size 0x98, virtual false, abstract: false, final false
  inline void MoveToTarget(::UnityEngine::Vector3 newTargetPosition, bool instant);

  static inline ::GlobalNamespace::RoomNavigationDisplay* New_ctor();

  /// @brief Method OnDisable, addr 0x175d54c, size 0x270, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnMasterPlayerCreated, addr 0x175d7bc, size 0x8, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* masterPlayer);

  /// @brief Method OnRoomPositionShift, addr 0x175d7c4, size 0xc0, virtual false, abstract: false, final false
  inline void OnRoomPositionShift(::UnityEngine::Vector3 shift);

  /// @brief Method SetHallway, addr 0x175d4ac, size 0xa0, virtual false, abstract: false, final false
  inline void SetHallway(::GlobalNamespace::Hallway* hallway, bool instant);

  /// @brief Method Update, addr 0x175d8f0, size 0x218, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_distanceToSizeRatio() const;

  constexpr float_t& __cordl_internal_get_distanceToSizeRatio();

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_hallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_hallway();

  constexpr bool const& __cordl_internal_get_isMovingToTarget() const;

  constexpr bool& __cordl_internal_get_isMovingToTarget();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_minSize() const;

  constexpr float_t& __cordl_internal_get_minSize();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moveToTargetCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_moveToTargetCurve() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_moveToTargetEndPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_moveToTargetEndPosition();

  constexpr float_t const& __cordl_internal_get_moveToTargetP() const;

  constexpr float_t& __cordl_internal_get_moveToTargetP();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_moveToTargetStartPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_moveToTargetStartPosition();

  constexpr void __cordl_internal_set_distanceToSizeRatio(float_t value);

  constexpr void __cordl_internal_set_hallway(::UnityW<::GlobalNamespace::Hallway> value);

  constexpr void __cordl_internal_set_isMovingToTarget(bool value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_minSize(float_t value);

  constexpr void __cordl_internal_set_moveToTargetCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_moveToTargetEndPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_moveToTargetP(float_t value);

  constexpr void __cordl_internal_set_moveToTargetStartPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x175db08, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomNavigationDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigationDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomNavigationDisplay(RoomNavigationDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigationDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomNavigationDisplay(RoomNavigationDisplay const&) = delete;

  /// @brief Field distanceToSizeRatio, offset: 0x18, size: 0x4, def value: None
  float_t ___distanceToSizeRatio;

  /// @brief Field minSize, offset: 0x1c, size: 0x4, def value: None
  float_t ___minSize;

  /// @brief Field hallway, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___hallway;

  /// @brief Field masterPlayer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___masterPlayer;

  /// @brief Field isMovingToTarget, offset: 0x30, size: 0x1, def value: None
  bool ___isMovingToTarget;

  /// @brief Field moveToTargetP, offset: 0x34, size: 0x4, def value: None
  float_t ___moveToTargetP;

  /// @brief Field moveToTargetCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___moveToTargetCurve;

  /// @brief Field moveToTargetStartPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___moveToTargetStartPosition;

  /// @brief Field moveToTargetEndPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___moveToTargetEndPosition;

  /// @brief Field moveToTargetDuration offset 0xffffffff size 0x4
  static constexpr float_t moveToTargetDuration{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomNavigationDisplay, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___distanceToSizeRatio) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___minSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___hallway) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___masterPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___isMovingToTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___moveToTargetP) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___moveToTargetCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___moveToTargetStartPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationDisplay, ___moveToTargetEndPosition) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomNavigationDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomNavigationDisplay*, "", "RoomNavigationDisplay");
