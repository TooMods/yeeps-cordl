#pragma once
#include "Amazon/Runtime/zzzz__ImmutableCredentials_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Amazon/Runtime/zzzz__SSOImmutableCredentials_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials.get_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::SSOImmutableCredentials::*)()>(
    &::Amazon::Runtime::SSOImmutableCredentials::get_Expiration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(),
                                                                               "get_Expiration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials.set_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOImmutableCredentials::*)(::System::DateTime)>(
    &::Amazon::Runtime::SSOImmutableCredentials::set_Expiration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), "set_Expiration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOImmutableCredentials::*)(::StringW, ::StringW, ::StringW, ::System::DateTime)>(
    &::Amazon::Runtime::SSOImmutableCredentials::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1ff46e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SSOImmutableCredentials* (::Amazon::Runtime::SSOImmutableCredentials::*)()>(
    &::Amazon::Runtime::SSOImmutableCredentials::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1ff4768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), "Copy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::SSOImmutableCredentials::*)()>(
    &::Amazon::Runtime::SSOImmutableCredentials::GetHashCode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1ff47e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOImmutableCredentials.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::SSOImmutableCredentials::*)(::System::Object*)>(
    &::Amazon::Runtime::SSOImmutableCredentials::Equals)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1ff4938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& Amazon::Runtime::SSOImmutableCredentials::__cordl_internal_get__Expiration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expiration_k__BackingField;
}
constexpr ::System::DateTime const& Amazon::Runtime::SSOImmutableCredentials::__cordl_internal_get__Expiration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expiration_k__BackingField;
}
constexpr void Amazon::Runtime::SSOImmutableCredentials::__cordl_internal_set__Expiration_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Expiration_k__BackingField = value;
}
inline ::System::DateTime Amazon::Runtime::SSOImmutableCredentials::get_Expiration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(),
                                                                             "get_Expiration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SSOImmutableCredentials::set_Expiration(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), "set_Expiration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::SSOImmutableCredentials* Amazon::Runtime::SSOImmutableCredentials::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token,
                                                                                                      ::System::DateTime expiration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::SSOImmutableCredentials*>(awsAccessKeyId, awsSecretAccessKey, token, expiration));
}
inline void Amazon::Runtime::SSOImmutableCredentials::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token, ::System::DateTime expiration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, token, expiration);
}
inline ::Amazon::Runtime::SSOImmutableCredentials* Amazon::Runtime::SSOImmutableCredentials::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), "Copy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SSOImmutableCredentials*, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::SSOImmutableCredentials::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::SSOImmutableCredentials::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOImmutableCredentials*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SSOImmutableCredentials::SSOImmutableCredentials() {}
