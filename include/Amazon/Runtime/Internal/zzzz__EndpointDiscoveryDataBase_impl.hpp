#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryDataBase_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::*)(bool)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23d6874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase.get_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::*)()>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::get_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase.set_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::*)(bool)>(
    &::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::set_Required)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d690c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase.get_Identifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* (
    ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::*)()>(&::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::get_Identifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase.set_Identifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::*)(
    ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::set_Identifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 7));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_get__required() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____required;
}
constexpr bool const& Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_get__required() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____required;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_set__required(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____required = value;
}
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_get__identifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifiers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_get__identifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifiers;
}
constexpr void Amazon::Runtime::Internal::EndpointDiscoveryDataBase::__cordl_internal_set__identifiers(::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* Amazon::Runtime::Internal::EndpointDiscoveryDataBase::New_ctor(bool required) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>(required));
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryDataBase::_ctor(bool required) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, required);
}
inline bool Amazon::Runtime::Internal::EndpointDiscoveryDataBase::get_Required() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryDataBase::set_Required(bool value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* Amazon::Runtime::Internal::EndpointDiscoveryDataBase::get_Identifiers() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::EndpointDiscoveryDataBase::set_Identifiers(::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase::EndpointDiscoveryDataBase() {}
