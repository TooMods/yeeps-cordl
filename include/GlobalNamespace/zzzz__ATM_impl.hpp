#pragma once
#include "GlobalNamespace/zzzz__ATM_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ATM_def.hpp"
#include "GlobalNamespace/zzzz__ATM_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__AccountManager_def.hpp"
#include "GlobalNamespace/zzzz__IAPManager_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseCurrencyItem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ATM__Location::__ATM__Location(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ATM__Location::__ATM__Location() {}
constexpr ::GlobalNamespace::__ATM__Location GlobalNamespace::__ATM__Location::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ATM__Location GlobalNamespace::__ATM__Location::cosmeticsStore{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ATM__Location GlobalNamespace::__ATM__Location::techWeb{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__ATM__Location GlobalNamespace::__ATM__Location::lobby{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__ATM____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ATM____c::*)()>(&::GlobalNamespace::__ATM____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1540c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ATM____c._OnAddCurrencyButtonPressed_b__12_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ATM____c::*)()>(&::GlobalNamespace::__ATM____c::_OnAddCurrencyButtonPressed_b__12_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1540c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), "<OnAddCurrencyButtonPressed>b__12_1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ATM____c._OnResetCurrencyButtonPressed_b__13_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ATM____c::*)(::StringW)>(
    &::GlobalNamespace::__ATM____c::_OnResetCurrencyButtonPressed_b__13_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1540c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), "<OnResetCurrencyButtonPressed>b__13_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__ATM____c::setStaticF___9(::GlobalNamespace::__ATM____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ATM____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>(
      std::forward<::GlobalNamespace::__ATM____c*>(value));
}
inline ::GlobalNamespace::__ATM____c* GlobalNamespace::__ATM____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ATM____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>();
}
inline void GlobalNamespace::__ATM____c::setStaticF___9__12_1(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__IAPManager__OnPurchaseFailure*, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>(
      std::forward<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>(value));
}
inline ::GlobalNamespace::__IAPManager__OnPurchaseFailure* GlobalNamespace::__ATM____c::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__IAPManager__OnPurchaseFailure*, "<>9__12_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>();
}
inline void GlobalNamespace::__ATM____c::setStaticF___9__13_1(::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*, "<>9__13_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>(
      std::forward<::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*>(value));
}
inline ::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure* GlobalNamespace::__ATM____c::getStaticF___9__13_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__AccountManager__OnCurrencyAddedFailure*, "<>9__13_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get>();
}
inline ::GlobalNamespace::__ATM____c* GlobalNamespace::__ATM____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ATM____c*>());
}
inline void GlobalNamespace::__ATM____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ATM____c::_OnAddCurrencyButtonPressed_b__12_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), "<OnAddCurrencyButtonPressed>b__12_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ATM____c::_OnResetCurrencyButtonPressed_b__13_1(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c*>::get(), "<OnResetCurrencyButtonPressed>b__13_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ATM____c::__ATM____c() {}
//  Writing Method size for method: ::GlobalNamespace::__ATM____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ATM____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__ATM____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1540a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c__DisplayClass13_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ATM____c__DisplayClass13_0._OnResetCurrencyButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ATM____c__DisplayClass13_0::*)(int32_t)>(
    &::GlobalNamespace::__ATM____c__DisplayClass13_0::_OnResetCurrencyButtonPressed_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1540f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c__DisplayClass13_0*>::get(), "<OnResetCurrencyButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ATM>& GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ATM> const& GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ATM> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__ATM____c__DisplayClass13_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ATM____c__DisplayClass13_0* GlobalNamespace::__ATM____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ATM____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__ATM____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c__DisplayClass13_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ATM____c__DisplayClass13_0::_OnResetCurrencyButtonPressed_b__0(int32_t newAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ATM____c__DisplayClass13_0*>::get(), "<OnResetCurrencyButtonPressed>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAmount);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ATM____c__DisplayClass13_0::__ATM____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::ATM.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::OnEnable)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x153fef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::OnDisable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1540120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::DestroySelf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1540310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)(bool)>(&::GlobalNamespace::ATM::SetActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1540108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x154037c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.OnAddCurrencyButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)(::StringW)>(&::GlobalNamespace::ATM::OnAddCurrencyButtonPressed)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x1540568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnAddCurrencyButtonPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM.OnResetCurrencyButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::OnResetCurrencyButtonPressed)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x15408c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnResetCurrencyButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)()>(&::GlobalNamespace::ATM::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1540a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM._OnAddCurrencyButtonPressed_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ATM::*)(int32_t)>(&::GlobalNamespace::ATM::_OnAddCurrencyButtonPressed_b__12_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1540a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "<OnAddCurrencyButtonPressed>b__12_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ATM__Location& GlobalNamespace::ATM::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::GlobalNamespace::__ATM__Location const& GlobalNamespace::ATM::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void GlobalNamespace::ATM::__cordl_internal_set_location(::GlobalNamespace::__ATM__Location value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ATM::__cordl_internal_get_activeContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ATM::__cordl_internal_get_activeContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr void GlobalNamespace::ATM::__cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ATM::__cordl_internal_get_dispensePoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispensePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ATM::__cordl_internal_get_dispensePoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispensePoint;
}
constexpr void GlobalNamespace::ATM::__cordl_internal_set_dispensePoint(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dispensePoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*>& GlobalNamespace::ATM::__cordl_internal_get_purchaseCurrencyItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___purchaseCurrencyItems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> const&
GlobalNamespace::ATM::__cordl_internal_get_purchaseCurrencyItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___purchaseCurrencyItems;
}
constexpr void
GlobalNamespace::ATM::__cordl_internal_set_purchaseCurrencyItems(::ArrayW<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>, ::Array<::UnityW<::GlobalNamespace::PurchaseCurrencyItem>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___purchaseCurrencyItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ATM::__cordl_internal_get_resetCurrencyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetCurrencyButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ATM::__cordl_internal_get_resetCurrencyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetCurrencyButton;
}
constexpr void GlobalNamespace::ATM::__cordl_internal_set_resetCurrencyButton(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resetCurrencyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ATM::__cordl_internal_get_dispenseSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr ::StringW const& GlobalNamespace::ATM::__cordl_internal_get_dispenseSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr void GlobalNamespace::ATM::__cordl_internal_set_dispenseSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dispenseSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ATM::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ATM::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ATM::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ATM::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::ATM::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ATM::OnAddCurrencyButtonPressed(::StringW IAPKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnAddCurrencyButtonPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, IAPKey);
}
inline void GlobalNamespace::ATM::OnResetCurrencyButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "OnResetCurrencyButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ATM* GlobalNamespace::ATM::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ATM*>());
}
inline void GlobalNamespace::ATM::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ATM::_OnAddCurrencyButtonPressed_b__12_0(int32_t amountAdded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ATM*>::get(), "<OnAddCurrencyButtonPressed>b__12_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amountAdded);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ATM::ATM() {}
