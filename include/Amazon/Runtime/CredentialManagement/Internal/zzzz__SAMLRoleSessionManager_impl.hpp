#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__SAMLRoleSessionManager_def.hpp"
#include "Amazon/Runtime/zzzz__SAMLImmutableCredentials_def.hpp"
#include "Amazon/Util/Internal/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager.get_IsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::get_IsAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2033800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(),
                                                 "get_IsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::*)()>(
    &::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2033808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::*)()>(
    &::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::Clear)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x203388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager.TryGetRoleSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::*)(
    ::StringW, ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>)>(&::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::TryGetRoleSession)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x20339e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "TryGetRoleSession",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager.RegisterRoleSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::*)(
    ::StringW, ::Amazon::Runtime::SAMLImmutableCredentials*)>(&::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::RegisterRoleSession)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2033c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(),
                                                 "RegisterRoleSession", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SAMLImmutableCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager.UnregisterRoleSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::UnregisterRoleSession)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2033ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "UnregisterRoleSession",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::SettingsManager*& Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::__cordl_internal_get_settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::SettingsManager*> const&
Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::__cordl_internal_get_settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsManager;
}
constexpr void Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::__cordl_internal_set_settingsManager(::Amazon::Util::Internal::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::get_IsAvailable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(),
                                               "get_IsAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>());
}
inline void Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::TryGetRoleSession(::StringW roleSessionName, ByRef<::Amazon::Runtime::SAMLImmutableCredentials*> credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "TryGetRoleSession",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::SAMLImmutableCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, roleSessionName, credentials);
}
inline void Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::RegisterRoleSession(::StringW roleSessionName, ::Amazon::Runtime::SAMLImmutableCredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(),
                                               "RegisterRoleSession", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SAMLImmutableCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roleSessionName, credentials);
}
inline void Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::UnregisterRoleSession(::StringW roleSessionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*>::get(), "UnregisterRoleSession",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roleSessionName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager::SAMLRoleSessionManager() {}
