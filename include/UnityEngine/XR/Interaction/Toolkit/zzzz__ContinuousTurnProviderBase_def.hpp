#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousTurnProviderBase)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ContinuousTurnProviderBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase);
// Type: UnityEngine.XR.Interaction.Toolkit::ContinuousTurnProviderBase
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 69, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ContinuousTurnProviderBase*
class CORDL_TYPE ContinuousTurnProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
public:
  // Declarations
  /// @brief Field m_IsTurningXROrigin, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTurningXROrigin, put = __cordl_internal_set_m_IsTurningXROrigin)) bool m_IsTurningXROrigin;

  /// @brief Field m_TurnSpeed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TurnSpeed, put = __cordl_internal_set_m_TurnSpeed)) float_t m_TurnSpeed;

  __declspec(property(get = get_turnSpeed, put = set_turnSpeed)) float_t turnSpeed;

  /// @brief Method GetTurnAmount, addr 0x3015d0c, size 0x11c, virtual true, abstract: false, final false
  inline float_t GetTurnAmount(::UnityEngine::Vector2 input);

  static inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase* New_ctor();

  /// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method TurnRig, addr 0x3015bdc, size 0x130, virtual false, abstract: false, final false
  inline void TurnRig(float_t turnAmount);

  /// @brief Method Update, addr 0x3015b60, size 0x7c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_IsTurningXROrigin() const;

  constexpr bool& __cordl_internal_get_m_IsTurningXROrigin();

  constexpr float_t const& __cordl_internal_get_m_TurnSpeed() const;

  constexpr float_t& __cordl_internal_get_m_TurnSpeed();

  constexpr void __cordl_internal_set_m_IsTurningXROrigin(bool value);

  constexpr void __cordl_internal_set_m_TurnSpeed(float_t value);

  /// @brief Method .ctor, addr 0x301512c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_turnSpeed, addr 0x3015b50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_turnSpeed();

  /// @brief Method set_turnSpeed, addr 0x3015b58, size 0x8, virtual false, abstract: false, final false
  inline void set_turnSpeed(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousTurnProviderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousTurnProviderBase(ContinuousTurnProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousTurnProviderBase(ContinuousTurnProviderBase const&) = delete;

  /// @brief Field m_TurnSpeed, offset: 0x40, size: 0x4, def value: None
  float_t ___m_TurnSpeed;

  /// @brief Field m_IsTurningXROrigin, offset: 0x44, size: 0x1, def value: None
  bool ___m_IsTurningXROrigin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase, ___m_TurnSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase, ___m_IsTurningXROrigin) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "ContinuousTurnProviderBase");
