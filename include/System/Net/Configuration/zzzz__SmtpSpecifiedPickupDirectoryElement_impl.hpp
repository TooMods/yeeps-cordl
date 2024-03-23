#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__SmtpSpecifiedPickupDirectoryElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(
    &::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18ced2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.get_PickupDirectoryLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(
    &::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_PickupDirectoryLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18ced64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(),
                                                 "get_PickupDirectoryLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.set_PickupDirectoryLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)(::StringW)>(
    &::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::set_PickupDirectoryLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18ced9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), "set_PickupDirectoryLocation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (
    ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(&::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cedd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>());
}
inline void System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_PickupDirectoryLocation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(),
                                               "get_PickupDirectoryLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::set_PickupDirectoryLocation(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), "set_PickupDirectoryLocation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::SmtpSpecifiedPickupDirectoryElement() {}
