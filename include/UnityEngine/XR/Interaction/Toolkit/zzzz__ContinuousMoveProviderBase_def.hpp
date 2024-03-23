#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousMoveProviderBase)
namespace UnityEngine::XR::Interaction::Toolkit {
struct __ContinuousMoveProviderBase__GravityApplicationMode;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __ContinuousMoveProviderBase__GravityApplicationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ContinuousMoveProviderBase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase);
// Type: ::GravityApplicationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::ContinuousMoveProviderBase::GravityApplicationMode
struct CORDL_TYPE __ContinuousMoveProviderBase__GravityApplicationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ContinuousMoveProviderBase__GravityApplicationMode_Unwrapped
  enum struct ____ContinuousMoveProviderBase__GravityApplicationMode_Unwrapped : int32_t {
    __E_AttemptingMove = static_cast<int32_t>(0x0),
    __E_Immediately = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ContinuousMoveProviderBase__GravityApplicationMode_Unwrapped() const noexcept {
    return static_cast<____ContinuousMoveProviderBase__GravityApplicationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContinuousMoveProviderBase__GravityApplicationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ContinuousMoveProviderBase__GravityApplicationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttemptingMove value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode const AttemptingMove;

  /// @brief Field Immediately value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode const Immediately;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::ContinuousMoveProviderBase
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ContinuousMoveProviderBase*
class CORDL_TYPE ContinuousMoveProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
public:
  // Declarations
  using GravityApplicationMode = ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode;

  __declspec(property(get = get_enableFly, put = set_enableFly)) bool enableFly;

  __declspec(property(get = get_enableStrafe, put = set_enableStrafe)) bool enableStrafe;

  __declspec(property(get = get_forwardSource, put = set_forwardSource))::UnityW<::UnityEngine::Transform> forwardSource;

  __declspec(property(get = get_gravityApplicationMode,
                      put = set_gravityApplicationMode))::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode gravityApplicationMode;

  /// @brief Field m_AttemptedGetCharacterController, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AttemptedGetCharacterController, put = __cordl_internal_set_m_AttemptedGetCharacterController)) bool m_AttemptedGetCharacterController;

  /// @brief Field m_CharacterController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterController, put = __cordl_internal_set_m_CharacterController))::UnityW<::UnityEngine::CharacterController> m_CharacterController;

  /// @brief Field m_EnableFly, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableFly, put = __cordl_internal_set_m_EnableFly)) bool m_EnableFly;

  /// @brief Field m_EnableStrafe, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableStrafe, put = __cordl_internal_set_m_EnableStrafe)) bool m_EnableStrafe;

  /// @brief Field m_ForwardSource, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ForwardSource, put = __cordl_internal_set_m_ForwardSource))::UnityW<::UnityEngine::Transform> m_ForwardSource;

  /// @brief Field m_GravityApplicationMode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GravityApplicationMode,
                      put = __cordl_internal_set_m_GravityApplicationMode))::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode m_GravityApplicationMode;

  /// @brief Field m_IsMovingXROrigin, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMovingXROrigin, put = __cordl_internal_set_m_IsMovingXROrigin)) bool m_IsMovingXROrigin;

  /// @brief Field m_MoveSpeed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveSpeed, put = __cordl_internal_set_m_MoveSpeed)) float_t m_MoveSpeed;

  /// @brief Field m_UseGravity, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseGravity, put = __cordl_internal_set_m_UseGravity)) bool m_UseGravity;

  /// @brief Field m_VerticalVelocity, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get_m_VerticalVelocity, put = __cordl_internal_set_m_VerticalVelocity))::UnityEngine::Vector3 m_VerticalVelocity;

  __declspec(property(get = get_moveSpeed, put = set_moveSpeed)) float_t moveSpeed;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  /// @brief Method ComputeDesiredMove, addr 0x301539c, size 0x458, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeDesiredMove(::UnityEngine::Vector2 input);

  /// @brief Method FindCharacterController, addr 0x3015a78, size 0xd8, virtual false, abstract: false, final false
  inline void FindCharacterController();

  /// @brief Method MoveRig, addr 0x30157f4, size 0x284, virtual true, abstract: false, final false
  inline void MoveRig(::UnityEngine::Vector3 translationInWorldSpace);

  static inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase* New_ctor();

  /// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method Update, addr 0x30151a8, size 0x1f4, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

  constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController();

  constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

  constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController();

  constexpr bool const& __cordl_internal_get_m_EnableFly() const;

  constexpr bool& __cordl_internal_get_m_EnableFly();

  constexpr bool const& __cordl_internal_get_m_EnableStrafe() const;

  constexpr bool& __cordl_internal_get_m_EnableStrafe();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ForwardSource() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ForwardSource();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode const& __cordl_internal_get_m_GravityApplicationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode& __cordl_internal_get_m_GravityApplicationMode();

  constexpr bool const& __cordl_internal_get_m_IsMovingXROrigin() const;

  constexpr bool& __cordl_internal_get_m_IsMovingXROrigin();

  constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

  constexpr float_t& __cordl_internal_get_m_MoveSpeed();

  constexpr bool const& __cordl_internal_get_m_UseGravity() const;

  constexpr bool& __cordl_internal_get_m_UseGravity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_VerticalVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_VerticalVelocity();

  constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool value);

  constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController> value);

  constexpr void __cordl_internal_set_m_EnableFly(bool value);

  constexpr void __cordl_internal_set_m_EnableStrafe(bool value);

  constexpr void __cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_GravityApplicationMode(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode value);

  constexpr void __cordl_internal_set_m_IsMovingXROrigin(bool value);

  constexpr void __cordl_internal_set_m_MoveSpeed(float_t value);

  constexpr void __cordl_internal_set_m_UseGravity(bool value);

  constexpr void __cordl_internal_set_m_VerticalVelocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3014e4c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableFly, addr 0x3015160, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFly();

  /// @brief Method get_enableStrafe, addr 0x301514c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableStrafe();

  /// @brief Method get_forwardSource, addr 0x3015198, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_forwardSource();

  /// @brief Method get_gravityApplicationMode, addr 0x3015188, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode get_gravityApplicationMode();

  /// @brief Method get_moveSpeed, addr 0x301513c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveSpeed();

  /// @brief Method get_useGravity, addr 0x3015174, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method set_enableFly, addr 0x3015168, size 0xc, virtual false, abstract: false, final false
  inline void set_enableFly(bool value);

  /// @brief Method set_enableStrafe, addr 0x3015154, size 0xc, virtual false, abstract: false, final false
  inline void set_enableStrafe(bool value);

  /// @brief Method set_forwardSource, addr 0x30151a0, size 0x8, virtual false, abstract: false, final false
  inline void set_forwardSource(::UnityEngine::Transform* value);

  /// @brief Method set_gravityApplicationMode, addr 0x3015190, size 0x8, virtual false, abstract: false, final false
  inline void set_gravityApplicationMode(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode value);

  /// @brief Method set_moveSpeed, addr 0x3015144, size 0x8, virtual false, abstract: false, final false
  inline void set_moveSpeed(float_t value);

  /// @brief Method set_useGravity, addr 0x301517c, size 0xc, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousMoveProviderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousMoveProviderBase(ContinuousMoveProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousMoveProviderBase(ContinuousMoveProviderBase const&) = delete;

  /// @brief Field m_MoveSpeed, offset: 0x40, size: 0x4, def value: None
  float_t ___m_MoveSpeed;

  /// @brief Field m_EnableStrafe, offset: 0x44, size: 0x1, def value: None
  bool ___m_EnableStrafe;

  /// @brief Field m_EnableFly, offset: 0x45, size: 0x1, def value: None
  bool ___m_EnableFly;

  /// @brief Field m_UseGravity, offset: 0x46, size: 0x1, def value: None
  bool ___m_UseGravity;

  /// @brief Field m_GravityApplicationMode, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode ___m_GravityApplicationMode;

  /// @brief Field m_ForwardSource, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_ForwardSource;

  /// @brief Field m_CharacterController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CharacterController> ___m_CharacterController;

  /// @brief Field m_AttemptedGetCharacterController, offset: 0x60, size: 0x1, def value: None
  bool ___m_AttemptedGetCharacterController;

  /// @brief Field m_IsMovingXROrigin, offset: 0x61, size: 0x1, def value: None
  bool ___m_IsMovingXROrigin;

  /// @brief Field m_VerticalVelocity, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_VerticalVelocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_MoveSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_EnableStrafe) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_EnableFly) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_UseGravity) == 0x46, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_GravityApplicationMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_ForwardSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_CharacterController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_AttemptedGetCharacterController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_IsMovingXROrigin) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_VerticalVelocity) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode, "UnityEngine.XR.Interaction.Toolkit",
                       "ContinuousMoveProviderBase/GravityApplicationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "ContinuousMoveProviderBase");
