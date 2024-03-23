#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstrainedMoveProvider)
namespace UnityEngine::XR::Interaction::Toolkit {
struct __ConstrainedMoveProvider__GravityApplicationMode;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __ConstrainedMoveProvider__GravityApplicationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ConstrainedMoveProvider;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider);
// Type: ::GravityApplicationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::ConstrainedMoveProvider::GravityApplicationMode
struct CORDL_TYPE __ConstrainedMoveProvider__GravityApplicationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConstrainedMoveProvider__GravityApplicationMode_Unwrapped
  enum struct ____ConstrainedMoveProvider__GravityApplicationMode_Unwrapped : int32_t {
    __E_AttemptingMove = static_cast<int32_t>(0x0),
    __E_Immediately = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConstrainedMoveProvider__GravityApplicationMode_Unwrapped() const noexcept {
    return static_cast<____ConstrainedMoveProvider__GravityApplicationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConstrainedMoveProvider__GravityApplicationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConstrainedMoveProvider__GravityApplicationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttemptingMove value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode const AttemptingMove;

  /// @brief Field Immediately value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode const Immediately;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::ConstrainedMoveProvider
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ConstrainedMoveProvider*
class CORDL_TYPE ConstrainedMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
public:
  // Declarations
  using GravityApplicationMode = ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode;

  __declspec(property(get = get_enableFreeXMovement, put = set_enableFreeXMovement)) bool enableFreeXMovement;

  __declspec(property(get = get_enableFreeYMovement, put = set_enableFreeYMovement)) bool enableFreeYMovement;

  __declspec(property(get = get_enableFreeZMovement, put = set_enableFreeZMovement)) bool enableFreeZMovement;

  __declspec(property(get = get_gravityMode, put = set_gravityMode))::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode gravityMode;

  /// @brief Field m_AttemptedGetCharacterController, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AttemptedGetCharacterController, put = __cordl_internal_set_m_AttemptedGetCharacterController)) bool m_AttemptedGetCharacterController;

  /// @brief Field m_CharacterController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterController, put = __cordl_internal_set_m_CharacterController))::UnityW<::UnityEngine::CharacterController> m_CharacterController;

  /// @brief Field m_EnableFreeXMovement, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableFreeXMovement, put = __cordl_internal_set_m_EnableFreeXMovement)) bool m_EnableFreeXMovement;

  /// @brief Field m_EnableFreeYMovement, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableFreeYMovement, put = __cordl_internal_set_m_EnableFreeYMovement)) bool m_EnableFreeYMovement;

  /// @brief Field m_EnableFreeZMovement, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableFreeZMovement, put = __cordl_internal_set_m_EnableFreeZMovement)) bool m_EnableFreeZMovement;

  /// @brief Field m_GravityApplicationMode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GravityApplicationMode,
                      put = __cordl_internal_set_m_GravityApplicationMode))::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode m_GravityApplicationMode;

  /// @brief Field m_GravityDrivenVelocity, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_m_GravityDrivenVelocity, put = __cordl_internal_set_m_GravityDrivenVelocity))::UnityEngine::Vector3 m_GravityDrivenVelocity;

  /// @brief Field m_IsMovingXROrigin, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMovingXROrigin, put = __cordl_internal_set_m_IsMovingXROrigin)) bool m_IsMovingXROrigin;

  /// @brief Field m_UseGravity, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseGravity, put = __cordl_internal_set_m_UseGravity)) bool m_UseGravity;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  /// @brief Method ComputeDesiredMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 ComputeDesiredMove(ByRef<bool> attemptingMove);

  /// @brief Method FindCharacterController, addr 0x30148ac, size 0xd8, virtual false, abstract: false, final false
  inline void FindCharacterController();

  /// @brief Method MoveRig, addr 0x30145d8, size 0x2d4, virtual true, abstract: false, final false
  inline void MoveRig(::UnityEngine::Vector3 translationInWorldSpace);

  static inline ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider* New_ctor();

  /// @brief Method Update, addr 0x3014434, size 0x1a4, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

  constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController();

  constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

  constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController();

  constexpr bool const& __cordl_internal_get_m_EnableFreeXMovement() const;

  constexpr bool& __cordl_internal_get_m_EnableFreeXMovement();

  constexpr bool const& __cordl_internal_get_m_EnableFreeYMovement() const;

  constexpr bool& __cordl_internal_get_m_EnableFreeYMovement();

  constexpr bool const& __cordl_internal_get_m_EnableFreeZMovement() const;

  constexpr bool& __cordl_internal_get_m_EnableFreeZMovement();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode const& __cordl_internal_get_m_GravityApplicationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode& __cordl_internal_get_m_GravityApplicationMode();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_GravityDrivenVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_GravityDrivenVelocity();

  constexpr bool const& __cordl_internal_get_m_IsMovingXROrigin() const;

  constexpr bool& __cordl_internal_get_m_IsMovingXROrigin();

  constexpr bool const& __cordl_internal_get_m_UseGravity() const;

  constexpr bool& __cordl_internal_get_m_UseGravity();

  constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool value);

  constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController> value);

  constexpr void __cordl_internal_set_m_EnableFreeXMovement(bool value);

  constexpr void __cordl_internal_set_m_EnableFreeYMovement(bool value);

  constexpr void __cordl_internal_set_m_EnableFreeZMovement(bool value);

  constexpr void __cordl_internal_set_m_GravityApplicationMode(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode value);

  constexpr void __cordl_internal_set_m_GravityDrivenVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_IsMovingXROrigin(bool value);

  constexpr void __cordl_internal_set_m_UseGravity(bool value);

  /// @brief Method .ctor, addr 0x3014b5c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableFreeXMovement, addr 0x30143d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFreeXMovement();

  /// @brief Method get_enableFreeYMovement, addr 0x30143e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFreeYMovement();

  /// @brief Method get_enableFreeZMovement, addr 0x30143fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFreeZMovement();

  /// @brief Method get_gravityMode, addr 0x3014424, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode get_gravityMode();

  /// @brief Method get_useGravity, addr 0x3014410, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method set_enableFreeXMovement, addr 0x30143dc, size 0xc, virtual false, abstract: false, final false
  inline void set_enableFreeXMovement(bool value);

  /// @brief Method set_enableFreeYMovement, addr 0x30143f0, size 0xc, virtual false, abstract: false, final false
  inline void set_enableFreeYMovement(bool value);

  /// @brief Method set_enableFreeZMovement, addr 0x3014404, size 0xc, virtual false, abstract: false, final false
  inline void set_enableFreeZMovement(bool value);

  /// @brief Method set_gravityMode, addr 0x301442c, size 0x8, virtual false, abstract: false, final false
  inline void set_gravityMode(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode value);

  /// @brief Method set_useGravity, addr 0x3014418, size 0xc, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstrainedMoveProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstrainedMoveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstrainedMoveProvider(ConstrainedMoveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstrainedMoveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstrainedMoveProvider(ConstrainedMoveProvider const&) = delete;

  /// @brief Field m_EnableFreeXMovement, offset: 0x40, size: 0x1, def value: None
  bool ___m_EnableFreeXMovement;

  /// @brief Field m_EnableFreeYMovement, offset: 0x41, size: 0x1, def value: None
  bool ___m_EnableFreeYMovement;

  /// @brief Field m_EnableFreeZMovement, offset: 0x42, size: 0x1, def value: None
  bool ___m_EnableFreeZMovement;

  /// @brief Field m_UseGravity, offset: 0x43, size: 0x1, def value: None
  bool ___m_UseGravity;

  /// @brief Field m_GravityApplicationMode, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode ___m_GravityApplicationMode;

  /// @brief Field m_CharacterController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CharacterController> ___m_CharacterController;

  /// @brief Field m_AttemptedGetCharacterController, offset: 0x50, size: 0x1, def value: None
  bool ___m_AttemptedGetCharacterController;

  /// @brief Field m_IsMovingXROrigin, offset: 0x51, size: 0x1, def value: None
  bool ___m_IsMovingXROrigin;

  /// @brief Field m_GravityDrivenVelocity, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_GravityDrivenVelocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_EnableFreeXMovement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_EnableFreeYMovement) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_EnableFreeZMovement) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_UseGravity) == 0x43, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_GravityApplicationMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_CharacterController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_AttemptedGetCharacterController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_IsMovingXROrigin) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider, ___m_GravityDrivenVelocity) == 0x54, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode, "UnityEngine.XR.Interaction.Toolkit",
                       "ConstrainedMoveProvider/GravityApplicationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "ConstrainedMoveProvider");
