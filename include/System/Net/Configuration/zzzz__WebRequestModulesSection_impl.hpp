#pragma once
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModulesSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModuleElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(
    &::System::Net::Configuration::WebRequestModulesSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cffc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (
    ::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18cfffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.get_WebRequestModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::WebRequestModuleElementCollection* (
    ::System::Net::Configuration::WebRequestModulesSection::*)()>(&::System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18d0034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                                               "get_WebRequestModules", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.InitializeDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(
    &::System::Net::Configuration::WebRequestModulesSection::InitializeDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18d006c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModulesSection.PostDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::WebRequestModulesSection::*)()>(
    &::System::Net::Configuration::WebRequestModulesSection::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18d00a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 8));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::WebRequestModulesSection* System::Net::Configuration::WebRequestModulesSection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::WebRequestModulesSection*>());
}
inline void System::Net::Configuration::WebRequestModulesSection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::WebRequestModulesSection::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebRequestModuleElementCollection* System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(),
                                                                             "get_WebRequestModules", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::WebRequestModuleElementCollection*, false>(this, ___internal_method);
}
inline void System::Net::Configuration::WebRequestModulesSection::InitializeDefault() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Configuration::WebRequestModulesSection::PostDeserialize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModulesSection*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebRequestModulesSection::WebRequestModulesSection() {}
