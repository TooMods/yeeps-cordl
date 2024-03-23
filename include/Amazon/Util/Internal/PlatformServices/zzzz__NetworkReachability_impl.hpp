#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkReachability_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__INetworkReachability_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatusEventArgs_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkReachability.get_NetworkStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::PlatformServices::NetworkStatus (
    ::Amazon::Util::Internal::PlatformServices::NetworkReachability::*)()>(&::Amazon::Util::Internal::PlatformServices::NetworkReachability::get_NetworkStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdaec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "get_NetworkStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkReachability.add_NetworkReachabilityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Util::Internal::PlatformServices::NetworkReachability::*)(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*)>(
        &::Amazon::Util::Internal::PlatformServices::NetworkReachability::add_NetworkReachabilityChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdaf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "add_NetworkReachabilityChanged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkReachability.remove_NetworkReachabilityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Util::Internal::PlatformServices::NetworkReachability::*)(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*)>(
        &::Amazon::Util::Internal::PlatformServices::NetworkReachability::remove_NetworkReachabilityChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdaf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "remove_NetworkReachabilityChanged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkReachability._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::NetworkReachability::*)()>(
    &::Amazon::Util::Internal::PlatformServices::NetworkReachability::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdafb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::INetworkReachability"
constexpr Amazon::Util::Internal::PlatformServices::NetworkReachability::operator ::Amazon::Util::Internal::PlatformServices::INetworkReachability*() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Util::Internal::PlatformServices::INetworkReachability"
constexpr ::Amazon::Util::Internal::PlatformServices::INetworkReachability*
Amazon::Util::Internal::PlatformServices::NetworkReachability::i___Amazon__Util__Internal__PlatformServices__INetworkReachability() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>(static_cast<void*>(this));
}
inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::NetworkReachability::get_NetworkStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "get_NetworkStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::PlatformServices::NetworkStatus, false>(this, ___internal_method);
}
inline void
Amazon::Util::Internal::PlatformServices::NetworkReachability::add_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "add_NetworkReachabilityChanged",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
Amazon::Util::Internal::PlatformServices::NetworkReachability::remove_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), "remove_NetworkReachabilityChanged",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::Internal::PlatformServices::NetworkReachability* Amazon::Util::Internal::PlatformServices::NetworkReachability::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>());
}
inline void Amazon::Util::Internal::PlatformServices::NetworkReachability::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkReachability*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkReachability::NetworkReachability() {}
