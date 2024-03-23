#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.get_ThrowOnDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Configuration::ConfigurationElementCollection::*)()>(
    &::System::Configuration::ConfigurationElementCollection::get_ThrowOnDuplicate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16d4898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.CreateNewElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationElement* (::System::Configuration::ConfigurationElementCollection::*)()>(
    &::System::Configuration::ConfigurationElementCollection::CreateNewElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.GetElementKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Configuration::ConfigurationElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::ConfigurationElementCollection::GetElementKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 13));
    return ___internal_method;
  }
};
inline bool System::Configuration::ConfigurationElementCollection::get_ThrowOnDuplicate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElement* System::Configuration::ConfigurationElementCollection::CreateNewElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElement*, false>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::ConfigurationElementCollection::GetElementKey(::System::Configuration::ConfigurationElement* element) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationElementCollection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, element);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationElementCollection::ConfigurationElementCollection() {}
