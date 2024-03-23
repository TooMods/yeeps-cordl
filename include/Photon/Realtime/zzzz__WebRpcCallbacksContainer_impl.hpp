#pragma once
#include "Photon/Realtime/zzzz__IWebRpcCallback_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__WebRpcCallbacksContainer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::WebRpcCallbacksContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::WebRpcCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(
    &::Photon::Realtime::WebRpcCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2239734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::WebRpcCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::WebRpcCallbacksContainer.OnWebRpcResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::WebRpcCallbacksContainer::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x22418ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::WebRpcCallbacksContainer*>::get(), "OnWebRpcResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IWebRpcCallback"
constexpr Photon::Realtime::WebRpcCallbacksContainer::operator ::Photon::Realtime::IWebRpcCallback*() noexcept {
  return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IWebRpcCallback"
constexpr ::Photon::Realtime::IWebRpcCallback* Photon::Realtime::WebRpcCallbacksContainer::i___Photon__Realtime__IWebRpcCallback() noexcept {
  return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::WebRpcCallbacksContainer* Photon::Realtime::WebRpcCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::WebRpcCallbacksContainer*>(client));
}
inline void Photon::Realtime::WebRpcCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::WebRpcCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::WebRpcCallbacksContainer*>::get(), "OnWebRpcResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::WebRpcCallbacksContainer::WebRpcCallbacksContainer() {}
