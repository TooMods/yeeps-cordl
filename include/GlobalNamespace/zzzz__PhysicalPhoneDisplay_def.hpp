#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicalPhoneDisplay)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class ButtonController;
}
namespace GlobalNamespace {
class SplitTextUI;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicalPhoneDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PhysicalPhoneDisplay);
// Type: ::PhysicalPhoneDisplay
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PhysicalPhoneDisplay*
class CORDL_TYPE PhysicalPhoneDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field coverPage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_coverPage, put = __cordl_internal_set_coverPage))::UnityW<::UnityEngine::GameObject> coverPage;

  /// @brief Field infoPage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_infoPage, put = __cordl_internal_set_infoPage))::UnityW<::UnityEngine::GameObject> infoPage;

  /// @brief Field mobileCodeDisplay, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileCodeDisplay, put = __cordl_internal_set_mobileCodeDisplay))::UnityW<::GlobalNamespace::SplitTextUI> mobileCodeDisplay;

  /// @brief Field mobileCoverPage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileCoverPage, put = __cordl_internal_set_mobileCoverPage))::UnityW<::UnityEngine::GameObject> mobileCoverPage;

  /// @brief Field nextResetTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_nextResetTime, put = __cordl_internal_set_nextResetTime)) float_t nextResetTime;

  /// @brief Field resetCodeButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_resetCodeButton, put = __cordl_internal_set_resetCodeButton))::UnityW<::GlobalNamespace::ButtonController> resetCodeButton;

  /// @brief Field usernameText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_usernameText, put = __cordl_internal_set_usernameText))::UnityW<::UnityEngine::UI::Text> usernameText;

  /// @brief Method Awake, addr 0x2e048f8, size 0x12c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::PhysicalPhoneDisplay* New_ctor();

  /// @brief Method OnAccountLoaded, addr 0x2e04b98, size 0xf0, virtual false, abstract: false, final false
  inline void OnAccountLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnDisable, addr 0x2e04dc0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2e04c88, size 0x70, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnResetCodeButtonPressed, addr 0x2e04e2c, size 0x120, virtual false, abstract: false, final false
  inline void OnResetCodeButtonPressed();

  /// @brief Method OnShowInfoButtonPressed, addr 0x2e04e28, size 0x4, virtual false, abstract: false, final false
  inline void OnShowInfoButtonPressed();

  /// @brief Method ShowCoverPage, addr 0x2e04cf8, size 0x64, virtual false, abstract: false, final false
  inline void ShowCoverPage();

  /// @brief Method ShowInfoPage, addr 0x2e04dc4, size 0x64, virtual false, abstract: false, final false
  inline void ShowInfoPage();

  /// @brief Method ShowMobileCoverPage, addr 0x2e04d5c, size 0x64, virtual false, abstract: false, final false
  inline void ShowMobileCoverPage();

  /// @brief Method <OnResetCodeButtonPressed>b__16_0, addr 0x2e05198, size 0x94, virtual false, abstract: false, final false
  inline void _OnResetCodeButtonPressed_b__16_0(::StringW newCode);

  /// @brief Method <OnResetCodeButtonPressed>b__16_1, addr 0x2e0522c, size 0x118, virtual false, abstract: false, final false
  inline void _OnResetCodeButtonPressed_b__16_1(::StringW errorCode);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_coverPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_coverPage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_infoPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_infoPage();

  constexpr ::UnityW<::GlobalNamespace::SplitTextUI> const& __cordl_internal_get_mobileCodeDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::SplitTextUI>& __cordl_internal_get_mobileCodeDisplay();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mobileCoverPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mobileCoverPage();

  constexpr float_t const& __cordl_internal_get_nextResetTime() const;

  constexpr float_t& __cordl_internal_get_nextResetTime();

  constexpr ::UnityW<::GlobalNamespace::ButtonController> const& __cordl_internal_get_resetCodeButton() const;

  constexpr ::UnityW<::GlobalNamespace::ButtonController>& __cordl_internal_get_resetCodeButton();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_usernameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_usernameText();

  constexpr void __cordl_internal_set_coverPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_infoPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_mobileCodeDisplay(::UnityW<::GlobalNamespace::SplitTextUI> value);

  constexpr void __cordl_internal_set_mobileCoverPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_nextResetTime(float_t value);

  constexpr void __cordl_internal_set_resetCodeButton(::UnityW<::GlobalNamespace::ButtonController> value);

  constexpr void __cordl_internal_set_usernameText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x2e05190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicalPhoneDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicalPhoneDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicalPhoneDisplay(PhysicalPhoneDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicalPhoneDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicalPhoneDisplay(PhysicalPhoneDisplay const&) = delete;

  /// @brief Field coverPage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___coverPage;

  /// @brief Field infoPage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___infoPage;

  /// @brief Field mobileCoverPage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___mobileCoverPage;

  /// @brief Field usernameText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___usernameText;

  /// @brief Field mobileCodeDisplay, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SplitTextUI> ___mobileCodeDisplay;

  /// @brief Field resetCodeButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ButtonController> ___resetCodeButton;

  /// @brief Field nextResetTime, offset: 0x48, size: 0x4, def value: None
  float_t ___nextResetTime;

  /// @brief Field RESET_COOLDOWN offset 0xffffffff size 0x4
  static constexpr float_t RESET_COOLDOWN{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PhysicalPhoneDisplay, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___coverPage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___infoPage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___mobileCoverPage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___usernameText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___mobileCodeDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___resetCodeButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicalPhoneDisplay, ___nextResetTime) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PhysicalPhoneDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicalPhoneDisplay*, "", "PhysicalPhoneDisplay");
