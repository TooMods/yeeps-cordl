#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Resource_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Resource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Resource::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Resource::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25ebd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Resource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Resource.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Auth::AccessControlPolicy::Resource::*)()>(
    &::Amazon::Auth::AccessControlPolicy::Resource::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ebd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Resource*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Auth::AccessControlPolicy::Resource::__cordl_internal_get_resource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resource;
}
constexpr ::StringW const& Amazon::Auth::AccessControlPolicy::Resource::__cordl_internal_get_resource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resource;
}
constexpr void Amazon::Auth::AccessControlPolicy::Resource::__cordl_internal_set_resource(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Auth::AccessControlPolicy::Resource* Amazon::Auth::AccessControlPolicy::Resource::New_ctor(::StringW resource) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::Resource*>(resource));
}
inline void Amazon::Auth::AccessControlPolicy::Resource::_ctor(::StringW resource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Resource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::Resource::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Resource*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::Resource::Resource() {}
