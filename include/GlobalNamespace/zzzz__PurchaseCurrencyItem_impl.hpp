#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PurchaseCurrencyItem_def.hpp"
#include "GlobalNamespace/zzzz__ATM_def.hpp"
#include "GlobalNamespace/zzzz__CurrencyDisplay_def.hpp"
#include "GlobalNamespace/zzzz__IAPManager_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyItem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PurchaseCurrencyItem::*)(
    ::GlobalNamespace::ATM*, ::GlobalNamespace::__IAPManager__CurrencyPurchaseData)>(&::GlobalNamespace::PurchaseCurrencyItem::Initialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf21608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ATM*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyItem.OnPurchaseButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PurchaseCurrencyItem::*)()>(
    &::GlobalNamespace::PurchaseCurrencyItem::OnPurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf2166c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(),
                                                                               "OnPurchaseButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PurchaseCurrencyItem::*)()>(&::GlobalNamespace::PurchaseCurrencyItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf21690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_currencyDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_currencyDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyDisplay;
}
constexpr void GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_set_currencyDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currencyDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_dollarAmountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dollarAmountText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_dollarAmountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dollarAmountText;
}
constexpr void GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_set_dollarAmountText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dollarAmountText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_IAPKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IAPKey;
}
constexpr ::StringW const& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_IAPKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IAPKey;
}
constexpr void GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_set_IAPKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IAPKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ATM>& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_atm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atm;
}
constexpr ::UnityW<::GlobalNamespace::ATM> const& GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_get_atm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atm;
}
constexpr void GlobalNamespace::PurchaseCurrencyItem::__cordl_internal_set_atm(::UnityW<::GlobalNamespace::ATM> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PurchaseCurrencyItem::Initialize(::GlobalNamespace::ATM* atm, ::GlobalNamespace::__IAPManager__CurrencyPurchaseData currencyPurchaseData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ATM*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atm, currencyPurchaseData);
}
inline void GlobalNamespace::PurchaseCurrencyItem::OnPurchaseButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(),
                                                                             "OnPurchaseButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PurchaseCurrencyItem* GlobalNamespace::PurchaseCurrencyItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PurchaseCurrencyItem*>());
}
inline void GlobalNamespace::PurchaseCurrencyItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PurchaseCurrencyItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PurchaseCurrencyItem::PurchaseCurrencyItem() {}
