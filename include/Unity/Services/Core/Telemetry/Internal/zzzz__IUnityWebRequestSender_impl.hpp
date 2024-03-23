#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IUnityWebRequestSender_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender.SendRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender::*)(
    ::UnityEngine::Networking::UnityWebRequest*, ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*)>(
    &::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender::SendRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>::get(), 0));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender::SendRequest(::UnityEngine::Networking::UnityWebRequest* request,
                                                                                            ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, callback);
}
