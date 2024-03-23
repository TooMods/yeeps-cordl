#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JumpWhenGrounded)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpWhenGrounded;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpWhenGrounded);
// Type: ::JumpWhenGrounded
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JumpWhenGrounded*
class CORDL_TYPE JumpWhenGrounded : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field groundLayerMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_groundLayerMask, put = __cordl_internal_set_groundLayerMask))::UnityEngine::LayerMask groundLayerMask;

  /// @brief Field groundedRayLength, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_groundedRayLength, put = __cordl_internal_set_groundedRayLength)) float_t groundedRayLength;

  /// @brief Field jumpHeight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpHeight, put = __cordl_internal_set_jumpHeight)) float_t jumpHeight;

  /// @brief Field rb, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rb, put = __cordl_internal_set_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field sideToSideJumpSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_sideToSideJumpSpeed, put = __cordl_internal_set_sideToSideJumpSpeed)) float_t sideToSideJumpSpeed;

  static inline ::GlobalNamespace::JumpWhenGrounded* New_ctor();

  /// @brief Method Start, addr 0x144417c, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x14441dc, size 0x188, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundLayerMask();

  constexpr float_t const& __cordl_internal_get_groundedRayLength() const;

  constexpr float_t& __cordl_internal_get_groundedRayLength();

  constexpr float_t const& __cordl_internal_get_jumpHeight() const;

  constexpr float_t& __cordl_internal_get_jumpHeight();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb();

  constexpr float_t const& __cordl_internal_get_sideToSideJumpSpeed() const;

  constexpr float_t& __cordl_internal_get_sideToSideJumpSpeed();

  constexpr void __cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_groundedRayLength(float_t value);

  constexpr void __cordl_internal_set_jumpHeight(float_t value);

  constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_sideToSideJumpSpeed(float_t value);

  /// @brief Method .ctor, addr 0x1444364, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JumpWhenGrounded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JumpWhenGrounded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JumpWhenGrounded(JumpWhenGrounded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JumpWhenGrounded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JumpWhenGrounded(JumpWhenGrounded const&) = delete;

  /// @brief Field jumpHeight, offset: 0x18, size: 0x4, def value: None
  float_t ___jumpHeight;

  /// @brief Field groundedRayLength, offset: 0x1c, size: 0x4, def value: None
  float_t ___groundedRayLength;

  /// @brief Field groundLayerMask, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___groundLayerMask;

  /// @brief Field sideToSideJumpSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ___sideToSideJumpSpeed;

  /// @brief Field rb, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpWhenGrounded, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpWhenGrounded, ___jumpHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpWhenGrounded, ___groundedRayLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpWhenGrounded, ___groundLayerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpWhenGrounded, ___sideToSideJumpSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpWhenGrounded, ___rb) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpWhenGrounded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpWhenGrounded*, "", "JumpWhenGrounded");
