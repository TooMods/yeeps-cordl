#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Device/zzzz__UnityAnalyticsIdentifier_def.hpp"
#include "Unity/Services/Core/Device/zzzz__IUserIdentifierProvider_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAnalyticsIdentifier.get_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Device::UnityAnalyticsIdentifier::*)()>(
    &::Unity::Services::Core::Device::UnityAnalyticsIdentifier::get_UserId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1557620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(), "get_UserId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAnalyticsIdentifier.set_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::UnityAnalyticsIdentifier::*)(::StringW)>(
    &::Unity::Services::Core::Device::UnityAnalyticsIdentifier::set_UserId)> {
  constexpr static std::size_t size = 0x2c334;
  constexpr static std::size_t addrs = 0x1557664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(), "set_UserId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::UnityAnalyticsIdentifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Device::UnityAnalyticsIdentifier::*)()>(
    &::Unity::Services::Core::Device::UnityAnalyticsIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15565f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr Unity::Services::Core::Device::UnityAnalyticsIdentifier::operator ::Unity::Services::Core::Device::IUserIdentifierProvider*() noexcept {
  return static_cast<::Unity::Services::Core::Device::IUserIdentifierProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider* Unity::Services::Core::Device::UnityAnalyticsIdentifier::i___Unity__Services__Core__Device__IUserIdentifierProvider() noexcept {
  return static_cast<::Unity::Services::Core::Device::IUserIdentifierProvider*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Core::Device::UnityAnalyticsIdentifier::get_UserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(),
                                                                             "get_UserId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Device::UnityAnalyticsIdentifier::set_UserId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(), "set_UserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Device::UnityAnalyticsIdentifier* Unity::Services::Core::Device::UnityAnalyticsIdentifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>());
}
inline void Unity::Services::Core::Device::UnityAnalyticsIdentifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::UnityAnalyticsIdentifier*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Device::UnityAnalyticsIdentifier::UnityAnalyticsIdentifier() {}
