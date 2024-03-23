#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__CloudProjectId_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::CloudProjectId.GetCloudProjectId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Configuration::CloudProjectId::*)()>(
    &::Unity::Services::Core::Configuration::CloudProjectId::GetCloudProjectId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::CloudProjectId*>::get(),
                                                                               "GetCloudProjectId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::CloudProjectId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::CloudProjectId::*)()>(
    &::Unity::Services::Core::Configuration::CloudProjectId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::CloudProjectId*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::ICloudProjectId"
constexpr Unity::Services::Core::Configuration::CloudProjectId::operator ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*() noexcept {
  return static_cast<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::ICloudProjectId"
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*
Unity::Services::Core::Configuration::CloudProjectId::i___Unity__Services__Core__Configuration__Internal__ICloudProjectId() noexcept {
  return static_cast<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Configuration::CloudProjectId::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Configuration::CloudProjectId::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Core::Configuration::CloudProjectId::GetCloudProjectId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::CloudProjectId*>::get(),
                                                                             "GetCloudProjectId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Configuration::CloudProjectId* Unity::Services::Core::Configuration::CloudProjectId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Configuration::CloudProjectId*>());
}
inline void Unity::Services::Core::Configuration::CloudProjectId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::CloudProjectId*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::CloudProjectId::CloudProjectId() {}
