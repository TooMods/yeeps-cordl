#pragma once
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IWebRpcCallback.OnWebRpcResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::IWebRpcCallback::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::IWebRpcCallback::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IWebRpcCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IWebRpcCallback*>::get(), 0));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IWebRpcCallback::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse* response) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::IWebRpcCallback*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
