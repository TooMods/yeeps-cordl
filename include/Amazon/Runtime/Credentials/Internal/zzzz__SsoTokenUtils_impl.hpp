#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Credentials/Internal/zzzz__SsoTokenUtils_def.hpp"
#include "Amazon/Runtime/Credentials/Internal/zzzz__SsoTokenUtils_def.hpp"
#include "Amazon/Runtime/Credentials/Internal/zzzz__SsoToken_def.hpp"
// Ctor Parameters []
constexpr ::Amazon::Runtime::Credentials::Internal::__SsoTokenUtils__JsonPropertyNames::__SsoTokenUtils__JsonPropertyNames() {}
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenUtils.IsExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Credentials::Internal::SsoToken*)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenUtils::IsExpired)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2026c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "IsExpired", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenUtils.AsJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Credentials::Internal::SsoToken*)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenUtils::AsJson)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20274ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "AsJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenUtils.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Credentials::Internal::SsoToken*)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenUtils::ToJson)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2026f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Credentials::Internal::SsoTokenUtils.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Credentials::Internal::SsoToken* (*)(::StringW)>(
    &::Amazon::Runtime::Credentials::Internal::SsoTokenUtils::FromJson)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x20271c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "FromJson",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool Amazon::Runtime::Credentials::Internal::SsoTokenUtils::IsExpired(::Amazon::Runtime::Credentials::Internal::SsoToken* token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "IsExpired", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenUtils::AsJson(::Amazon::Runtime::Credentials::Internal::SsoToken* token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "AsJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, token);
}
inline ::StringW Amazon::Runtime::Credentials::Internal::SsoTokenUtils::ToJson(::Amazon::Runtime::Credentials::Internal::SsoToken* token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "ToJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Credentials::Internal::SsoToken*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, token);
}
inline ::Amazon::Runtime::Credentials::Internal::SsoToken* Amazon::Runtime::Credentials::Internal::SsoTokenUtils::FromJson(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Credentials::Internal::SsoTokenUtils*>::get(), "FromJson",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Credentials::Internal::SsoToken*, false>(nullptr, ___internal_method, json);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Credentials::Internal::SsoTokenUtils::SsoTokenUtils() {}
