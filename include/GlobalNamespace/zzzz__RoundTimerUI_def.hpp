#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoundTimerUI)
namespace GlobalNamespace {
class GameRound;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class RoundTimerUI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoundTimerUI);
// Type: ::RoundTimerUI
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoundTimerUI*
class CORDL_TYPE RoundTimerUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field displayedRound, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_displayedRound, put = __cordl_internal_set_displayedRound))::GlobalNamespace::GameRound* displayedRound;

  /// @brief Field hidersLeftText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hidersLeftText, put = __cordl_internal_set_hidersLeftText))::UnityW<::UnityEngine::UI::Text> hidersLeftText;

  __declspec(property(get = get_isDisplayingRound)) bool isDisplayingRound;

  /// @brief Field isRegistered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field roundTimerText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roundTimerText, put = __cordl_internal_set_roundTimerText))::UnityW<::UnityEngine::UI::Text> roundTimerText;

  /// @brief Method DisplayFromRound, addr 0xf24048, size 0xfc, virtual false, abstract: false, final false
  inline void DisplayFromRound(::GlobalNamespace::GameRound* round);

  /// @brief Method DisplayHiderCount, addr 0xf24288, size 0xd0, virtual false, abstract: false, final false
  inline void DisplayHiderCount(int32_t hiderCount);

  static inline ::GlobalNamespace::RoundTimerUI* New_ctor();

  /// @brief Method OnDisable, addr 0xf23d98, size 0x2b0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf23a5c, size 0x328, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHiderCountChanged, addr 0xf23d88, size 0x10, virtual false, abstract: false, final false
  inline void OnHiderCountChanged(int32_t newHiderCount);

  /// @brief Method OnRoundEnded, addr 0xf24144, size 0x8, virtual false, abstract: false, final false
  inline void OnRoundEnded(::GlobalNamespace::GameRound* round);

  /// @brief Method OnRoundStarted, addr 0xf23d84, size 0x4, virtual false, abstract: false, final false
  inline void OnRoundStarted(::GlobalNamespace::GameRound* round, bool isInProgress);

  /// @brief Method Update, addr 0xf24358, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTimer, addr 0xf2414c, size 0x13c, virtual false, abstract: false, final false
  inline void UpdateTimer();

  constexpr ::GlobalNamespace::GameRound*& __cordl_internal_get_displayedRound();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameRound*> const& __cordl_internal_get_displayedRound() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_hidersLeftText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_hidersLeftText();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_roundTimerText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_roundTimerText();

  constexpr void __cordl_internal_set_displayedRound(::GlobalNamespace::GameRound* value);

  constexpr void __cordl_internal_set_hidersLeftText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_roundTimerText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0xf24368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isDisplayingRound, addr 0xf23a4c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDisplayingRound();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoundTimerUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoundTimerUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoundTimerUI(RoundTimerUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoundTimerUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoundTimerUI(RoundTimerUI const&) = delete;

  /// @brief Field roundTimerText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___roundTimerText;

  /// @brief Field hidersLeftText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___hidersLeftText;

  /// @brief Field displayedRound, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameRound* ___displayedRound;

  /// @brief Field isRegistered, offset: 0x30, size: 0x1, def value: None
  bool ___isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoundTimerUI, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundTimerUI, ___roundTimerText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundTimerUI, ___hidersLeftText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundTimerUI, ___displayedRound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundTimerUI, ___isRegistered) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoundTimerUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoundTimerUI*, "", "RoundTimerUI");
