#pragma once
#include "GlobalNamespace/zzzz__IAPManager_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IAPManager_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__IAPManager_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__CurrencyPurchaseData.GetDollarDisplayString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__IAPManager__CurrencyPurchaseData::*)()>(
    &::GlobalNamespace::__IAPManager__CurrencyPurchaseData::GetDollarDisplayString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29d5534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get(),
                                                                               "GetDollarDisplayString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::__IAPManager__CurrencyPurchaseData::GetDollarDisplayString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get(),
                                                                             "GetDollarDisplayString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "metaIAPKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currencyAmount", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "centAmount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData::__IAPManager__CurrencyPurchaseData(::StringW metaIAPKey, int32_t currencyAmount, int32_t centAmount) noexcept {
  this->metaIAPKey = metaIAPKey;
  this->currencyAmount = currencyAmount;
  this->centAmount = centAmount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData::__IAPManager__CurrencyPurchaseData() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__IAPManager__OnPurchaseSuccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29d4c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseSuccess::*)(int32_t)>(
    &::GlobalNamespace::__IAPManager__OnPurchaseSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d55cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__IAPManager__OnPurchaseSuccess::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__IAPManager__OnPurchaseSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29d55e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__IAPManager__OnPurchaseSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* GlobalNamespace::__IAPManager__OnPurchaseSuccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>(object, method));
}
inline void GlobalNamespace::__IAPManager__OnPurchaseSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IAPManager__OnPurchaseSuccess::Invoke(int32_t amountAdded) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amountAdded);
}
inline ::System::IAsyncResult* GlobalNamespace::__IAPManager__OnPurchaseSuccess::BeginInvoke(int32_t amountAdded, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, amountAdded, callback, object);
}
inline void GlobalNamespace::__IAPManager__OnPurchaseSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess::__IAPManager__OnPurchaseSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseFailure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseFailure::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__IAPManager__OnPurchaseFailure::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29d4cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseFailure.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseFailure::*)()>(
    &::GlobalNamespace::__IAPManager__OnPurchaseFailure::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d5670;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseFailure.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__IAPManager__OnPurchaseFailure::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__IAPManager__OnPurchaseFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29d5684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager__OnPurchaseFailure.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager__OnPurchaseFailure::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__IAPManager__OnPurchaseFailure::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d56a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IAPManager__OnPurchaseFailure* GlobalNamespace::__IAPManager__OnPurchaseFailure::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>(object, method));
}
inline void GlobalNamespace::__IAPManager__OnPurchaseFailure::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IAPManager__OnPurchaseFailure::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__IAPManager__OnPurchaseFailure::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__IAPManager__OnPurchaseFailure::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure::__IAPManager__OnPurchaseFailure() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d4c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass9_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass9_0._LaunchPurchase_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass9_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&::GlobalNamespace::__IAPManager____c__DisplayClass9_0::_LaunchPurchase_b__0)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x29d56b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass9_0*>::get(), "<LaunchPurchase>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass9_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__IAPManager____c__DisplayClass9_0* GlobalNamespace::__IAPManager____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass9_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass9_0::_LaunchPurchase_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass9_0*>::get(), "<LaunchPurchase>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager____c__DisplayClass9_0::__IAPManager____c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d4c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass13_0._ProcessIAPs_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass13_0::*)(int32_t)>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ProcessIAPs_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29d58c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(), "<ProcessIAPs>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass13_0._ProcessIAPs_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ProcessIAPs_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d59bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(),
                                                                               "<ProcessIAPs>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_get_onIndividualSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIndividualSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const&
GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_get_onIndividualSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIndividualSuccess;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_set_onIndividualSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onIndividualSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_get_IAPKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IAPKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_get_IAPKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IAPKeys;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass13_0::__cordl_internal_set_IAPKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IAPKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__IAPManager____c__DisplayClass13_0* GlobalNamespace::__IAPManager____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ProcessIAPs_b__0(int32_t amountAdded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(), "<ProcessIAPs>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amountAdded);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass13_0::_ProcessIAPs_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass13_0*>::get(),
                                                                             "<ProcessIAPs>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager____c__DisplayClass13_0::__IAPManager____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d54dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass16_0._ProcessCurrencyIAP_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass16_0::*)(int32_t)>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ProcessCurrencyIAP_b__0)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x29d59c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(), "<ProcessCurrencyIAP>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass16_0._ProcessCurrencyIAP_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass16_0::*)(::StringW)>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ProcessCurrencyIAP_b__1)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x29d5bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(), "<ProcessCurrencyIAP>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_currencyPurchaseData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyPurchaseData;
}
constexpr ::GlobalNamespace::__IAPManager__CurrencyPurchaseData const& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_currencyPurchaseData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyPurchaseData;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_set_currencyPurchaseData(::GlobalNamespace::__IAPManager__CurrencyPurchaseData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyPurchaseData = value;
}
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass16_0::__cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__IAPManager____c__DisplayClass16_0* GlobalNamespace::__IAPManager____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ProcessCurrencyIAP_b__0(int32_t amountAdded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(), "<ProcessCurrencyIAP>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amountAdded);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass16_0::_ProcessCurrencyIAP_b__1(::StringW errorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass16_0*>::get(), "<ProcessCurrencyIAP>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager____c__DisplayClass16_0::__IAPManager____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d54e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass17_0._ProcessBundleIAP_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass17_0::*)(
    int32_t, int32_t, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ProcessBundleIAP_b__0)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x29d5d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(), "<ProcessBundleIAP>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IAPManager____c__DisplayClass17_0._ProcessBundleIAP_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IAPManager____c__DisplayClass17_0::*)(::StringW)>(
    &::GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ProcessBundleIAP_b__1)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x29d604c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(), "<ProcessBundleIAP>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_bundleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bundleKey;
}
constexpr ::StringW const& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_bundleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bundleKey;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_set_bundleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bundleKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AccountData*& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_accountData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AccountData*> const& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_accountData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountData;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_set_accountData(::GlobalNamespace::AccountData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accountData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*> const& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__IAPManager__OnPurchaseSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__IAPManager__OnPurchaseFailure*& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IAPManager__OnPurchaseFailure*> const& GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__IAPManager____c__DisplayClass17_0::__cordl_internal_set_onFailure(::GlobalNamespace::__IAPManager__OnPurchaseFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__IAPManager____c__DisplayClass17_0* GlobalNamespace::__IAPManager____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>());
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ProcessBundleIAP_b__0(int32_t currencyAmount, int32_t centCost, ::System::Collections::Generic::List_1<::StringW>* bundleItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(), "<ProcessBundleIAP>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currencyAmount, centCost, bundleItems);
}
inline void GlobalNamespace::__IAPManager____c__DisplayClass17_0::_ProcessBundleIAP_b__1(::StringW errorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IAPManager____c__DisplayClass17_0*>::get(), "<ProcessBundleIAP>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IAPManager____c__DisplayClass17_0::__IAPManager____c__DisplayClass17_0() {}
//  Writing Method size for method: ::GlobalNamespace::IAPManager.TryGetCurrencyPurchaseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>)>(
    &::GlobalNamespace::IAPManager::TryGetCurrencyPurchaseData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29d3f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "TryGetCurrencyPurchaseData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAPManager::*)()>(&::GlobalNamespace::IAPManager::Start)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29d4018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAPManager::*)(::GlobalNamespace::AccountData*)>(
    &::GlobalNamespace::IAPManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x29d4148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.OnGetViewerPurchasesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*)>(
    &::GlobalNamespace::IAPManager::OnGetViewerPurchasesComplete)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x29d42e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnGetViewerPurchasesComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.LaunchPurchase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAPManager::*)(
    ::StringW, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*, ::GlobalNamespace::__IAPManager__OnPurchaseFailure*)>(&::GlobalNamespace::IAPManager::LaunchPurchase)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x29d49a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "LaunchPurchase", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.ProcessIAPs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*)>(
    &::GlobalNamespace::IAPManager::ProcessIAPs)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x29d484c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessIAPs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.OnProcessIndividualComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*)>(
    &::GlobalNamespace::IAPManager::OnProcessIndividualComplete)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x29d4e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnProcessIndividualComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.ProcessIAP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*, ::GlobalNamespace::__IAPManager__OnPurchaseFailure*)>(&::GlobalNamespace::IAPManager::ProcessIAP)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29d4db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessIAP", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.ProcessCurrencyIAP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*,
                                                                                           ::GlobalNamespace::__IAPManager__OnPurchaseFailure*)>(&::GlobalNamespace::IAPManager::ProcessCurrencyIAP)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x29d4f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessCurrencyIAP", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager.ProcessBundleIAP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess*, ::GlobalNamespace::__IAPManager__OnPurchaseFailure*)>(&::GlobalNamespace::IAPManager::ProcessBundleIAP)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x29d520c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessBundleIAP", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAPManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAPManager::*)()>(&::GlobalNamespace::IAPManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29d54ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*>&
GlobalNamespace::IAPManager::__cordl_internal_get_currencyPurchaseDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyPurchaseDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> const&
GlobalNamespace::IAPManager::__cordl_internal_get_currencyPurchaseDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyPurchaseDatas;
}
constexpr void GlobalNamespace::IAPManager::__cordl_internal_set_currencyPurchaseDatas(
    ::ArrayW<::GlobalNamespace::__IAPManager__CurrencyPurchaseData, ::Array<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currencyPurchaseDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::IAPManager::__cordl_internal_get_doDebugPurchaseProcessingInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doDebugPurchaseProcessingInEditor;
}
constexpr bool const& GlobalNamespace::IAPManager::__cordl_internal_get_doDebugPurchaseProcessingInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doDebugPurchaseProcessingInEditor;
}
constexpr void GlobalNamespace::IAPManager::__cordl_internal_set_doDebugPurchaseProcessingInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doDebugPurchaseProcessingInEditor = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::IAPManager::__cordl_internal_get_debugPurchasedIAPKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPurchasedIAPKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::IAPManager::__cordl_internal_get_debugPurchasedIAPKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPurchasedIAPKeys;
}
constexpr void GlobalNamespace::IAPManager::__cordl_internal_set_debugPurchasedIAPKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugPurchasedIAPKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::IAPManager::setStaticF_isProcessingIAP(bool value) {
  ::cordl_internals::setStaticField<bool, "isProcessingIAP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::IAPManager::getStaticF_isProcessingIAP() {
  return ::cordl_internals::getStaticField<bool, "isProcessingIAP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get>();
}
inline bool GlobalNamespace::IAPManager::TryGetCurrencyPurchaseData(::StringW metaIAPKey, ByRef<::GlobalNamespace::__IAPManager__CurrencyPurchaseData> currencyPurchaseData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "TryGetCurrencyPurchaseData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, metaIAPKey, currencyPurchaseData);
}
inline void GlobalNamespace::IAPManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::IAPManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountData);
}
inline void GlobalNamespace::IAPManager::OnGetViewerPurchasesComplete(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnGetViewerPurchasesComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
/// @param onSuccess: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__IAPManager__OnPurchaseFailure* (default: nullptr)
inline void GlobalNamespace::IAPManager::LaunchPurchase(::StringW IAPKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess,
                                                        ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "LaunchPurchase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, IAPKey, onSuccess, onFailure);
}
/// @param onIndividualSuccess: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* (default: nullptr)
inline void GlobalNamespace::IAPManager::ProcessIAPs(::System::Collections::Generic::List_1<::StringW>* IAPKeys, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onIndividualSuccess) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessIAPs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, IAPKeys, onIndividualSuccess);
}
inline void GlobalNamespace::IAPManager::OnProcessIndividualComplete(::System::Collections::Generic::List_1<::StringW>* IAPKeys,
                                                                     ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onIndividualSuccess) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "OnProcessIndividualComplete", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, IAPKeys, onIndividualSuccess);
}
/// @param onSuccess: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__IAPManager__OnPurchaseFailure* (default: nullptr)
inline void GlobalNamespace::IAPManager::ProcessIAP(::StringW IAPKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess, ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessIAP", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, IAPKey, onSuccess, onFailure);
}
/// @param onSuccess: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__IAPManager__OnPurchaseFailure* (default: nullptr)
inline void GlobalNamespace::IAPManager::ProcessCurrencyIAP(::GlobalNamespace::__IAPManager__CurrencyPurchaseData currencyPurchaseData, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess,
                                                            ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessCurrencyIAP", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__CurrencyPurchaseData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, currencyPurchaseData, onSuccess, onFailure);
}
/// @param onSuccess: ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__IAPManager__OnPurchaseFailure* (default: nullptr)
inline void GlobalNamespace::IAPManager::ProcessBundleIAP(::StringW bundleKey, ::GlobalNamespace::__IAPManager__OnPurchaseSuccess* onSuccess,
                                                          ::GlobalNamespace::__IAPManager__OnPurchaseFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), "ProcessBundleIAP", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IAPManager__OnPurchaseFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bundleKey, onSuccess, onFailure);
}
inline ::GlobalNamespace::IAPManager* GlobalNamespace::IAPManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IAPManager*>());
}
inline void GlobalNamespace::IAPManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAPManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IAPManager::IAPManager() {}
