#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveByKeys)
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class MoveByKeys;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::MoveByKeys);
// Type: Photon.Pun.UtilityScripts::MoveByKeys
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::MoveByKeys*
class CORDL_TYPE MoveByKeys : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field JumpForce, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_JumpForce, put = __cordl_internal_set_JumpForce)) float_t JumpForce;

  /// @brief Field JumpTimeout, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_JumpTimeout, put = __cordl_internal_set_JumpTimeout)) float_t JumpTimeout;

  /// @brief Field Speed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Speed, put = __cordl_internal_set_Speed)) float_t Speed;

  /// @brief Field body, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::UnityW<::UnityEngine::Rigidbody> body;

  /// @brief Field body2d, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_body2d, put = __cordl_internal_set_body2d))::UnityW<::UnityEngine::Rigidbody2D> body2d;

  /// @brief Field isSprite, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isSprite, put = __cordl_internal_set_isSprite)) bool isSprite;

  /// @brief Field jumpingTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpingTime, put = __cordl_internal_set_jumpingTime)) float_t jumpingTime;

  /// @brief Method FixedUpdate, addr 0x1ec85c4, size 0x3e0, virtual false, abstract: false, final false
  inline void FixedUpdate();

  static inline ::Photon::Pun::UtilityScripts::MoveByKeys* New_ctor();

  /// @brief Method Start, addr 0x1ec84e4, size 0xe0, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_JumpForce() const;

  constexpr float_t& __cordl_internal_get_JumpForce();

  constexpr float_t const& __cordl_internal_get_JumpTimeout() const;

  constexpr float_t& __cordl_internal_get_JumpTimeout();

  constexpr float_t const& __cordl_internal_get_Speed() const;

  constexpr float_t& __cordl_internal_get_Speed();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_body() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_body();

  constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_body2d() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_body2d();

  constexpr bool const& __cordl_internal_get_isSprite() const;

  constexpr bool& __cordl_internal_get_isSprite();

  constexpr float_t const& __cordl_internal_get_jumpingTime() const;

  constexpr float_t& __cordl_internal_get_jumpingTime();

  constexpr void __cordl_internal_set_JumpForce(float_t value);

  constexpr void __cordl_internal_set_JumpTimeout(float_t value);

  constexpr void __cordl_internal_set_Speed(float_t value);

  constexpr void __cordl_internal_set_body(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_body2d(::UnityW<::UnityEngine::Rigidbody2D> value);

  constexpr void __cordl_internal_set_isSprite(bool value);

  constexpr void __cordl_internal_set_jumpingTime(float_t value);

  /// @brief Method .ctor, addr 0x1ec89a4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveByKeys();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MoveByKeys", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveByKeys(MoveByKeys&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveByKeys", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveByKeys(MoveByKeys const&) = delete;

  /// @brief Field Speed, offset: 0x20, size: 0x4, def value: None
  float_t ___Speed;

  /// @brief Field JumpForce, offset: 0x24, size: 0x4, def value: None
  float_t ___JumpForce;

  /// @brief Field JumpTimeout, offset: 0x28, size: 0x4, def value: None
  float_t ___JumpTimeout;

  /// @brief Field isSprite, offset: 0x2c, size: 0x1, def value: None
  bool ___isSprite;

  /// @brief Field jumpingTime, offset: 0x30, size: 0x4, def value: None
  float_t ___jumpingTime;

  /// @brief Field body, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___body;

  /// @brief Field body2d, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody2D> ___body2d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::MoveByKeys, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___Speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___JumpForce) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___JumpTimeout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___isSprite) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___jumpingTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::MoveByKeys, ___body2d) == 0x40, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::MoveByKeys);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::MoveByKeys*, "Photon.Pun.UtilityScripts", "MoveByKeys");
