#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Device/zzzz__UnityAdsIdentifier_def.hpp"
#include "Unity/Services/Core/Device/zzzz__IUserIdentifierProvider_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAdsIdentifier.get_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Device::UnityAdsIdentifier::*)()>(
    &::Unity::Services::Core::Device::UnityAdsIdentifier::get_UserId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1557534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(),
                                                                               "get_UserId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAdsIdentifier.set_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::UnityAdsIdentifier::*)(::StringW)>(
    &::Unity::Services::Core::Device::UnityAdsIdentifier::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15575b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(), "set_UserId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAdsIdentifier.get_IdentifierForInstallAndroid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Core::Device::UnityAdsIdentifier::get_IdentifierForInstallAndroid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1557538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(), "get_IdentifierForInstallAndroid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAdsIdentifier.set_IdentifierForInstallAndroid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::Services::Core::Device::UnityAdsIdentifier::set_IdentifierForInstallAndroid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x15575b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(), "set_IdentifierForInstallAndroid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAdsIdentifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::UnityAdsIdentifier::*)()>(
    &::Unity::Services::Core::Device::UnityAdsIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15565f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr Unity::Services::Core::Device::UnityAdsIdentifier::operator ::Unity::Services::Core::Device::IUserIdentifierProvider*() noexcept {
  return static_cast<::Unity::Services::Core::Device::IUserIdentifierProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider* Unity::Services::Core::Device::UnityAdsIdentifier::i___Unity__Services__Core__Device__IUserIdentifierProvider() noexcept {
  return static_cast<::Unity::Services::Core::Device::IUserIdentifierProvider*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Core::Device::UnityAdsIdentifier::get_UserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(),
                                                                             "get_UserId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Device::UnityAdsIdentifier::set_UserId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(), "set_UserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Core::Device::UnityAdsIdentifier::get_IdentifierForInstallAndroid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(),
                                                                             "get_IdentifierForInstallAndroid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Device::UnityAdsIdentifier::set_IdentifierForInstallAndroid(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(), "set_IdentifierForInstallAndroid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Unity::Services::Core::Device::UnityAdsIdentifier* Unity::Services::Core::Device::UnityAdsIdentifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Device::UnityAdsIdentifier*>());
}
inline void Unity::Services::Core::Device::UnityAdsIdentifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAdsIdentifier*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Device::UnityAdsIdentifier::UnityAdsIdentifier() {}
