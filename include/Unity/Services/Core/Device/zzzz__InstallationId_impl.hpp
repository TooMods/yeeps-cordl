#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Device/zzzz__InstallationId_def.hpp"
#include "Unity/Services/Core/Device/Internal/zzzz__IInstallationId_def.hpp"
#include "Unity/Services/Core/Device/zzzz__IUserIdentifierProvider_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::InstallationId::*)()>(
    &::Unity::Services::Core::Device::InstallationId::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1556554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId.GetOrCreateIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Device::InstallationId::*)()>(
    &::Unity::Services::Core::Device::InstallationId::GetOrCreateIdentifier)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1556600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                               "GetOrCreateIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId.CreateIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::InstallationId::*)()>(
    &::Unity::Services::Core::Device::InstallationId::CreateIdentifier)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x155662c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                               "CreateIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId.ReadIdentifierFromFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Core::Device::InstallationId::ReadIdentifierFromFile)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x15568a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                               "ReadIdentifierFromFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId.WriteIdentifierToFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::Services::Core::Device::InstallationId::WriteIdentifierToFile)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1556914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(), "WriteIdentifierToFile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::InstallationId.GenerateGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Core::Device::InstallationId::GenerateGuid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x15568e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                               "GenerateGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Device::Internal::IInstallationId"
constexpr Unity::Services::Core::Device::InstallationId::operator ::Unity::Services::Core::Device::Internal::IInstallationId*() noexcept {
  return static_cast<::Unity::Services::Core::Device::Internal::IInstallationId*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Device::Internal::IInstallationId"
constexpr ::Unity::Services::Core::Device::Internal::IInstallationId* Unity::Services::Core::Device::InstallationId::i___Unity__Services__Core__Device__Internal__IInstallationId() noexcept {
  return static_cast<::Unity::Services::Core::Device::Internal::IInstallationId*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Device::InstallationId::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Device::InstallationId::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
constexpr ::StringW& Unity::Services::Core::Device::InstallationId::__cordl_internal_get_Identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr ::StringW const& Unity::Services::Core::Device::InstallationId::__cordl_internal_get_Identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr void Unity::Services::Core::Device::InstallationId::__cordl_internal_set_Identifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider*& Unity::Services::Core::Device::InstallationId::__cordl_internal_get_UnityAdsIdentifierProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityAdsIdentifierProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Device::IUserIdentifierProvider*> const&
Unity::Services::Core::Device::InstallationId::__cordl_internal_get_UnityAdsIdentifierProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityAdsIdentifierProvider;
}
constexpr void Unity::Services::Core::Device::InstallationId::__cordl_internal_set_UnityAdsIdentifierProvider(::Unity::Services::Core::Device::IUserIdentifierProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnityAdsIdentifierProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider*& Unity::Services::Core::Device::InstallationId::__cordl_internal_get_UnityAnalyticsIdentifierProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityAnalyticsIdentifierProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Device::IUserIdentifierProvider*> const&
Unity::Services::Core::Device::InstallationId::__cordl_internal_get_UnityAnalyticsIdentifierProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityAnalyticsIdentifierProvider;
}
constexpr void Unity::Services::Core::Device::InstallationId::__cordl_internal_set_UnityAnalyticsIdentifierProvider(::Unity::Services::Core::Device::IUserIdentifierProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnityAnalyticsIdentifierProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Device::InstallationId* Unity::Services::Core::Device::InstallationId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Device::InstallationId*>());
}
inline void Unity::Services::Core::Device::InstallationId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Core::Device::InstallationId::GetOrCreateIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                             "GetOrCreateIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Device::InstallationId::CreateIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                             "CreateIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Core::Device::InstallationId::ReadIdentifierFromFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                             "ReadIdentifierFromFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Device::InstallationId::WriteIdentifierToFile(::StringW identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(), "WriteIdentifierToFile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, identifier);
}
inline ::StringW Unity::Services::Core::Device::InstallationId::GenerateGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::InstallationId*>::get(),
                                                                             "GenerateGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Device::InstallationId::InstallationId() {}
