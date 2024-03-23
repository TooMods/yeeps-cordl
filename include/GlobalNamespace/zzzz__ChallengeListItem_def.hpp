#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeListItem)
namespace GlobalNamespace {
class ActiveChallenge;
}
namespace GlobalNamespace {
class ActiveChallengesDisplay;
}
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
class ProgressIndicator;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ChallengeListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ChallengeListItem);
// Type: ::ChallengeListItem
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeListItem*
class CORDL_TYPE ChallengeListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeChallenge, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_activeChallenge, put = __cordl_internal_set_activeChallenge))::GlobalNamespace::ActiveChallenge* activeChallenge;

  /// @brief Field display, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_display, put = __cordl_internal_set_display))::UnityW<::GlobalNamespace::ActiveChallengesDisplay> display;

  /// @brief Field fadeCover, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeCover, put = __cordl_internal_set_fadeCover))::UnityW<::UnityEngine::GameObject> fadeCover;

  /// @brief Field isRegistered, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::UnityW<::UnityEngine::UI::Text> message;

  /// @brief Field progressIndicator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_progressIndicator, put = __cordl_internal_set_progressIndicator))::UnityW<::GlobalNamespace::ProgressIndicator> progressIndicator;

  /// @brief Field progressIndicatorCompletedColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_progressIndicatorCompletedColor, put = __cordl_internal_set_progressIndicatorCompletedColor))::UnityEngine::Color progressIndicatorCompletedColor;

  /// @brief Field progressIndicatorRedeemedColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_progressIndicatorRedeemedColor, put = __cordl_internal_set_progressIndicatorRedeemedColor))::UnityEngine::Color progressIndicatorRedeemedColor;

  /// @brief Field redeemButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_redeemButton, put = __cordl_internal_set_redeemButton))::UnityW<::GlobalNamespace::SimpleButtonController> redeemButton;

  /// @brief Field reward, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reward, put = __cordl_internal_set_reward))::UnityW<::GlobalNamespace::CurrencyDisplay> reward;

  /// @brief Method Deregister, addr 0x27585b8, size 0x1e0, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method Initialize, addr 0x2757f98, size 0x90, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::ActiveChallenge* activeChallenge, ::GlobalNamespace::ActiveChallengesDisplay* display);

  static inline ::GlobalNamespace::ChallengeListItem* New_ctor();

  /// @brief Method OnCompleted, addr 0x2758bb4, size 0x4, virtual false, abstract: false, final false
  inline void OnCompleted();

  /// @brief Method OnDisable, addr 0x27585a8, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2758590, size 0x18, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnProgressUpdated, addr 0x27589dc, size 0x34, virtual false, abstract: false, final false
  inline void OnProgressUpdated(int32_t progress);

  /// @brief Method OnRedeemButtonPressed, addr 0x2758bf0, size 0x18, virtual false, abstract: false, final false
  inline void OnRedeemButtonPressed();

  /// @brief Method OnRedeemed, addr 0x2758bb8, size 0x38, virtual false, abstract: false, final false
  inline void OnRedeemed(int32_t reward);

  /// @brief Method Refresh, addr 0x2758a10, size 0x124, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Register, addr 0x2758398, size 0x1f8, virtual false, abstract: false, final false
  inline void Register();

  constexpr ::GlobalNamespace::ActiveChallenge*& __cordl_internal_get_activeChallenge();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ActiveChallenge*> const& __cordl_internal_get_activeChallenge() const;

  constexpr ::UnityW<::GlobalNamespace::ActiveChallengesDisplay> const& __cordl_internal_get_display() const;

  constexpr ::UnityW<::GlobalNamespace::ActiveChallengesDisplay>& __cordl_internal_get_display();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fadeCover() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fadeCover();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_message() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_message();

  constexpr ::UnityW<::GlobalNamespace::ProgressIndicator> const& __cordl_internal_get_progressIndicator() const;

  constexpr ::UnityW<::GlobalNamespace::ProgressIndicator>& __cordl_internal_get_progressIndicator();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_progressIndicatorCompletedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_progressIndicatorCompletedColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_progressIndicatorRedeemedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_progressIndicatorRedeemedColor();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_redeemButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_redeemButton();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_reward() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_reward();

  constexpr void __cordl_internal_set_activeChallenge(::GlobalNamespace::ActiveChallenge* value);

  constexpr void __cordl_internal_set_display(::UnityW<::GlobalNamespace::ActiveChallengesDisplay> value);

  constexpr void __cordl_internal_set_fadeCover(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_message(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_progressIndicator(::UnityW<::GlobalNamespace::ProgressIndicator> value);

  constexpr void __cordl_internal_set_progressIndicatorCompletedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_progressIndicatorRedeemedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_redeemButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_reward(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  /// @brief Method .ctor, addr 0x2758f18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeListItem(ChallengeListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeListItem(ChallengeListItem const&) = delete;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___message;

  /// @brief Field reward, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___reward;

  /// @brief Field redeemButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___redeemButton;

  /// @brief Field progressIndicator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ProgressIndicator> ___progressIndicator;

  /// @brief Field progressIndicatorCompletedColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___progressIndicatorCompletedColor;

  /// @brief Field progressIndicatorRedeemedColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___progressIndicatorRedeemedColor;

  /// @brief Field fadeCover, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___fadeCover;

  /// @brief Field activeChallenge, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ActiveChallenge* ___activeChallenge;

  /// @brief Field isRegistered, offset: 0x68, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field display, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ActiveChallengesDisplay> ___display;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ChallengeListItem, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___reward) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___redeemButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___progressIndicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___progressIndicatorCompletedColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___progressIndicatorRedeemedColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___fadeCover) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___activeChallenge) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___isRegistered) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeListItem, ___display) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ChallengeListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChallengeListItem*, "", "ChallengeListItem");
