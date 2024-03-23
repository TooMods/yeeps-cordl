#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapTurnProviderBase)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SnapTurnProviderBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase);
// Type: UnityEngine.XR.Interaction.Toolkit::SnapTurnProviderBase
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::SnapTurnProviderBase*
class CORDL_TYPE SnapTurnProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
public:
  // Declarations
  __declspec(property(get = get_debounceTime, put = set_debounceTime)) float_t debounceTime;

  __declspec(property(get = get_delayTime, put = set_delayTime)) float_t delayTime;

  __declspec(property(get = get_enableTurnAround, put = set_enableTurnAround)) bool enableTurnAround;

  __declspec(property(get = get_enableTurnLeftRight, put = set_enableTurnLeftRight)) bool enableTurnLeftRight;

  /// @brief Field m_CurrentTurnAmount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentTurnAmount, put = __cordl_internal_set_m_CurrentTurnAmount)) float_t m_CurrentTurnAmount;

  /// @brief Field m_DebounceTime, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DebounceTime, put = __cordl_internal_set_m_DebounceTime)) float_t m_DebounceTime;

  /// @brief Field m_DelayStartTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DelayStartTime, put = __cordl_internal_set_m_DelayStartTime)) float_t m_DelayStartTime;

  /// @brief Field m_DelayTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DelayTime, put = __cordl_internal_set_m_DelayTime)) float_t m_DelayTime;

  /// @brief Field m_EnableTurnAround, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableTurnAround, put = __cordl_internal_set_m_EnableTurnAround)) bool m_EnableTurnAround;

  /// @brief Field m_EnableTurnLeftRight, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableTurnLeftRight, put = __cordl_internal_set_m_EnableTurnLeftRight)) bool m_EnableTurnLeftRight;

  /// @brief Field m_TimeStarted, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeStarted, put = __cordl_internal_set_m_TimeStarted)) float_t m_TimeStarted;

  /// @brief Field m_TurnAmount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TurnAmount, put = __cordl_internal_set_m_TurnAmount)) float_t m_TurnAmount;

  __declspec(property(get = get_turnAmount, put = set_turnAmount)) float_t turnAmount;

  /// @brief Method Awake, addr 0x3018788, size 0x148, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method FakeStartTurn, addr 0x3018d04, size 0x24, virtual false, abstract: false, final false
  inline void FakeStartTurn(bool isLeft);

  /// @brief Method FakeStartTurnAround, addr 0x3018d28, size 0xc, virtual false, abstract: false, final false
  inline void FakeStartTurnAround();

  /// @brief Method GetTurnAmount, addr 0x3018c18, size 0xec, virtual true, abstract: false, final false
  inline float_t GetTurnAmount(::UnityEngine::Vector2 input);

  static inline ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase* New_ctor();

  /// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 ReadInput();

  /// @brief Method StartTurn, addr 0x3018b38, size 0xe0, virtual false, abstract: false, final false
  inline void StartTurn(float_t amount);

  /// @brief Method Update, addr 0x30188d0, size 0x268, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_m_CurrentTurnAmount() const;

  constexpr float_t& __cordl_internal_get_m_CurrentTurnAmount();

  constexpr float_t const& __cordl_internal_get_m_DebounceTime() const;

  constexpr float_t& __cordl_internal_get_m_DebounceTime();

  constexpr float_t const& __cordl_internal_get_m_DelayStartTime() const;

  constexpr float_t& __cordl_internal_get_m_DelayStartTime();

  constexpr float_t const& __cordl_internal_get_m_DelayTime() const;

  constexpr float_t& __cordl_internal_get_m_DelayTime();

  constexpr bool const& __cordl_internal_get_m_EnableTurnAround() const;

  constexpr bool& __cordl_internal_get_m_EnableTurnAround();

  constexpr bool const& __cordl_internal_get_m_EnableTurnLeftRight() const;

  constexpr bool& __cordl_internal_get_m_EnableTurnLeftRight();

  constexpr float_t const& __cordl_internal_get_m_TimeStarted() const;

  constexpr float_t& __cordl_internal_get_m_TimeStarted();

  constexpr float_t const& __cordl_internal_get_m_TurnAmount() const;

  constexpr float_t& __cordl_internal_get_m_TurnAmount();

  constexpr void __cordl_internal_set_m_CurrentTurnAmount(float_t value);

  constexpr void __cordl_internal_set_m_DebounceTime(float_t value);

  constexpr void __cordl_internal_set_m_DelayStartTime(float_t value);

  constexpr void __cordl_internal_set_m_DelayTime(float_t value);

  constexpr void __cordl_internal_set_m_EnableTurnAround(bool value);

  constexpr void __cordl_internal_set_m_EnableTurnLeftRight(bool value);

  constexpr void __cordl_internal_set_m_TimeStarted(float_t value);

  constexpr void __cordl_internal_set_m_TurnAmount(float_t value);

  /// @brief Method .ctor, addr 0x3018350, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_debounceTime, addr 0x3018740, size 0x8, virtual false, abstract: false, final false
  inline float_t get_debounceTime();

  /// @brief Method get_delayTime, addr 0x3018778, size 0x8, virtual false, abstract: false, final false
  inline float_t get_delayTime();

  /// @brief Method get_enableTurnAround, addr 0x3018764, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableTurnAround();

  /// @brief Method get_enableTurnLeftRight, addr 0x3018750, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableTurnLeftRight();

  /// @brief Method get_turnAmount, addr 0x3018730, size 0x8, virtual false, abstract: false, final false
  inline float_t get_turnAmount();

  /// @brief Method set_debounceTime, addr 0x3018748, size 0x8, virtual false, abstract: false, final false
  inline void set_debounceTime(float_t value);

  /// @brief Method set_delayTime, addr 0x3018780, size 0x8, virtual false, abstract: false, final false
  inline void set_delayTime(float_t value);

  /// @brief Method set_enableTurnAround, addr 0x301876c, size 0xc, virtual false, abstract: false, final false
  inline void set_enableTurnAround(bool value);

  /// @brief Method set_enableTurnLeftRight, addr 0x3018758, size 0xc, virtual false, abstract: false, final false
  inline void set_enableTurnLeftRight(bool value);

  /// @brief Method set_turnAmount, addr 0x3018738, size 0x8, virtual false, abstract: false, final false
  inline void set_turnAmount(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SnapTurnProviderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SnapTurnProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SnapTurnProviderBase(SnapTurnProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SnapTurnProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SnapTurnProviderBase(SnapTurnProviderBase const&) = delete;

  /// @brief Field m_TurnAmount, offset: 0x40, size: 0x4, def value: None
  float_t ___m_TurnAmount;

  /// @brief Field m_DebounceTime, offset: 0x44, size: 0x4, def value: None
  float_t ___m_DebounceTime;

  /// @brief Field m_EnableTurnLeftRight, offset: 0x48, size: 0x1, def value: None
  bool ___m_EnableTurnLeftRight;

  /// @brief Field m_EnableTurnAround, offset: 0x49, size: 0x1, def value: None
  bool ___m_EnableTurnAround;

  /// @brief Field m_DelayTime, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_DelayTime;

  /// @brief Field m_CurrentTurnAmount, offset: 0x50, size: 0x4, def value: None
  float_t ___m_CurrentTurnAmount;

  /// @brief Field m_TimeStarted, offset: 0x54, size: 0x4, def value: None
  float_t ___m_TimeStarted;

  /// @brief Field m_DelayStartTime, offset: 0x58, size: 0x4, def value: None
  float_t ___m_DelayStartTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_TurnAmount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DebounceTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_EnableTurnLeftRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_EnableTurnAround) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DelayTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_CurrentTurnAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_TimeStarted) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DelayStartTime) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "SnapTurnProviderBase");
