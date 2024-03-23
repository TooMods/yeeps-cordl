#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PurchaseCurrencyItem)
namespace GlobalNamespace {
class ATM;
}
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
struct __IAPManager__CurrencyPurchaseData;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PurchaseCurrencyItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PurchaseCurrencyItem);
// Type: ::PurchaseCurrencyItem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PurchaseCurrencyItem*
class CORDL_TYPE PurchaseCurrencyItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field IAPKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_IAPKey, put = __cordl_internal_set_IAPKey))::StringW IAPKey;

  /// @brief Field atm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_atm, put = __cordl_internal_set_atm))::UnityW<::GlobalNamespace::ATM> atm;

  /// @brief Field currencyDisplay, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyDisplay, put = __cordl_internal_set_currencyDisplay))::UnityW<::GlobalNamespace::CurrencyDisplay> currencyDisplay;

  /// @brief Field dollarAmountText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dollarAmountText, put = __cordl_internal_set_dollarAmountText))::UnityW<::UnityEngine::UI::Text> dollarAmountText;

  /// @brief Method Initialize, addr 0xf21608, size 0x64, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::ATM* atm, ::GlobalNamespace::__IAPManager__CurrencyPurchaseData currencyPurchaseData);

  static inline ::GlobalNamespace::PurchaseCurrencyItem* New_ctor();

  /// @brief Method OnPurchaseButtonPressed, addr 0xf2166c, size 0x24, virtual false, abstract: false, final false
  inline void OnPurchaseButtonPressed();

  constexpr ::StringW const& __cordl_internal_get_IAPKey() const;

  constexpr ::StringW& __cordl_internal_get_IAPKey();

  constexpr ::UnityW<::GlobalNamespace::ATM> const& __cordl_internal_get_atm() const;

  constexpr ::UnityW<::GlobalNamespace::ATM>& __cordl_internal_get_atm();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_currencyDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_currencyDisplay();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_dollarAmountText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_dollarAmountText();

  constexpr void __cordl_internal_set_IAPKey(::StringW value);

  constexpr void __cordl_internal_set_atm(::UnityW<::GlobalNamespace::ATM> value);

  constexpr void __cordl_internal_set_currencyDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  constexpr void __cordl_internal_set_dollarAmountText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0xf21690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PurchaseCurrencyItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PurchaseCurrencyItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PurchaseCurrencyItem(PurchaseCurrencyItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PurchaseCurrencyItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PurchaseCurrencyItem(PurchaseCurrencyItem const&) = delete;

  /// @brief Field currencyDisplay, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___currencyDisplay;

  /// @brief Field dollarAmountText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___dollarAmountText;

  /// @brief Field IAPKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___IAPKey;

  /// @brief Field atm, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ATM> ___atm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PurchaseCurrencyItem, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseCurrencyItem, ___currencyDisplay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseCurrencyItem, ___dollarAmountText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseCurrencyItem, ___IAPKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseCurrencyItem, ___atm) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PurchaseCurrencyItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PurchaseCurrencyItem*, "", "PurchaseCurrencyItem");
