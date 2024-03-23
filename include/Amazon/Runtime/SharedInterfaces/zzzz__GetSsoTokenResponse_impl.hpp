#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GetSsoTokenResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse.get_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::get_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20214fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                               "get_AccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse.set_AccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::*)(::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::set_AccessToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2021504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(), "set_AccessToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse.get_ExpiresAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::get_ExpiresAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202150c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                               "get_ExpiresAt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse.set_ExpiresAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::*)(::System::DateTime)>(
    &::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::set_ExpiresAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2021514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(), "set_ExpiresAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_get__AccessToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_get__AccessToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccessToken_k__BackingField;
}
constexpr void Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_set__AccessToken_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AccessToken_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_get__ExpiresAt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpiresAt_k__BackingField;
}
constexpr ::System::DateTime const& Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_get__ExpiresAt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpiresAt_k__BackingField;
}
constexpr void Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::__cordl_internal_set__ExpiresAt_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExpiresAt_k__BackingField = value;
}
inline ::StringW Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::get_AccessToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                             "get_AccessToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::set_AccessToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(), "set_AccessToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::DateTime Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::get_ExpiresAt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                             "get_ExpiresAt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::set_ExpiresAt(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(), "set_ExpiresAt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse* Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>());
}
inline void Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse::GetSsoTokenResponse() {}
