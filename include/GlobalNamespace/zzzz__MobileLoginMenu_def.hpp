#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileSlidingPage_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileLoginMenu)
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class SplitTextUI;
}
namespace GlobalNamespace {
class TapButton2D;
}
namespace GlobalNamespace {
class __MobileLoginMenu__OnLinkFlowComplete;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileLoginMenu;
}
namespace GlobalNamespace {
class __MobileLoginMenu__OnLinkFlowComplete;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileLoginMenu);
MARK_REF_PTR_T(::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete);
// Type: ::OnLinkFlowComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileLoginMenu::OnLinkFlowComplete*
class CORDL_TYPE __MobileLoginMenu__OnLinkFlowComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0822c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0824c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e08218, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e00764, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileLoginMenu__OnLinkFlowComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileLoginMenu__OnLinkFlowComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileLoginMenu__OnLinkFlowComplete(__MobileLoginMenu__OnLinkFlowComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileLoginMenu__OnLinkFlowComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileLoginMenu__OnLinkFlowComplete(__MobileLoginMenu__OnLinkFlowComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileLoginMenu
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileLoginMenu*
class CORDL_TYPE MobileLoginMenu : public ::GlobalNamespace::MobileSlidingPage {
public:
  // Declarations
  using OnLinkFlowComplete = ::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete;

  /// @brief Field errorMessageText, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_errorMessageText, put = __cordl_internal_set_errorMessageText))::UnityW<::UnityEngine::UI::Text> errorMessageText;

  /// @brief Field errorTypeIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_errorTypeIcon, put = __cordl_internal_set_errorTypeIcon))::UnityW<::UnityEngine::UI::Image> errorTypeIcon;

  /// @brief Field isLinking, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isLinking, put = __cordl_internal_set_isLinking)) bool isLinking;

  /// @brief Field linkAccountPage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_linkAccountPage, put = __cordl_internal_set_linkAccountPage))::UnityW<::UnityEngine::GameObject> linkAccountPage;

  /// @brief Field linkButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_linkButton, put = __cordl_internal_set_linkButton))::UnityW<::GlobalNamespace::TapButton2D> linkButton;

  /// @brief Field loginInstructionsPage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_loginInstructionsPage, put = __cordl_internal_set_loginInstructionsPage))::UnityW<::UnityEngine::GameObject> loginInstructionsPage;

  /// @brief Field mobileCodeInputField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileCodeInputField, put = __cordl_internal_set_mobileCodeInputField))::UnityW<::UnityEngine::UI::InputField> mobileCodeInputField;

  /// @brief Field mobileCodeText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileCodeText, put = __cordl_internal_set_mobileCodeText))::UnityW<::GlobalNamespace::SplitTextUI> mobileCodeText;

  /// @brief Field oculusNameInputField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_oculusNameInputField, put = __cordl_internal_set_oculusNameInputField))::UnityW<::UnityEngine::UI::InputField> oculusNameInputField;

  /// @brief Field onLinkFlowComplete, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onLinkFlowComplete, put = __cordl_internal_set_onLinkFlowComplete))::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete* onLinkFlowComplete;

  /// @brief Method ClearLinkPrompt, addr 0x2e07910, size 0x7c, virtual false, abstract: false, final false
  inline void ClearLinkPrompt();

  /// @brief Method DisplayPrompt, addr 0x2e07c0c, size 0x184, virtual false, abstract: false, final false
  inline void DisplayPrompt(::GlobalNamespace::ImaginationPrompt* promptData);

  /// @brief Method InitializeMobileCodeText, addr 0x2e077c8, size 0x64, virtual false, abstract: false, final false
  inline void InitializeMobileCodeText();

  static inline ::GlobalNamespace::MobileLoginMenu* New_ctor();

  /// @brief Method OnLinkAccountButtonPressed, addr 0x2e07a28, size 0x1e4, virtual false, abstract: false, final false
  inline void OnLinkAccountButtonPressed();

  /// @brief Method OnMobileCodeInputFieldChanged, addr 0x2e07fd4, size 0x28, virtual false, abstract: false, final false
  inline void OnMobileCodeInputFieldChanged(::StringW newText);

  /// @brief Method OnMobileCodeInputFieldSelected, addr 0x2e07ffc, size 0x68, virtual false, abstract: false, final false
  inline void OnMobileCodeInputFieldSelected();

  /// @brief Method OnOculusNameInputFieldChanged, addr 0x2e08064, size 0x4, virtual false, abstract: false, final false
  inline void OnOculusNameInputFieldChanged(::StringW newText);

  /// @brief Method OnOpenLinkAccountPageButtonPressed, addr 0x2e07a24, size 0x4, virtual false, abstract: false, final false
  inline void OnOpenLinkAccountPageButtonPressed();

  /// @brief Method OnSetActive, addr 0x2e0782c, size 0xc, virtual true, abstract: false, final false
  inline void OnSetActive(bool newActive);

  /// @brief Method OnStart, addr 0x2e077c4, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method OpenLinkAccountPage, addr 0x2e07838, size 0xa0, virtual false, abstract: false, final false
  inline void OpenLinkAccountPage();

  /// @brief Method OpenLoginInstructionsPage, addr 0x2e078d8, size 0x38, virtual false, abstract: false, final false
  inline void OpenLoginInstructionsPage();

  /// @brief Method ValidateInputFields, addr 0x2e0798c, size 0x98, virtual false, abstract: false, final false
  inline void ValidateInputFields();

  /// @brief Method <OnLinkAccountButtonPressed>b__18_0, addr 0x2e08070, size 0x78, virtual false, abstract: false, final false
  inline void _OnLinkAccountButtonPressed_b__18_0();

  /// @brief Method <OnLinkAccountButtonPressed>b__18_1, addr 0x2e080e8, size 0x130, virtual false, abstract: false, final false
  inline void _OnLinkAccountButtonPressed_b__18_1(::StringW errorCode);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_errorMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_errorMessageText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_errorTypeIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_errorTypeIcon();

  constexpr bool const& __cordl_internal_get_isLinking() const;

  constexpr bool& __cordl_internal_get_isLinking();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_linkAccountPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_linkAccountPage();

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_linkButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_linkButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_loginInstructionsPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_loginInstructionsPage();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_mobileCodeInputField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_mobileCodeInputField();

  constexpr ::UnityW<::GlobalNamespace::SplitTextUI> const& __cordl_internal_get_mobileCodeText() const;

  constexpr ::UnityW<::GlobalNamespace::SplitTextUI>& __cordl_internal_get_mobileCodeText();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_oculusNameInputField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_oculusNameInputField();

  constexpr ::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete*& __cordl_internal_get_onLinkFlowComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete*> const& __cordl_internal_get_onLinkFlowComplete() const;

  constexpr void __cordl_internal_set_errorMessageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_errorTypeIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_isLinking(bool value);

  constexpr void __cordl_internal_set_linkAccountPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_linkButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  constexpr void __cordl_internal_set_loginInstructionsPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_mobileCodeInputField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_mobileCodeText(::UnityW<::GlobalNamespace::SplitTextUI> value);

  constexpr void __cordl_internal_set_oculusNameInputField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_onLinkFlowComplete(::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete* value);

  /// @brief Method .ctor, addr 0x2e08068, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileLoginMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileLoginMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileLoginMenu(MobileLoginMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileLoginMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileLoginMenu(MobileLoginMenu const&) = delete;

  /// @brief Field loginInstructionsPage, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___loginInstructionsPage;

  /// @brief Field linkAccountPage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___linkAccountPage;

  /// @brief Field oculusNameInputField, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___oculusNameInputField;

  /// @brief Field mobileCodeInputField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___mobileCodeInputField;

  /// @brief Field mobileCodeText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SplitTextUI> ___mobileCodeText;

  /// @brief Field linkButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___linkButton;

  /// @brief Field errorTypeIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___errorTypeIcon;

  /// @brief Field errorMessageText, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___errorMessageText;

  /// @brief Field onLinkFlowComplete, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete* ___onLinkFlowComplete;

  /// @brief Field isLinking, offset: 0xb0, size: 0x1, def value: None
  bool ___isLinking;

  /// @brief Field skipInstructionsPage offset 0xffffffff size 0x1
  static constexpr bool skipInstructionsPage{ true };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileLoginMenu, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___loginInstructionsPage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___linkAccountPage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___oculusNameInputField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___mobileCodeInputField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___mobileCodeText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___linkButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___errorTypeIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___errorMessageText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___onLinkFlowComplete) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileLoginMenu, ___isLinking) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileLoginMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileLoginMenu*, "", "MobileLoginMenu");
NEED_NO_BOX(::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileLoginMenu__OnLinkFlowComplete*, "", "MobileLoginMenu/OnLinkFlowComplete");
