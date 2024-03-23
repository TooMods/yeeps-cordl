#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileSlidingPage_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileCreatorPackMenu)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class TapButton2D;
}
namespace GlobalNamespace {
class __MobileCreatorPackMenu__OnPurchaseFlowComplete;
}
namespace GlobalNamespace {
class __MobileCreatorPackMenu____c__DisplayClass12_0;
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
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileCreatorPackMenu;
}
namespace GlobalNamespace {
class __MobileCreatorPackMenu__OnPurchaseFlowComplete;
}
namespace GlobalNamespace {
class __MobileCreatorPackMenu____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileCreatorPackMenu);
MARK_REF_PTR_T(::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete);
MARK_REF_PTR_T(::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0);
// Type: ::OnPurchaseFlowComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileCreatorPackMenu::OnPurchaseFlowComplete*
class CORDL_TYPE __MobileCreatorPackMenu__OnPurchaseFlowComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0746c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0748c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e07458, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0739c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileCreatorPackMenu__OnPurchaseFlowComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileCreatorPackMenu__OnPurchaseFlowComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileCreatorPackMenu__OnPurchaseFlowComplete(__MobileCreatorPackMenu__OnPurchaseFlowComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileCreatorPackMenu__OnPurchaseFlowComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileCreatorPackMenu__OnPurchaseFlowComplete(__MobileCreatorPackMenu__OnPurchaseFlowComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileCreatorPackMenu::<>c__DisplayClass12_0*
class CORDL_TYPE __MobileCreatorPackMenu____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileCreatorPackMenu> __4__this;

  /// @brief Field accountData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accountData, put = __cordl_internal_set_accountData))::GlobalNamespace::AccountData* accountData;

  static inline ::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0* New_ctor();

  /// @brief Method <OnPurchaseButtonPressed>b__0, addr 0x2e07498, size 0x100, virtual false, abstract: false, final false
  inline void _OnPurchaseButtonPressed_b__0(int32_t cost);

  /// @brief Method <OnPurchaseButtonPressed>b__1, addr 0x2e076bc, size 0x108, virtual false, abstract: false, final false
  inline void _OnPurchaseButtonPressed_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::AccountData*& __cordl_internal_get_accountData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& __cordl_internal_get_accountData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileCreatorPackMenu> value);

  constexpr void __cordl_internal_set_accountData(::GlobalNamespace::AccountData* value);

  /// @brief Method .ctor, addr 0x2e06dd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileCreatorPackMenu____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileCreatorPackMenu____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileCreatorPackMenu____c__DisplayClass12_0(__MobileCreatorPackMenu____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileCreatorPackMenu____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileCreatorPackMenu____c__DisplayClass12_0(__MobileCreatorPackMenu____c__DisplayClass12_0 const&) = delete;

  /// @brief Field accountData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* ___accountData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileCreatorPackMenu> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0, ___accountData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileCreatorPackMenu
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileCreatorPackMenu*
class CORDL_TYPE MobileCreatorPackMenu : public ::GlobalNamespace::MobileSlidingPage {
public:
  // Declarations
  using OnPurchaseFlowComplete = ::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0;

  /// @brief Field errorMessageText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_errorMessageText, put = __cordl_internal_set_errorMessageText))::UnityW<::UnityEngine::UI::Text> errorMessageText;

  /// @brief Field errorTypeIcon, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_errorTypeIcon, put = __cordl_internal_set_errorTypeIcon))::UnityW<::UnityEngine::UI::Image> errorTypeIcon;

  /// @brief Field isFetchingPrice, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isFetchingPrice, put = __cordl_internal_set_isFetchingPrice)) bool isFetchingPrice;

  /// @brief Field isPurchasing, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_isPurchasing, put = __cordl_internal_set_isPurchasing)) bool isPurchasing;

  /// @brief Field onPurchaseFlowComplete, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_onPurchaseFlowComplete,
                      put = __cordl_internal_set_onPurchaseFlowComplete))::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete* onPurchaseFlowComplete;

  /// @brief Field purchaseButton, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_purchaseButton, put = __cordl_internal_set_purchaseButton))::UnityW<::GlobalNamespace::TapButton2D> purchaseButton;

  /// @brief Field purchasePrice, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_purchasePrice, put = __cordl_internal_set_purchasePrice)) int32_t purchasePrice;

  /// @brief Field purchasePriceDisplay, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_purchasePriceDisplay, put = __cordl_internal_set_purchasePriceDisplay))::UnityW<::GlobalNamespace::CurrencyDisplay> purchasePriceDisplay;

  /// @brief Method ClearPrompt, addr 0x2e068b4, size 0x7c, virtual false, abstract: false, final false
  inline void ClearPrompt();

  /// @brief Method DisplayPrompt, addr 0x2e06dd8, size 0x184, virtual false, abstract: false, final false
  inline void DisplayPrompt(::GlobalNamespace::ImaginationPrompt* promptData);

  static inline ::GlobalNamespace::MobileCreatorPackMenu* New_ctor();

  /// @brief Method OnPurchaseButtonPressed, addr 0x2e06b38, size 0x298, virtual false, abstract: false, final false
  inline void OnPurchaseButtonPressed();

  /// @brief Method OnSetActive, addr 0x2e06768, size 0x14c, virtual true, abstract: false, final false
  inline void OnSetActive(bool newActive);

  /// @brief Method RefreshPurchaseButton, addr 0x2e0695c, size 0x184, virtual false, abstract: false, final false
  inline void RefreshPurchaseButton();

  /// @brief Method SetPurchasePrice, addr 0x2e06930, size 0x2c, virtual false, abstract: false, final false
  inline void SetPurchasePrice(int32_t newPurchasePrice);

  /// @brief Method <OnSetActive>b__6_0, addr 0x2e071b0, size 0x8c, virtual false, abstract: false, final false
  inline void _OnSetActive_b__6_0(int32_t newPrice);

  /// @brief Method <OnSetActive>b__6_1, addr 0x2e0723c, size 0x160, virtual false, abstract: false, final false
  inline void _OnSetActive_b__6_1(::StringW error);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_errorMessageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_errorMessageText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_errorTypeIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_errorTypeIcon();

  constexpr bool const& __cordl_internal_get_isFetchingPrice() const;

  constexpr bool& __cordl_internal_get_isFetchingPrice();

  constexpr bool const& __cordl_internal_get_isPurchasing() const;

  constexpr bool& __cordl_internal_get_isPurchasing();

  constexpr ::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete*& __cordl_internal_get_onPurchaseFlowComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete*> const& __cordl_internal_get_onPurchaseFlowComplete() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_purchaseButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_purchaseButton();

  constexpr int32_t const& __cordl_internal_get_purchasePrice() const;

  constexpr int32_t& __cordl_internal_get_purchasePrice();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_purchasePriceDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_purchasePriceDisplay();

  constexpr void __cordl_internal_set_errorMessageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_errorTypeIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_isFetchingPrice(bool value);

  constexpr void __cordl_internal_set_isPurchasing(bool value);

  constexpr void __cordl_internal_set_onPurchaseFlowComplete(::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete* value);

  constexpr void __cordl_internal_set_purchaseButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  constexpr void __cordl_internal_set_purchasePrice(int32_t value);

  constexpr void __cordl_internal_set_purchasePriceDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  /// @brief Method .ctor, addr 0x2e071a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileCreatorPackMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileCreatorPackMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileCreatorPackMenu(MobileCreatorPackMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileCreatorPackMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileCreatorPackMenu(MobileCreatorPackMenu const&) = delete;

  /// @brief Field purchaseButton, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___purchaseButton;

  /// @brief Field purchasePriceDisplay, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___purchasePriceDisplay;

  /// @brief Field errorTypeIcon, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___errorTypeIcon;

  /// @brief Field errorMessageText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___errorMessageText;

  /// @brief Field onPurchaseFlowComplete, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete* ___onPurchaseFlowComplete;

  /// @brief Field isFetchingPrice, offset: 0x90, size: 0x1, def value: None
  bool ___isFetchingPrice;

  /// @brief Field purchasePrice, offset: 0x94, size: 0x4, def value: None
  int32_t ___purchasePrice;

  /// @brief Field isPurchasing, offset: 0x98, size: 0x1, def value: None
  bool ___isPurchasing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileCreatorPackMenu, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___purchaseButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___purchasePriceDisplay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___errorTypeIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___errorMessageText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___onPurchaseFlowComplete) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___isFetchingPrice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___purchasePrice) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileCreatorPackMenu, ___isPurchasing) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileCreatorPackMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileCreatorPackMenu*, "", "MobileCreatorPackMenu");
NEED_NO_BOX(::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileCreatorPackMenu__OnPurchaseFlowComplete*, "", "MobileCreatorPackMenu/OnPurchaseFlowComplete");
NEED_NO_BOX(::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileCreatorPackMenu____c__DisplayClass12_0*, "", "MobileCreatorPackMenu/<>c__DisplayClass12_0");
