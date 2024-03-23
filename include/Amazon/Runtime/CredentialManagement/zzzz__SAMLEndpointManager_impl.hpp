#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__SAMLEndpointManager_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__SAMLEndpoint_def.hpp"
#include "Amazon/Util/Internal/zzzz__NamedSettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)()>(
    &::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2028e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.get_IsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::get_IsAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202ee60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "get_IsAvailable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.RegisterEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)(
    ::Amazon::Runtime::CredentialManagement::SAMLEndpoint*)>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::RegisterEndpoint)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x202ee68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "RegisterEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.TryGetEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)(
    ::StringW, ByRef<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>)>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::TryGetEndpoint)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x202efbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "TryGetEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.GetEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::CredentialManagement::SAMLEndpoint* (
    ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)(::StringW)>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::GetEndpoint)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2028efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "GetEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.UnregisterEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)(::StringW)>(
    &::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::UnregisterEndpoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x202f148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "UnregisterEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.ListEndpointNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)()>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::ListEndpointNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x202f164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "ListEndpointNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager.ListEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>* (
    ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::*)()>(&::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::ListEndpoints)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x202f180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "ListEndpoints",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::NamedSettingsManager*& Amazon::Runtime::CredentialManagement::SAMLEndpointManager::__cordl_internal_get_settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::NamedSettingsManager*> const&
Amazon::Runtime::CredentialManagement::SAMLEndpointManager::__cordl_internal_get_settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsManager;
}
constexpr void Amazon::Runtime::CredentialManagement::SAMLEndpointManager::__cordl_internal_set_settingsManager(::Amazon::Util::Internal::NamedSettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager* Amazon::Runtime::CredentialManagement::SAMLEndpointManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>());
}
inline void Amazon::Runtime::CredentialManagement::SAMLEndpointManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::CredentialManagement::SAMLEndpointManager::get_IsAvailable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "get_IsAvailable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::CredentialManagement::SAMLEndpointManager::RegisterEndpoint(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "RegisterEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samlEndpoint);
}
inline bool Amazon::Runtime::CredentialManagement::SAMLEndpointManager::TryGetEndpoint(::StringW endpointName, ByRef<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*> samlEndpoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "TryGetEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endpointName, samlEndpoint);
}
inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* Amazon::Runtime::CredentialManagement::SAMLEndpointManager::GetEndpoint(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "GetEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*, false>(this, ___internal_method, endpointName);
}
inline void Amazon::Runtime::CredentialManagement::SAMLEndpointManager::UnregisterEndpoint(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "UnregisterEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endpointName);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Runtime::CredentialManagement::SAMLEndpointManager::ListEndpointNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "ListEndpointNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>* Amazon::Runtime::CredentialManagement::SAMLEndpointManager::ListEndpoints() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*>::get(), "ListEndpoints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager::SAMLEndpointManager() {}
