#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerWinEffect)
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerWinEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerWinEffect);
// Type: ::PlayerWinEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerWinEffect*
class CORDL_TYPE PlayerWinEffect : public ::GlobalNamespace::PlayerEffect {
public:
  // Declarations
  /// @brief Field bobAmplitude, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_bobAmplitude, put = __cordl_internal_set_bobAmplitude)) float_t bobAmplitude;

  /// @brief Field bobScaleAmount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_bobScaleAmount, put = __cordl_internal_set_bobScaleAmount)) float_t bobScaleAmount;

  /// @brief Field bobStartLocalPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_bobStartLocalPosition, put = __cordl_internal_set_bobStartLocalPosition))::UnityEngine::Vector3 bobStartLocalPosition;

  /// @brief Field bobTarget, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bobTarget, put = __cordl_internal_set_bobTarget))::UnityW<::UnityEngine::Transform> bobTarget;

  /// @brief Field bobTimer, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_bobTimer, put = __cordl_internal_set_bobTimer)) float_t bobTimer;

  /// @brief Field duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Method Initialize, addr 0x29c649c, size 0xa8, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Player* player);

  static inline ::GlobalNamespace::PlayerWinEffect* New_ctor();

  /// @brief Method OnUpdate, addr 0x29c6544, size 0x138, virtual true, abstract: false, final false
  inline void OnUpdate();

  constexpr float_t const& __cordl_internal_get_bobAmplitude() const;

  constexpr float_t& __cordl_internal_get_bobAmplitude();

  constexpr float_t const& __cordl_internal_get_bobScaleAmount() const;

  constexpr float_t& __cordl_internal_get_bobScaleAmount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bobStartLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bobStartLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bobTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bobTarget();

  constexpr float_t const& __cordl_internal_get_bobTimer() const;

  constexpr float_t& __cordl_internal_get_bobTimer();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set_bobAmplitude(float_t value);

  constexpr void __cordl_internal_set_bobScaleAmount(float_t value);

  constexpr void __cordl_internal_set_bobStartLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bobTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bobTimer(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x29c667c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerWinEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerWinEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerWinEffect(PlayerWinEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerWinEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerWinEffect(PlayerWinEffect const&) = delete;

  /// @brief Field duration, offset: 0x30, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field bobTarget, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bobTarget;

  /// @brief Field bobStartLocalPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bobStartLocalPosition;

  /// @brief Field bobAmplitude, offset: 0x4c, size: 0x4, def value: None
  float_t ___bobAmplitude;

  /// @brief Field bobScaleAmount, offset: 0x50, size: 0x4, def value: None
  float_t ___bobScaleAmount;

  /// @brief Field bobTimer, offset: 0x54, size: 0x4, def value: None
  float_t ___bobTimer;

  /// @brief Field bobSpeed offset 0xffffffff size 0x4
  static constexpr float_t bobSpeed{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerWinEffect, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___bobTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___bobStartLocalPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___bobAmplitude) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___bobScaleAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerWinEffect, ___bobTimer) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerWinEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerWinEffect*, "", "PlayerWinEffect");
