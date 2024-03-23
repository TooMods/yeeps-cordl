#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerEffect)
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerEffect);
// Type: ::PlayerEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerEffect*
class CORDL_TYPE PlayerEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field followAnchor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_followAnchor, put = __cordl_internal_set_followAnchor))::UnityW<::UnityEngine::Transform> followAnchor;

  /// @brief Field hasFollowAnchor, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_hasFollowAnchor, put = __cordl_internal_set_hasFollowAnchor)) bool hasFollowAnchor;

  /// @brief Field soundEffectKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_soundEffectKey, put = __cordl_internal_set_soundEffectKey))::StringW soundEffectKey;

  /// @brief Method Initialize, addr 0x29c6150, size 0x254, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Player* player);

  static inline ::GlobalNamespace::PlayerEffect* New_ctor();

  /// @brief Method OnUpdate, addr 0x29c6490, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method Update, addr 0x29c63a4, size 0xec, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followAnchor();

  constexpr bool const& __cordl_internal_get_hasFollowAnchor() const;

  constexpr bool& __cordl_internal_get_hasFollowAnchor();

  constexpr ::StringW const& __cordl_internal_get_soundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_soundEffectKey();

  constexpr void __cordl_internal_set_followAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_hasFollowAnchor(bool value);

  constexpr void __cordl_internal_set_soundEffectKey(::StringW value);

  /// @brief Method .ctor, addr 0x29c6494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerEffect(PlayerEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerEffect(PlayerEffect const&) = delete;

  /// @brief Field hasFollowAnchor, offset: 0x18, size: 0x1, def value: None
  bool ___hasFollowAnchor;

  /// @brief Field followAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___followAnchor;

  /// @brief Field soundEffectKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___soundEffectKey;

  /// @brief Field hapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hapticAmplitude{ 0.5 };

  /// @brief Field hapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hapticDuration{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEffect, ___hasFollowAnchor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEffect, ___followAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEffect, ___soundEffectKey) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerEffect*, "", "PlayerEffect");
