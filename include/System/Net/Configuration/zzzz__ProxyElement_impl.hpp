#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::__ProxyElement__AutoDetectValues::__ProxyElement__AutoDetectValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::__ProxyElement__AutoDetectValues::__ProxyElement__AutoDetectValues() {}
constexpr ::System::Net::Configuration::__ProxyElement__AutoDetectValues System::Net::Configuration::__ProxyElement__AutoDetectValues::False{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Configuration::__ProxyElement__AutoDetectValues System::Net::Configuration::__ProxyElement__AutoDetectValues::True{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Configuration::__ProxyElement__AutoDetectValues System::Net::Configuration::__ProxyElement__AutoDetectValues::Unspecified{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues::__ProxyElement__BypassOnLocalValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues::__ProxyElement__BypassOnLocalValues() {}
constexpr ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues System::Net::Configuration::__ProxyElement__BypassOnLocalValues::False{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues System::Net::Configuration::__ProxyElement__BypassOnLocalValues::True{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues System::Net::Configuration::__ProxyElement__BypassOnLocalValues::Unspecified{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues::__ProxyElement__UseSystemDefaultValues(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues::__ProxyElement__UseSystemDefaultValues() {}
constexpr ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues System::Net::Configuration::__ProxyElement__UseSystemDefaultValues::False{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues System::Net::Configuration::__ProxyElement__UseSystemDefaultValues::True{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues System::Net::Configuration::__ProxyElement__UseSystemDefaultValues::Unspecified{ static_cast<int32_t>(0xffffffff) };
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cd9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_AutoDetect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::__ProxyElement__AutoDetectValues (::System::Net::Configuration::ProxyElement::*)()>(
    &::System::Net::Configuration::ProxyElement::get_AutoDetect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cda24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                               "get_AutoDetect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_AutoDetect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::System::Net::Configuration::__ProxyElement__AutoDetectValues)>(
    &::System::Net::Configuration::ProxyElement::set_AutoDetect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cda5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_AutoDetect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__AutoDetectValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_BypassOnLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::__ProxyElement__BypassOnLocalValues (::System::Net::Configuration::ProxyElement::*)()>(
    &::System::Net::Configuration::ProxyElement::get_BypassOnLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cda94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                               "get_BypassOnLocal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_BypassOnLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(
    ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues)>(&::System::Net::Configuration::ProxyElement::set_BypassOnLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_BypassOnLocal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__BypassOnLocalValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::ProxyElement::*)()>(
    &::System::Net::Configuration::ProxyElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdb04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_ProxyAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::Configuration::ProxyElement::*)()>(
    &::System::Net::Configuration::ProxyElement::get_ProxyAddress)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                               "get_ProxyAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_ProxyAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::System::Uri*)>(
    &::System::Net::Configuration::ProxyElement::set_ProxyAddress)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_ProxyAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_ScriptLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::Configuration::ProxyElement::*)()>(
    &::System::Net::Configuration::ProxyElement::get_ScriptLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                               "get_ScriptLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_ScriptLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(::System::Uri*)>(
    &::System::Net::Configuration::ProxyElement::set_ScriptLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_ScriptLocation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.get_UseSystemDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues (
    ::System::Net::Configuration::ProxyElement::*)()>(&::System::Net::Configuration::ProxyElement::get_UseSystemDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                               "get_UseSystemDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ProxyElement.set_UseSystemDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ProxyElement::*)(
    ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues)>(&::System::Net::Configuration::ProxyElement::set_UseSystemDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cdc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_UseSystemDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues>::get() })));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::ProxyElement* System::Net::Configuration::ProxyElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::ProxyElement*>());
}
inline void System::Net::Configuration::ProxyElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::__ProxyElement__AutoDetectValues System::Net::Configuration::ProxyElement::get_AutoDetect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                             "get_AutoDetect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::__ProxyElement__AutoDetectValues, false>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_AutoDetect(::System::Net::Configuration::__ProxyElement__AutoDetectValues value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_AutoDetect", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__AutoDetectValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues System::Net::Configuration::ProxyElement::get_BypassOnLocal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                             "get_BypassOnLocal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::__ProxyElement__BypassOnLocalValues, false>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_BypassOnLocal(::System::Net::Configuration::__ProxyElement__BypassOnLocalValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_BypassOnLocal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__BypassOnLocalValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ProxyElement::get_Properties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::Configuration::ProxyElement::get_ProxyAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                             "get_ProxyAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_ProxyAddress(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_ProxyAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::Configuration::ProxyElement::get_ScriptLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                             "get_ScriptLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_ScriptLocation(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_ScriptLocation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues System::Net::Configuration::ProxyElement::get_UseSystemDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(),
                                                                             "get_UseSystemDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues, false>(this, ___internal_method);
}
inline void System::Net::Configuration::ProxyElement::set_UseSystemDefault(::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ProxyElement*>::get(), "set_UseSystemDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ProxyElement::ProxyElement() {}
