#pragma once
#include "Amazon/Runtime/zzzz__AWSCredentials_impl.hpp"
#include "Amazon/Runtime/zzzz__BasicAWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::BasicAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::BasicAWSCredentials::*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::BasicAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1fdccfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::BasicAWSCredentials.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::BasicAWSCredentials::*)()>(
    &::Amazon::Runtime::BasicAWSCredentials::GetCredentials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fe7a5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::BasicAWSCredentials.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::BasicAWSCredentials::*)(::System::Object*)>(
    &::Amazon::Runtime::BasicAWSCredentials::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1fe7a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::BasicAWSCredentials.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::BasicAWSCredentials::*)()>(&::Amazon::Runtime::BasicAWSCredentials::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe7bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::ImmutableCredentials*& Amazon::Runtime::BasicAWSCredentials::__cordl_internal_get__credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& Amazon::Runtime::BasicAWSCredentials::__cordl_internal_get__credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr void Amazon::Runtime::BasicAWSCredentials::__cordl_internal_set__credentials(::Amazon::Runtime::ImmutableCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::BasicAWSCredentials* Amazon::Runtime::BasicAWSCredentials::New_ctor(::StringW accessKey, ::StringW secretKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::BasicAWSCredentials*>(accessKey, secretKey));
}
inline void Amazon::Runtime::BasicAWSCredentials::_ctor(::StringW accessKey, ::StringW secretKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessKey, secretKey);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::BasicAWSCredentials::GetCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::BasicAWSCredentials::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Amazon::Runtime::BasicAWSCredentials::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::BasicAWSCredentials*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::BasicAWSCredentials::BasicAWSCredentials() {}
