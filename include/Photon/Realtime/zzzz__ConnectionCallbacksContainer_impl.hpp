#pragma once
#include "Photon/Realtime/zzzz__IConnectionCallbacks_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__ConnectionCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(
    &::Photon::Realtime::ConnectionCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2239534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)()>(
    &::Photon::Realtime::ConnectionCallbacksContainer::OnConnected)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2242314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(),
                                                                               "OnConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnConnectedToMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)()>(
    &::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2240554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(),
                                                                               "OnConnectedToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnRegionListReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::RegionHandler*)>(
    &::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2240c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnRegionListReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::DisconnectCause)>(
    &::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2242688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*)>(&::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2240710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnCustomAuthenticationResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::StringW)>(
    &::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x223ffcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnCustomAuthenticationFailed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr Photon::Realtime::ConnectionCallbacksContainer::operator ::Photon::Realtime::IConnectionCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* Photon::Realtime::ConnectionCallbacksContainer::i___Photon__Realtime__IConnectionCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::ConnectionCallbacksContainer* Photon::Realtime::ConnectionCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::ConnectionCallbacksContainer*>(client));
}
inline void Photon::Realtime::ConnectionCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(),
                                                                             "OnConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(),
                                                                             "OnConnectedToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnRegionListReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionHandler);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected(::Photon::Realtime::DisconnectCause cause) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cause);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnCustomAuthenticationResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed(::StringW debugMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::ConnectionCallbacksContainer*>::get(), "OnCustomAuthenticationFailed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugMessage);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ConnectionCallbacksContainer::ConnectionCallbacksContainer() {}
