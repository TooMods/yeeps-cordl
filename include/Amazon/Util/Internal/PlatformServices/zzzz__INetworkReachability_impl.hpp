#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__INetworkReachability_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatusEventArgs_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::INetworkReachability.get_NetworkStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::PlatformServices::NetworkStatus (
    ::Amazon::Util::Internal::PlatformServices::INetworkReachability::*)()>(&::Amazon::Util::Internal::PlatformServices::INetworkReachability::get_NetworkStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::INetworkReachability.add_NetworkReachabilityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Util::Internal::PlatformServices::INetworkReachability::*)(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*)>(
        &::Amazon::Util::Internal::PlatformServices::INetworkReachability::add_NetworkReachabilityChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::INetworkReachability.remove_NetworkReachabilityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Util::Internal::PlatformServices::INetworkReachability::*)(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>*)>(
        &::Amazon::Util::Internal::PlatformServices::INetworkReachability::remove_NetworkReachabilityChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 2));
    return ___internal_method;
  }
};
inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::INetworkReachability::get_NetworkStatus() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::PlatformServices::NetworkStatus, false>(this, ___internal_method);
}
inline void
Amazon::Util::Internal::PlatformServices::INetworkReachability::add_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Util::Internal::PlatformServices::INetworkReachability::remove_NetworkReachabilityChanged(
    ::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::INetworkReachability*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
