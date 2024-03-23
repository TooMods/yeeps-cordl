#pragma once
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)()>(&::Photon::Realtime::IConnectionCallbacks::OnConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnConnectedToMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)()>(
    &::Photon::Realtime::IConnectionCallbacks::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)(::Photon::Realtime::DisconnectCause)>(
    &::Photon::Realtime::IConnectionCallbacks::OnDisconnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnRegionListReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)(::Photon::Realtime::RegionHandler*)>(
    &::Photon::Realtime::IConnectionCallbacks::OnRegionListReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnCustomAuthenticationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*)>(&::Photon::Realtime::IConnectionCallbacks::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IConnectionCallbacks.OnCustomAuthenticationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IConnectionCallbacks::*)(::StringW)>(
    &::Photon::Realtime::IConnectionCallbacks::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 5));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IConnectionCallbacks::OnConnected() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::IConnectionCallbacks::OnConnectedToMaster() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::IConnectionCallbacks::OnDisconnected(::Photon::Realtime::DisconnectCause cause) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cause);
}
inline void Photon::Realtime::IConnectionCallbacks::OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionHandler);
}
inline void Photon::Realtime::IConnectionCallbacks::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Photon::Realtime::IConnectionCallbacks::OnCustomAuthenticationFailed(::StringW debugMessage) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IConnectionCallbacks*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugMessage);
}
