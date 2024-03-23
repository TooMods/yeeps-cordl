#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowAssistTarget)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowAssistTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowAssistTarget);
// Type: ::ThrowAssistTarget
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowAssistTarget*
class CORDL_TYPE ThrowAssistTarget : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field lastPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field velocity, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_velocity, put = __cordl_internal_set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method FixedUpdate, addr 0x1755ae0, size 0xb8, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetProjectedPosition, addr 0x1755ba4, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetProjectedPosition(::UnityEngine::Vector3 position, float_t timeIntoFuture);

  /// @brief Method GetVelocity, addr 0x1755b98, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVelocity();

  static inline ::GlobalNamespace::ThrowAssistTarget* New_ctor();

  /// @brief Method OnEnable, addr 0x1755a64, size 0x7c, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity();

  constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1755bc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowAssistTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowAssistTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowAssistTarget(ThrowAssistTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowAssistTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowAssistTarget(ThrowAssistTarget const&) = delete;

  /// @brief Field lastPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field velocity, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___velocity;

  /// @brief Field velocityLerp offset 0xffffffff size 0x4
  static constexpr float_t velocityLerp{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowAssistTarget, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowAssistTarget, ___lastPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowAssistTarget, ___velocity) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowAssistTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowAssistTarget*, "", "ThrowAssistTarget");
