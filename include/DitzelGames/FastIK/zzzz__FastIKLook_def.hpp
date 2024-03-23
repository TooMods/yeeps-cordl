#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(FastIKLook)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace DitzelGames::FastIK {
class FastIKLook;
}
// Write type traits
MARK_REF_PTR_T(::DitzelGames::FastIK::FastIKLook);
// Type: DitzelGames.FastIK::FastIKLook
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace DitzelGames::FastIK {
// Is value type: false
// CS Name: ::DitzelGames.FastIK::FastIKLook*
class CORDL_TYPE FastIKLook : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field StartDirection, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_StartDirection, put = __cordl_internal_set_StartDirection))::UnityEngine::Vector3 StartDirection;

  /// @brief Field StartRotation, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_StartRotation, put = __cordl_internal_set_StartRotation))::UnityEngine::Quaternion StartRotation;

  /// @brief Field Target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target))::UnityW<::UnityEngine::Transform> Target;

  /// @brief Method Awake, addr 0x1086d50, size 0xe4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::DitzelGames::FastIK::FastIKLook* New_ctor();

  /// @brief Method Update, addr 0x1086e34, size 0x190, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_StartDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_StartDirection();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_StartRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_StartRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target();

  constexpr void __cordl_internal_set_StartDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_StartRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x1086fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastIKLook();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastIKLook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastIKLook(FastIKLook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastIKLook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastIKLook(FastIKLook const&) = delete;

  /// @brief Field Target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Target;

  /// @brief Field StartDirection, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___StartDirection;

  /// @brief Field StartRotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___StartRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DitzelGames::FastIK::FastIKLook, 0x40>, "Size mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKLook, ___Target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKLook, ___StartDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::FastIKLook, ___StartRotation) == 0x2c, "Offset mismatch!");

} // namespace DitzelGames::FastIK
NEED_NO_BOX(::DitzelGames::FastIK::FastIKLook);
DEFINE_IL2CPP_ARG_TYPE(::DitzelGames::FastIK::FastIKLook*, "DitzelGames.FastIK", "FastIKLook");
