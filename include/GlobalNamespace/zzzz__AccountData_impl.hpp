#pragma once
#include "GlobalNamespace/zzzz__AccountData_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AccountData__BanType::__AccountData__BanType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__BanType::__AccountData__BanType() {}
constexpr ::GlobalNamespace::__AccountData__BanType GlobalNamespace::__AccountData__BanType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AccountData__BanType GlobalNamespace::__AccountData__BanType::Temporary{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__AccountData__BanType GlobalNamespace::__AccountData__BanType::Permanent{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__AccountData__BanType GlobalNamespace::__AccountData__BanType::Warning{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnCurrencyUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnCurrencyUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnCurrencyUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e0bb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnCurrencyUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnCurrencyUpdated::*)(int32_t, bool)>(
    &::GlobalNamespace::__AccountData__OnCurrencyUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e0bc10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnCurrencyUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__AccountData__OnCurrencyUpdated::*)(int32_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__AccountData__OnCurrencyUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e0bc28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnCurrencyUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnCurrencyUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnCurrencyUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0bce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnCurrencyUpdated* GlobalNamespace::__AccountData__OnCurrencyUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnCurrencyUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnCurrencyUpdated::Invoke(int32_t newCurrency, bool isDeduction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCurrency, isDeduction);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnCurrencyUpdated::BeginInvoke(int32_t newCurrency, bool isDeduction, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newCurrency, isDeduction, callback, object);
}
inline void GlobalNamespace::__AccountData__OnCurrencyUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnCurrencyUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnCurrencyUpdated::__AccountData__OnCurrencyUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnFocusCurrency._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnFocusCurrency::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnFocusCurrency::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e0bcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnFocusCurrency.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnFocusCurrency::*)()>(
    &::GlobalNamespace::__AccountData__OnFocusCurrency::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e0bdac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnFocusCurrency.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__AccountData__OnFocusCurrency::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__AccountData__OnFocusCurrency::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e0bdc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnFocusCurrency.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnFocusCurrency::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnFocusCurrency::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0bde0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnFocusCurrency* GlobalNamespace::__AccountData__OnFocusCurrency::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnFocusCurrency*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnFocusCurrency::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnFocusCurrency::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnFocusCurrency::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__AccountData__OnFocusCurrency::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnFocusCurrency*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnFocusCurrency::__AccountData__OnFocusCurrency() {}
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e0bdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e0bf18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e0bf2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0bf4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* GlobalNamespace::__AccountData__OnOwnedItemsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnOwnedItemsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnOwnedItemsUpdated::Invoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newOwnedItemKeys);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnOwnedItemsUpdated::BeginInvoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newOwnedItemKeys, callback, object);
}
inline void GlobalNamespace::__AccountData__OnOwnedItemsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated::__AccountData__OnOwnedItemsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2e0bf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e0c088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e0c09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0c0c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::Invoke(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                                                             ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActiveCosmeticKeys, removedConflictingCosmeticKeys);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::BeginInvoke(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                                                                                     ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newActiveCosmeticKeys, removedConflictingCosmeticKeys, callback, object);
}
inline void GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated::__AccountData__OnActiveCosmeticsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e0c0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::*)(bool)>(
    &::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e0c194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e0c1ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0c234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::Invoke(bool newHasUnlockedPrivateRooms) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasUnlockedPrivateRooms);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::BeginInvoke(bool newHasUnlockedPrivateRooms, ::System::AsyncCallback* callback,
                                                                                                             ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newHasUnlockedPrivateRooms, callback, object);
}
inline void GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated::__AccountData__OnHasUnlockedPrivateRoomsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e0c240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::*)(bool)>(
    &::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e0c304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e0c31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0c3a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>(object, method));
}
inline void GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::Invoke(bool newHasCreatorPack) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasCreatorPack);
}
inline ::System::IAsyncResult* GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::BeginInvoke(bool newHasCreatorPack, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newHasCreatorPack, callback, object);
}
inline void GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated::__AccountData__OnHasCreatorPackUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::AccountData.get_isIsolated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::get_isIsolated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0960c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "get_isIsolated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.set_isIsolated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(bool)>(&::GlobalNamespace::AccountData::set_isIsolated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e09614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "set_isIsolated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::StringW, int32_t, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*,
    ::System::Collections::Generic::List_1<::StringW>*, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*, ::System::Collections::Generic::List_1<::StringW>*,
    bool, bool, bool, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*, ::System::DateTime, ::GlobalNamespace::__AccountData__BanType, int32_t,
    ::StringW, ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*)>(&::GlobalNamespace::AccountData::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2e09620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__BanType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetAvatarIdentityData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(ByRef<::UnityEngine::Color>, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::AccountData::GetAvatarIdentityData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e0980c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetAvatarIdentityData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e09820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetDisplayName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.TryDeductCurrencyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(int32_t)>(&::GlobalNamespace::AccountData::TryDeductCurrencyLocally)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e07598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "TryDeductCurrencyLocally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddCurrencyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(int32_t)>(&::GlobalNamespace::AccountData::AddCurrencyLocally)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0997c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddCurrencyLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.ResetCurrencyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(int32_t)>(&::GlobalNamespace::AccountData::ResetCurrencyLocally)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e09988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ResetCurrencyLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SetCurrencyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(int32_t)>(&::GlobalNamespace::AccountData::SetCurrencyLocally)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2e09828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetCurrencyLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetCurrency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetCurrency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0998c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetCurrency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.FocusCurrency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::FocusCurrency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2e09994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "FocusCurrency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetOwnedItemKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::AccountData::*)()>(
    &::GlobalNamespace::AccountData::GetOwnedItemKeys)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e09a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetOwnedItemKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddItemLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::AddItemLocally)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2e09ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddItemLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddItemsLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AccountData::AddItemsLocally)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2e09c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddItemsLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.ManualSetOwnedItemKeysLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AccountData::ManualSetOwnedItemKeysLocally)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2e09f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ManualSetOwnedItemKeysLocally", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.RemoveOwnedItemLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::RemoveOwnedItemLocally)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e0a17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "RemoveOwnedItemLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetActiveCosmeticKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::AccountData::*)()>(
    &::GlobalNamespace::AccountData::GetActiveCosmeticKeys)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e0a29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetActiveCosmeticKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.EquipCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::EquipCosmetic)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2e0a31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "EquipCosmetic", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.EquipCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AccountData::EquipCosmetics)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2e0a5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "EquipCosmetics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.UnequipCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::UnequipCosmetic)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2e0a988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "UnequipCosmetic", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.UnequipCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AccountData::UnequipCosmetics)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2e0aa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "UnequipCosmetics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.HasOwnedBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::HasOwnedBundle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e0ac58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasOwnedBundle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddBundleKeyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::AddBundleKeyLocally)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e0acb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddBundleKeyLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetMobileCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetMobileCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetMobileCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SetMobileCodeLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::SetMobileCodeLocally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0addc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetMobileCodeLocally", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetLastRedeemedChallengeTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::AccountData::*)(::StringW)>(
    &::GlobalNamespace::AccountData::GetLastRedeemedChallengeTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e0ade4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetLastRedeemedChallengeTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.MarkChallengeAsRedeemedLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::StringW)>(
    &::GlobalNamespace::AccountData::MarkChallengeAsRedeemedLocally)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2e0ae8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "MarkChallengeAsRedeemedLocally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetRedeemedCurrencyStashIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::AccountData::*)()>(
    &::GlobalNamespace::AccountData::GetRedeemedCurrencyStashIDs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e0afbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(),
                                                                               "GetRedeemedCurrencyStashIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.HasRedeemedStash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::HasRedeemedStash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e0b03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasRedeemedStash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddRedeemedCurrencyStashIDLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::StringW)>(
    &::GlobalNamespace::AccountData::AddRedeemedCurrencyStashIDLocally)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e0b09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddRedeemedCurrencyStashIDLocally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetHasUnlockedPrivateRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetHasUnlockedPrivateRooms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0b1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(),
                                                                               "GetHasUnlockedPrivateRooms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SetHasUnlockedPrivateRoomsLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(bool)>(&::GlobalNamespace::AccountData::SetHasUnlockedPrivateRoomsLocally)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e0b1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetHasUnlockedPrivateRoomsLocally",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetHasCreatorPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetHasCreatorPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0b2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetHasCreatorPack",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SetHasCreatorPackLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(bool)>(&::GlobalNamespace::AccountData::SetHasCreatorPackLocally)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e075c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetHasCreatorPackLocally",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetRoleKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::AccountData::*)()>(
    &::GlobalNamespace::AccountData::GetRoleKeys)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e0b2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetRoleKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SaveStringListToPlayerPrefs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::AccountData::SaveStringListToPlayerPrefs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2e0b344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SaveStringListToPlayerPrefs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.TryLoadStringListFromPlayerPrefs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::GlobalNamespace::AccountData::TryLoadStringListFromPlayerPrefs)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e0b4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "TryLoadStringListFromPlayerPrefs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetIsBanned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetIsBanned)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e0b594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetIsBanned",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetIsWarned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetIsWarned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e0b5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetIsWarned",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetBanReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetBanReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0b5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetBanReason",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetBanMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetBanMessage)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2e0b5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetBanMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.SetBanLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::GlobalNamespace::__AccountData__BanType, int32_t, ::StringW)>(
    &::GlobalNamespace::AccountData::SetBanLocally)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0b9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetBanLocally", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__BanType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.ClearWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::ClearWarning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e0b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ClearWarning",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.HasAnalyticEventKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::HasAnalyticEventKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e0b9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasAnalyticEventKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.AddAnalyticEventKeyLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AccountData::*)(::StringW)>(&::GlobalNamespace::AccountData::AddAnalyticEventKeyLocally)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e0ba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddAnalyticEventKeyLocally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AccountData.GetAccountCreatedDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::AccountData::*)()>(&::GlobalNamespace::AccountData::GetAccountCreatedDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0bb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetAccountCreatedDate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::AccountData::__cordl_internal_get_avatarSkinColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarSkinColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AccountData::__cordl_internal_get_avatarSkinColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarSkinColor;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_avatarSkinColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarSkinColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AccountData::__cordl_internal_get_avatarEyeColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEyeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AccountData::__cordl_internal_get_avatarEyeColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEyeColor;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_avatarEyeColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarEyeColor = value;
}
constexpr ::StringW& GlobalNamespace::AccountData::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::AccountData::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::AccountData::__cordl_internal_get_currency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr int32_t const& GlobalNamespace::AccountData::__cordl_internal_get_currency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currency;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_currency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currency = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_ownedItemKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedItemKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_ownedItemKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedItemKeys;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_ownedItemKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownedItemKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_activeCosmeticKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeCosmeticKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_activeCosmeticKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeCosmeticKeys;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_activeCosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeCosmeticKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_ownedBundleKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedBundleKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_ownedBundleKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedBundleKeys;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_ownedBundleKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownedBundleKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::AccountData::__cordl_internal_get_mobileCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileCode;
}
constexpr ::StringW const& GlobalNamespace::AccountData::__cordl_internal_get_mobileCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileCode;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_mobileCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*& GlobalNamespace::AccountData::__cordl_internal_get_lastRedeemedChallengeTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRedeemedChallengeTimes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*> const&
GlobalNamespace::AccountData::__cordl_internal_get_lastRedeemedChallengeTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRedeemedChallengeTimes;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_lastRedeemedChallengeTimes(::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastRedeemedChallengeTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_redeemedCurrencyStashIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemedCurrencyStashIDs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_redeemedCurrencyStashIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redeemedCurrencyStashIDs;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_redeemedCurrencyStashIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redeemedCurrencyStashIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AccountData::__cordl_internal_get_hasUnlockedPrivateRooms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasUnlockedPrivateRooms;
}
constexpr bool const& GlobalNamespace::AccountData::__cordl_internal_get_hasUnlockedPrivateRooms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasUnlockedPrivateRooms;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_hasUnlockedPrivateRooms(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasUnlockedPrivateRooms = value;
}
constexpr bool& GlobalNamespace::AccountData::__cordl_internal_get_hasCreatorPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCreatorPack;
}
constexpr bool const& GlobalNamespace::AccountData::__cordl_internal_get_hasCreatorPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCreatorPack;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_hasCreatorPack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasCreatorPack = value;
}
constexpr bool& GlobalNamespace::AccountData::__cordl_internal_get__isIsolated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isIsolated_k__BackingField;
}
constexpr bool const& GlobalNamespace::AccountData::__cordl_internal_get__isIsolated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isIsolated_k__BackingField;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set__isIsolated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isIsolated_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_roleKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_roleKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roleKeys;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_roleKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roleKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AccountData::__cordl_internal_get_analyticEventKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analyticEventKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::AccountData::__cordl_internal_get_analyticEventKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analyticEventKeys;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_analyticEventKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___analyticEventKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& GlobalNamespace::AccountData::__cordl_internal_get_accountCreatedDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountCreatedDate;
}
constexpr ::System::DateTime const& GlobalNamespace::AccountData::__cordl_internal_get_accountCreatedDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accountCreatedDate;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_accountCreatedDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accountCreatedDate = value;
}
constexpr ::GlobalNamespace::__AccountData__BanType& GlobalNamespace::AccountData::__cordl_internal_get_banType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banType;
}
constexpr ::GlobalNamespace::__AccountData__BanType const& GlobalNamespace::AccountData::__cordl_internal_get_banType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banType;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_banType(::GlobalNamespace::__AccountData__BanType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___banType = value;
}
constexpr int32_t& GlobalNamespace::AccountData::__cordl_internal_get_banLengthHours() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banLengthHours;
}
constexpr int32_t const& GlobalNamespace::AccountData::__cordl_internal_get_banLengthHours() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banLengthHours;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_banLengthHours(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___banLengthHours = value;
}
constexpr ::StringW& GlobalNamespace::AccountData::__cordl_internal_get_banReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banReason;
}
constexpr ::StringW const& GlobalNamespace::AccountData::__cordl_internal_get_banReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banReason;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_banReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___banReason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnCurrencyUpdated*& GlobalNamespace::AccountData::__cordl_internal_get_onCurrencyUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCurrencyUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnCurrencyUpdated*> const& GlobalNamespace::AccountData::__cordl_internal_get_onCurrencyUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCurrencyUpdatedCallbacks;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onCurrencyUpdatedCallbacks(::GlobalNamespace::__AccountData__OnCurrencyUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onCurrencyUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnFocusCurrency*& GlobalNamespace::AccountData::__cordl_internal_get_onFocusCurrencyCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFocusCurrencyCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnFocusCurrency*> const& GlobalNamespace::AccountData::__cordl_internal_get_onFocusCurrencyCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFocusCurrencyCallbacks;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onFocusCurrencyCallbacks(::GlobalNamespace::__AccountData__OnFocusCurrency* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFocusCurrencyCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*& GlobalNamespace::AccountData::__cordl_internal_get_onOwnedItemKeysUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOwnedItemKeysUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*> const&
GlobalNamespace::AccountData::__cordl_internal_get_onOwnedItemKeysUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onOwnedItemKeysUpdatedCallbacks;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onOwnedItemKeysUpdatedCallbacks(::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onOwnedItemKeysUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*& GlobalNamespace::AccountData::__cordl_internal_get_onActiveCosmeticsUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActiveCosmeticsUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*> const&
GlobalNamespace::AccountData::__cordl_internal_get_onActiveCosmeticsUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onActiveCosmeticsUpdatedCallbacks;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onActiveCosmeticsUpdatedCallbacks(::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onActiveCosmeticsUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*& GlobalNamespace::AccountData::__cordl_internal_get_onHasUnlockedPrivateRoomsUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasUnlockedPrivateRoomsUpdated;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*> const&
GlobalNamespace::AccountData::__cordl_internal_get_onHasUnlockedPrivateRoomsUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasUnlockedPrivateRoomsUpdated;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onHasUnlockedPrivateRoomsUpdated(::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onHasUnlockedPrivateRoomsUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*& GlobalNamespace::AccountData::__cordl_internal_get_onHasCreatorPackUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasCreatorPackUpdated;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*> const& GlobalNamespace::AccountData::__cordl_internal_get_onHasCreatorPackUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHasCreatorPackUpdated;
}
constexpr void GlobalNamespace::AccountData::__cordl_internal_set_onHasCreatorPackUpdated(::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onHasCreatorPackUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::AccountData::get_isIsolated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "get_isIsolated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::set_isIsolated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "set_isIsolated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AccountData* GlobalNamespace::AccountData::New_ctor(
    ::UnityEngine::Color avatarSkinColor, ::UnityEngine::Color avatarEyeColor, ::StringW displayName, int32_t currency, ::System::Collections::Generic::List_1<::StringW>* ownedItemKeys,
    ::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys, ::System::Collections::Generic::List_1<::StringW>* ownedBundleKeys, ::StringW mobileCode,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* lastRedeemedChallengeTimes, ::System::Collections::Generic::List_1<::StringW>* redeemedCurrencyStashIDs,
    bool hasUnlockedPrivateRooms, bool hasCreatorPack, bool isIsolated, ::System::Collections::Generic::List_1<::StringW>* roleKeys,
    ::System::Collections::Generic::List_1<::StringW>* analyticEventKeys, ::System::DateTime accountCreatedDate, ::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthSeconds,
    ::StringW banReason, ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* onCosmeticsUpdatedCallback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AccountData*>(
      avatarSkinColor, avatarEyeColor, displayName, currency, ownedItemKeys, activeCosmeticKeys, ownedBundleKeys, mobileCode, lastRedeemedChallengeTimes, redeemedCurrencyStashIDs,
      hasUnlockedPrivateRooms, hasCreatorPack, isIsolated, roleKeys, analyticEventKeys, accountCreatedDate, banType, banLengthSeconds, banReason, onCosmeticsUpdatedCallback));
}
inline void GlobalNamespace::AccountData::_ctor(::UnityEngine::Color avatarSkinColor, ::UnityEngine::Color avatarEyeColor, ::StringW displayName, int32_t currency,
                                                ::System::Collections::Generic::List_1<::StringW>* ownedItemKeys, ::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys,
                                                ::System::Collections::Generic::List_1<::StringW>* ownedBundleKeys, ::StringW mobileCode,
                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* lastRedeemedChallengeTimes,
                                                ::System::Collections::Generic::List_1<::StringW>* redeemedCurrencyStashIDs, bool hasUnlockedPrivateRooms, bool hasCreatorPack, bool isIsolated,
                                                ::System::Collections::Generic::List_1<::StringW>* roleKeys, ::System::Collections::Generic::List_1<::StringW>* analyticEventKeys,
                                                ::System::DateTime accountCreatedDate, ::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthSeconds, ::StringW banReason,
                                                ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* onCosmeticsUpdatedCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__BanType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSkinColor, avatarEyeColor, displayName, currency, ownedItemKeys, activeCosmeticKeys, ownedBundleKeys,
                                                          mobileCode, lastRedeemedChallengeTimes, redeemedCurrencyStashIDs, hasUnlockedPrivateRooms, hasCreatorPack, isIsolated, roleKeys,
                                                          analyticEventKeys, accountCreatedDate, banType, banLengthSeconds, banReason, onCosmeticsUpdatedCallback);
}
inline void GlobalNamespace::AccountData::GetAvatarIdentityData(ByRef<::UnityEngine::Color> skinColor, ByRef<::UnityEngine::Color> eyeColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetAvatarIdentityData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skinColor, eyeColor);
}
inline ::StringW GlobalNamespace::AccountData::GetDisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetDisplayName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::TryDeductCurrencyLocally(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "TryDeductCurrencyLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, count);
}
inline void GlobalNamespace::AccountData::AddCurrencyLocally(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddCurrencyLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void GlobalNamespace::AccountData::ResetCurrencyLocally(int32_t newAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ResetCurrencyLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAmount);
}
inline void GlobalNamespace::AccountData::SetCurrencyLocally(int32_t currency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetCurrencyLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currency);
}
inline int32_t GlobalNamespace::AccountData::GetCurrency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetCurrency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::FocusCurrency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "FocusCurrency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AccountData::GetOwnedItemKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetOwnedItemKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::AddItemLocally(::StringW itemKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddItemLocally", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemKey);
}
inline bool GlobalNamespace::AccountData::AddItemsLocally(::System::Collections::Generic::List_1<::StringW>* itemKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddItemsLocally", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemKeys);
}
inline bool GlobalNamespace::AccountData::ManualSetOwnedItemKeysLocally(::System::Collections::Generic::List_1<::StringW>* newItemKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ManualSetOwnedItemKeysLocally", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, newItemKeys);
}
inline bool GlobalNamespace::AccountData::RemoveOwnedItemLocally(::StringW itemKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "RemoveOwnedItemLocally", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemKey);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AccountData::GetActiveCosmeticKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetActiveCosmeticKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::EquipCosmetic(::StringW cosmeticKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "EquipCosmetic", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticKey);
}
inline bool GlobalNamespace::AccountData::EquipCosmetics(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "EquipCosmetics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticKeys);
}
inline bool GlobalNamespace::AccountData::UnequipCosmetic(::StringW cosmeticKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "UnequipCosmetic", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticKey);
}
inline bool GlobalNamespace::AccountData::UnequipCosmetics(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "UnequipCosmetics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticKeys);
}
inline bool GlobalNamespace::AccountData::HasOwnedBundle(::StringW bundleKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasOwnedBundle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bundleKey);
}
inline void GlobalNamespace::AccountData::AddBundleKeyLocally(::StringW bundleKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddBundleKeyLocally", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundleKey);
}
inline ::StringW GlobalNamespace::AccountData::GetMobileCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetMobileCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::SetMobileCodeLocally(::StringW newCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetMobileCodeLocally", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCode);
}
inline ::System::DateTime GlobalNamespace::AccountData::GetLastRedeemedChallengeTime(::StringW poolKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetLastRedeemedChallengeTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, poolKey);
}
inline void GlobalNamespace::AccountData::MarkChallengeAsRedeemedLocally(::StringW poolKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "MarkChallengeAsRedeemedLocally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poolKey);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AccountData::GetRedeemedCurrencyStashIDs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(),
                                                                             "GetRedeemedCurrencyStashIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::HasRedeemedStash(::StringW currencyStashID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasRedeemedStash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currencyStashID);
}
inline void GlobalNamespace::AccountData::AddRedeemedCurrencyStashIDLocally(::StringW currencyStashID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddRedeemedCurrencyStashIDLocally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currencyStashID);
}
inline bool GlobalNamespace::AccountData::GetHasUnlockedPrivateRooms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(),
                                                                             "GetHasUnlockedPrivateRooms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::SetHasUnlockedPrivateRoomsLocally(bool newHasUnlockedPrivateRooms) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetHasUnlockedPrivateRoomsLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasUnlockedPrivateRooms);
}
inline bool GlobalNamespace::AccountData::GetHasCreatorPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetHasCreatorPack",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::SetHasCreatorPackLocally(bool newHasCreatorPack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetHasCreatorPackLocally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasCreatorPack);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AccountData::GetRoleKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetRoleKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::SaveStringListToPlayerPrefs(::StringW playerPrefKey, ::System::Collections::Generic::List_1<::StringW>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SaveStringListToPlayerPrefs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerPrefKey, list);
}
inline bool GlobalNamespace::AccountData::TryLoadStringListFromPlayerPrefs(::StringW playerPrefKey, ByRef<::System::Collections::Generic::List_1<::StringW>*> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "TryLoadStringListFromPlayerPrefs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, playerPrefKey, list);
}
inline bool GlobalNamespace::AccountData::GetIsBanned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetIsBanned",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::GetIsWarned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetIsWarned",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AccountData::GetBanReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetBanReason",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AccountData::GetBanMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetBanMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::AccountData::SetBanLocally(::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthHours, ::StringW banMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "SetBanLocally", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AccountData__BanType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, banType, banLengthHours, banMessage);
}
inline void GlobalNamespace::AccountData::ClearWarning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "ClearWarning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AccountData::HasAnalyticEventKey(::StringW analyticEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "HasAnalyticEventKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, analyticEvent);
}
inline void GlobalNamespace::AccountData::AddAnalyticEventKeyLocally(::StringW analyticEventKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "AddAnalyticEventKeyLocally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticEventKey);
}
inline ::System::DateTime GlobalNamespace::AccountData::GetAccountCreatedDate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AccountData*>::get(), "GetAccountCreatedDate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AccountData::AccountData() {}
